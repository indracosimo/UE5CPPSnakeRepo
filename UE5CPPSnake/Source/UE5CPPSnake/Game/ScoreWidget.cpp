// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreWidget.h"
#include "Components/TextBlock.h"
#include "FoodItem.h"


void UScoreWidget::SetHighScore(int score)
{
	if (ScoreText)
		ScoreText->SetText(FText::FromString(FString::FromInt(score)));
}
