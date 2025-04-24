// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapRoom.generated.h"

UCLASS()
class UE5CPPSNAKE_API AMapRoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapRoom();

	//build or rebuild room if needed
	virtual void OnConstruction(const FTransform& Transform) override;

	//static mesh to use for walls
	UPROPERTY(EditAnywhere)
	class UInstancedStaticMeshComponent* Walls;

	//static mesh for edges where walls collide
	UPROPERTY(EditAnywhere)
	class UInstancedStaticMeshComponent* Edges;

	//size of grid 
	UPROPERTY(EditAnywhere, meta = (ClampMin = 0))
	float GridSize;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 1, ClampMax = 25))
	uint32 RoomSize;

private: 
	uint32 BuiltGridSize;
	uint32 BuiltRoomSize;
};
