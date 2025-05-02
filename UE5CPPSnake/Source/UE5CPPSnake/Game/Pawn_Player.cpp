// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn_Player.h"
#include "DefaultPlayerController.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APawn_Player::APawn_Player()
{
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SetRootComponent(Sphere);

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(Sphere);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Sphere);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	MoveScale = 1.0f;
	RotateScale = 100.0f;
	bFreeFly = false;	
}

void APawn_Player::BeginPlay()
{
	Super::BeginPlay();

	if (ScoreWidgetClass)
	{
		ScoreWidget = CreateWidget<UScoreWidget>(GetWorld(), ScoreWidgetClass);
		if (ScoreWidget)
		{
			ScoreWidget->AddToViewport();
			ScoreWidget->SetHighScore(Score);
		}
	}
}

// Called to bind functionality to input
void APawn_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	ADefaultPlayerController* DPC = Cast<ADefaultPlayerController>(Controller);
	check(EIC && DPC);
	EIC->BindAction(DPC->MoveAction, ETriggerEvent::Triggered, this, &APawn_Player::Move);
	EIC->BindAction(DPC->RotateAction, ETriggerEvent::Triggered, this, &APawn_Player::Rotate);
	EIC->BindAction(DPC->FreeFlyAction, ETriggerEvent::Started, this, &APawn_Player::ToggleFreeFly);


	ULocalPlayer* LocalPlayer = DPC->GetLocalPlayer();
	check(LocalPlayer);
	UEnhancedInputLocalPlayerSubsystem* 
		Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);
	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(DPC->PawnMappingContext, 0);
}

void APawn_Player::Move(const FInputActionValue& ActionValue)
{
	FVector Input = ActionValue.Get<FInputActionValue::Axis3D>();
	AddMovementInput(GetActorRotation().RotateVector(Input), MoveScale);
}

void APawn_Player::Rotate(const FInputActionValue& ActionValue)
{
	FRotator Input(ActionValue[0], ActionValue[1], ActionValue[2]);
	Input *= GetWorld()->GetDeltaSeconds() * RotateScale;
	if (bFreeFly) 
	{
		AddActorLocalRotation(Input); //converts rotator to quaternion before doing calc, gets around gimbal lock
	}
	else 
	{
		Input += GetActorRotation();
		Input.Pitch = FMath::ClampAngle(Input.Pitch, -89.9f, 89.9f);
		Input.Roll = 0;
		SetActorRotation(Input);
	}
}

void APawn_Player::ToggleFreeFly()
{
	bFreeFly = !bFreeFly;
}

void APawn_Player::AddSegment()
{
	if (!Body) return;
	if (!SegmentMesh) return;

	UStaticMeshComponent* NewSegment = NewObject<UStaticMeshComponent>(this);

	NewSegment->SetCollisionEnabled(ECollisionEnabled::NoCollision); //
	NewSegment->RegisterComponent();
	NewSegment->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	NewSegment->SetStaticMesh(SegmentMesh);

	USceneComponent* LastComponent = (BodySegments.Num() > 0) ? BodySegments.Last() : Body;

	//add segmens to body 
	FVector SpawnLocation = LastComponent->GetComponentLocation() - LastComponent->GetForwardVector() * SegmentSpacing;
	NewSegment->SetWorldLocation(SpawnLocation);

	BodySegments.Add(NewSegment);
}

void APawn_Player::Tick(float DeltaTime) //Last recorded pos makes it so that the segments are spaced
{
	Super::Tick(DeltaTime);

	LastRecordedPosition += DeltaTime;

	if (LastRecordedPosition >= RecordedPosition) 
	{
		LastRecordedPosition = 0.f;

		FVector CurrentLocation = GetActorLocation(); 
		
		if (GetVelocity().IsNearlyZero())
		{
			if (StillPositions.Num() != BodySegments.Num()) //stillpositions retains the last still pos even when standing still, otherwise they all collapse
			{
				StillPositions.SetNum(BodySegments.Num());
				for (int32 i = 0; i < BodySegments.Num(); ++i) 
				{
					StillPositions[i] = BodySegments[i]->GetComponentLocation();
				}
			}
			float SimulatedSpeed = 100.f;
			FVector ForwardOffset = GetActorForwardVector() * SimulatedSpeed * DeltaTime;
			CurrentLocation = HeadPositions.Num() > 0 ? HeadPositions[0] + ForwardOffset : CurrentLocation + ForwardOffset;
		}
		else 
		{
			StillPositions.Empty();

			if (HeadPositions.Num() > 0 && CurrentLocation.Equals(HeadPositions[0], 0.1f)) 
			{
				return;
			}
		}
		HeadPositions.Insert(CurrentLocation, 0);

		// limits path history so it doesnt grow forever
		int32 MaxPositions = (BodySegments.Num() + 1) * 10;
		if (HeadPositions.Num() > MaxPositions)
		{
			HeadPositions.SetNum(MaxPositions);
		}
	}
	UpdateBodySegments();
}


void APawn_Player::UpdateBodySegments()
{
	if (GetVelocity().IsNearlyZero() && StillPositions.Num() == BodySegments.Num())
	{
		for (int32 i = 0; i < BodySegments.Num(); ++i)
		{
			FVector CurrentLocation = BodySegments[i]->GetComponentLocation();
			FVector NewLocation = FMath::VInterpTo(CurrentLocation, StillPositions[i], GetWorld()->GetDeltaSeconds(), 5.0f);
			BodySegments[i]->SetWorldLocation(NewLocation);
		}
		return;
	}

	const float SegmentDistance = SegmentSpacing * 2.0f;
	for (int32 i = 0; i < BodySegments.Num(); ++i)
	{
		float TargetDistance = (i + 1) * SegmentSpacing;
		float Traveled = 0.0f;

		FVector TargetLocation = GetActorLocation();

		for (int32 j = 1; j < HeadPositions.Num(); ++j)
		{
			float Segment = FVector::Dist(HeadPositions[j - 1], HeadPositions[j]);
			Traveled += Segment;
			if (Traveled >= TargetDistance)
			{
				float Alpha = (TargetDistance - (Traveled - Segment)) / Segment;
				TargetLocation = FMath::Lerp(HeadPositions[j - 1], HeadPositions[j], Alpha);
				break;
			}
			else if (j == HeadPositions.Num() - 1)
			{
				TargetLocation = HeadPositions[j];
				break;
			}
		}

		FVector CurrentLocation = BodySegments[i]->GetComponentLocation();
		FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, GetWorld()->GetDeltaSeconds(), 5.0f);
		BodySegments[i]->SetWorldLocation(NewLocation);
	}
}

void APawn_Player::AddScore(int Points)
{
	Score += Points;
	if (ScoreWidget) 
	{
		ScoreWidget->SetHighScore(Score);
	}
	if (Score >= 5) 
	{
		SetActorLocation(FVector(4160.f, 28730.f, 2330.f));
	}
}


