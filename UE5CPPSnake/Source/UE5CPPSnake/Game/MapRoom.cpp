// Fill out your copyright notice in the Description page of Project Settings.


#include "MapRoom.h"
#include "Pawn_Player.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AMapRoom::AMapRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GridSize = 1000.f;
	RoomSize = 3;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);

	Walls = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Walls"));
	Walls->SetupAttachment(SceneComponent);
}

void AMapRoom::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (BuiltGridSize == GridSize && BuiltRoomSize == RoomSize)
		return;

	//UE_LOG(LogSnake, Log,
	//	TEXT("AMapRoom::OnConstruction Building Room Size %d (Built=%d this=%x)"),
	//	RoomSize, BuiltRoomSize, this);
	
	BuiltGridSize = GridSize;
	BuiltRoomSize = RoomSize;

	Walls->ClearInstances();

	int32 HalfSize = RoomSize / 2;
	int32 WallOffset = (HalfSize + 1) * GridSize;
	FVector Translation(WallOffset, 0.f, 0.f);

	for (int32 y = -HalfSize; y <= HalfSize; y++) 
	{
		Translation.Y = GridSize * y;

		for (int32 z = -HalfSize; z <= HalfSize; z++) 
		{
			Translation.Z = GridSize * z;
			Walls->AddInstance(FTransform(Translation));
			Walls->AddInstance(FTransform(FRotator(0.f, 180.f, 0.f).RotateVector(Translation))); //Spawns walls on opposite side
		}
	}
}


