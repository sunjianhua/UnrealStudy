// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ColoredTexture.generated.h"

/**
 * 
 */
USTRUCT()
struct FColoredTexture
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	UTexture* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FLinearColor Color;
};
