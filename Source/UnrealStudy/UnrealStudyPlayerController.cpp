// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealStudy.h"
#include "UnrealStudyPlayerController.h"

void AUnrealStudyPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AUnrealStudyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//InputComponent->BindKey(EKeys::F, IE_Released, this, &AUnrealStudyPlayerController::FTest);
	InputComponent->BindAction("F_Test", IE_Pressed, this, &AUnrealStudyPlayerController::FTest);
}

void AUnrealStudyPlayerController::FTest()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is AUnrealStudyPlayerController!"));
}
