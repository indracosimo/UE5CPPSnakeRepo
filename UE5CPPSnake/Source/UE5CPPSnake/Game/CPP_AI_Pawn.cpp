// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_AI_Pawn.h"
#include "DefaultAIController.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
ACPP_AI_Pawn::ACPP_AI_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    SetRootComponent(Sphere);

    Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
    Body->SetupAttachment(Sphere);

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(Sphere);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

    Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

    MoveScale = 1.0f;
    RotateScale = 100.0f;
}

// Called when the game starts or when spawned
void ACPP_AI_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_AI_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

