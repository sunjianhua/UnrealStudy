// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "UnrealStudyGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class UNREALSTUDY_API AUnrealStudyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
	TSubclassOf<UUserProfile> UPBlueprintClassName;
};
