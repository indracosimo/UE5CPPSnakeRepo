// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DefaultAIController.generated.h"

/**
 * 
 */
UCLASS()
class UE5CPPSNAKE_API ADefaultAIController : public AAIController
{
	GENERATED_BODY()

public:
	ADefaultAIController();
protected:
	virtual void BeginPlay() override;
private:
	void MoveToFood();

	AActor* FindClosestFood();

	UPROPERTY(EditAnywhere, Category="AI")
	float SearchRadius = 1000.f;
	
};
