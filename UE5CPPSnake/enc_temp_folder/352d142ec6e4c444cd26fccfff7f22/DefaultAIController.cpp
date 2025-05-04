// Fill out your copyright notice in the Description page of Project Settings.

#include "FoodItem.h" 
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "DefaultAIController.h"

ADefaultAIController::ADefaultAIController()
{
}

void ADefaultAIController::BeginPlay()
{
	MoveToFood();
}

void ADefaultAIController::MoveToFood()
{
	AActor* ClosestFood = FindClosestFood();
	if (ClosestFood) 
	{
		FVector Direction = (ClosestFood->GetActorLocation() - GetPawn()->GetActorLocation()).GetSafeNormal();
		GetPawn()->AddMovementInput(Direction, 1.f);
	}
}

AActor* ADefaultAIController::FindClosestFood()
{
	TArray<AActor*> FoodItems;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodItem::StaticClass(), FoodItems);

	AActor* ClosestFood = nullptr;
	float ClosestDistance = FLT_MAX;

	for (AActor* Food : FoodItems)
	{
		if (Food) 
		{
			float Distance = FVector::Dist(GetPawn()->GetActorLocation(), Food->GetActorLocation());
			if (Distance < ClosestDistance)
			{
				ClosestDistance = Distance;
				ClosestFood = Food;
			}
		}
	}
	return ClosestFood;
}
