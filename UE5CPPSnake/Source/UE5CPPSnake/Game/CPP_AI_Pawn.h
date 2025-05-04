// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CPP_AI_Pawn.generated.h"



UCLASS()
class UE5CPPSNAKE_API ACPP_AI_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_AI_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    class USphereComponent* Sphere;

    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* Body;

    UPROPERTY(VisibleAnywhere)
    class USpringArmComponent* SpringArm;

    UPROPERTY(VisibleAnywhere)
    class UCameraComponent* Camera;

    UPROPERTY(VisibleAnywhere)
    class UFloatingPawnMovement* Movement;

    float MoveScale;
    float RotateScale;

};
