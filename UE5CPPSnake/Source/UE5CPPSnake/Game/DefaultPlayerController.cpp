// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPlayerController.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "InputModifiers.h"

void ADefaultPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	PawnMappingContext = NewObject<UInputMappingContext>(this);

	MoveAction = NewObject<UInputAction>(this);
	MoveAction->ValueType = EInputActionValueType::Axis3D;
	PawnMappingContext->MapKey(MoveAction, EKeys::W);
	FEnhancedActionKeyMapping& Mapping = PawnMappingContext->MapKey(MoveAction, EKeys::S);
	UInputModifierNegate* Negate = NewObject<UInputModifierNegate>(this);
	Mapping.Modifiers.Add(Negate);
}
