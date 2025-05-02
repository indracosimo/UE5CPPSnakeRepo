// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreWidget.generated.h"

/**
 * 
 */

class UTextBlock;

UCLASS()
class UE5CPPSNAKE_API UScoreWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable) void SetHighScore(int score);

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ScoreText;
	
};
