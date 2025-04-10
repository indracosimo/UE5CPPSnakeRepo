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

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Setup pawn when game starts. */
	virtual void BeginPlay() override;

	/** Cleanup pawn when game ends. */
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** Perform pawn updates that need to happen every frame. */
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
	class USphereComponent* Sphere;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* Body;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;


};
