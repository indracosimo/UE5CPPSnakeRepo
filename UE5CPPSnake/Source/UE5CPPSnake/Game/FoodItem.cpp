// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodItem.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Pawn_Player.h"

// Sets default values
AFoodItem::AFoodItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(50.f);
	CollisionComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	RootComponent = CollisionComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AFoodItem::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AFoodItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoodItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFoodItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor!= this)) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,
			TEXT("Touched food"));


		APawn_Player* Player = Cast<APawn_Player>(OtherActor);
		if (Player) 
		{
			Player->AddSegment();
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,
				TEXT("GIRTH"));
		}

		Destroy();
	}
}


