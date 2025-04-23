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

//oid APawn_Player::BeginPlay() //test
//
//	//Super::BeginPlay();;
//	//if (Body&&Movement)
//	//{
//	//	Movement->MaxSpeed *= Body->GetMass();
//	//}
//