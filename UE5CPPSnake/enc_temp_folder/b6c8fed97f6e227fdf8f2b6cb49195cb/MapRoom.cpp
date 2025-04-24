//// Fill out your copyright notice in the Description page of Project Settings.


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

	Edges = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Edges"));
	Edges->SetupAttachment(SceneComponent);
}

static FORCEINLINE void AddInstance(UInstancedStaticMeshComponent* Component,
	const FRotator& Rotation, const FVector& Translation) 
{
	Component->AddInstance(FTransform(Rotation, Rotation.RotateVector(Translation)));
}
//rotations used while adding mesh instances. assuming the mesh has been created with an orientation of positive x
static const FRotator PositiveX(0.f, 0.f, 0.f);
static const FRotator NegativeX(0.f, 180.f, 0.f);
static const FRotator PositiveY(0.f, 90.f, 0.f);
static const FRotator NegativeY(0.f, 270.f, 0.f);
static const FRotator PositiveZ(90.f, 0.f, 0.f);
static const FRotator NegativeZ(-90.f, 0.f, 0.f);

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
	Edges->ClearInstances();

	int32 HalfSize = RoomSize / 2;
	int32 WallOffset = (HalfSize + 1) * GridSize;
	FVector Translation(WallOffset, 0.f, 0.f);

	for (int32 y = -HalfSize; y <= HalfSize; y++) 
	{
		Translation.Y = GridSize * y;

		for (int32 z = -HalfSize; z <= HalfSize; z++) 
		{
			Translation.Z = GridSize * z;
			AddInstance(Walls, PositiveX, Translation);
			AddInstance(Walls, NegativeX, Translation);
			AddInstance(Walls, PositiveY, Translation);
			AddInstance(Walls, NegativeY, Translation);
			AddInstance(Walls, PositiveZ, Translation);
			AddInstance(Walls, NegativeZ, Translation);

			//Walls->AddInstance(FTransform(Translation));
			//Walls->AddInstance(FTransform(FRotator(0.f, 90.f, 0.f),
			//	FRotator(0.f, 90.f, 0.f).RotateVector(Translation))); //pass in rotation through mesh so it rotates in the same direction
			//Walls->AddInstance(FTransform(FRotator(0.f, 180.f, 0.f),
			//	FRotator(0.f, 180.f, 0.f).RotateVector(Translation))); //Spawns walls on opposite side
			//Walls->AddInstance(FTransform(FRotator(0.f, 270.f, 0.f),
			//	FRotator(0.f, 270.f, 0.f).RotateVector(Translation)));
			//Walls->AddInstance(FTransform(FRotator(90.f, 0.f, 0.f),
			//	FRotator(90.f, 0.f, 0.f).RotateVector(Translation)));
			//Walls->AddInstance(FTransform(FRotator(-90.f, 0.f, 0.f),
			//	FRotator(-90.f, 0.f, 0.f).RotateVector(Translation)));
		}
		//edges
		Translation.Z = WallOffset;
		AddInstance(Edges, PositiveX, Translation);
		AddInstance(Edges, NegativeX, Translation);
		AddInstance(Edges, PositiveY, Translation);
		AddInstance(Edges, NegativeY, Translation);
	}
}


