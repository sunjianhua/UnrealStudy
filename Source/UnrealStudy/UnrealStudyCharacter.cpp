// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealStudy.h"
#include "UnrealStudyCharacter.h"


// Sets default values
AUnrealStudyCharacter::AUnrealStudyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUnrealStudyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnrealStudyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUnrealStudyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("F_Test", IE_Pressed, this, &AUnrealStudyCharacter::FTest);
}

void AUnrealStudyCharacter::FTest()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
}
