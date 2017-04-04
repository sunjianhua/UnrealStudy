// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "UnrealStudyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALSTUDY_API AUnrealStudyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AUnrealStudyPlayerController();
	
protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

	void FTest();
};
