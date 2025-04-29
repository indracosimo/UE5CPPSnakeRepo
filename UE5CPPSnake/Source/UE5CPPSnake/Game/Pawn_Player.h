// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Pawn_Player.generated.h"


UCLASS()
class UE5CPPSNAKE_API APawn_Player : public APawn
{
	GENERATED_BODY()

public:

	APawn_Player();

	void UpdateBodySegments();

	void Tick(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Move(const struct FInputActionValue& ActionValue);

	void Rotate(const struct FInputActionValue& ActionValue);

	void ToggleFreeFly();	

	void AddSegment();

	//virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class USphereComponent* Sphere;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* Body;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;
 
	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* Movement;

	UPROPERTY(EditAnywhere)
	float MoveScale;

	UPROPERTY(EditAnywhere)
	float RotateScale;

	UPROPERTY(EditAnywhere)
	uint32 bFreeFly : 1;
	//Segments
	UPROPERTY(EditAnywhere, Category = "Segment")
	UStaticMesh* SegmentMesh;
	UPROPERTY(EditAnywhere)
	TArray<UStaticMeshComponent*> BodySegments;

	UPROPERTY(EditDefaultsOnly, Category = "Snake")
	float SegmentSpacing = 100.0f;
	
	UPROPERTY(EditAnywhere)
	float RecordedPosition = 0.05f;

	float LastRecordedPosition = 0.f;

	TArray<FVector> HeadPositions;

	TArray<FVector> SegmentPositions;

};
