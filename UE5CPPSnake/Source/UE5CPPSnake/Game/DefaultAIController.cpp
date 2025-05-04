// Fill out your copyright notice in the Description page of Project Settings.

#include "DefaultAIController.h"
#include "FoodItem.h" 
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"


ADefaultAIController::ADefaultAIController()
{
}

void ADefaultAIController::BeginPlay()
{
	MoveToFood();
}
void ADefaultAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveToFood();
}

void ADefaultAIController::MoveToFood() //dont know why the ai is not moving, defaultAIcontroller is set as controller
{
	AActor* ClosestFood = FindClosestFood();
	if (ClosestFood) 
	{
		FVector Direction = (ClosestFood->GetActorLocation() - GetPawn()->GetActorLocation()).GetSafeNormal();
		GetPawn()->AddMovementInput(Direction, 1001.f);
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
