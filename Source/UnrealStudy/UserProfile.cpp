// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealStudy.h"
#include "UserProfile.h"

UUserProfile::UUserProfile()
{
	UE_LOG(LogTemp, Log, TEXT("UUserProfile"));
}

UUserProfile::~UUserProfile()
{
	UE_LOG(LogTemp, Log, TEXT("~UUserProfile"));
}
