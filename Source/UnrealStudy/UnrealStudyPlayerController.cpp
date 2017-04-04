// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealStudy.h"
#include "UnrealStudyPlayerController.h"
#include "UnrealStudyGameModeBase.h"

AUnrealStudyPlayerController::AUnrealStudyPlayerController()
{
}

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
	/** UObject 测试：创建销毁 */
	AUnrealStudyGameModeBase *gm = Cast<AUnrealStudyGameModeBase>(GetWorld()->GetAuthGameMode());
	if (!gm)
		return;

	//UUserProfile* Profile = ConstructObject<UUserProfile>(gm->UPBlueprintClassName);
	UUserProfile* Profile = NewObject<UUserProfile>(GetTransientPackage(), UUserProfile::StaticClass());
	Profile->ConditionalBeginDestroy();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("测试创建和销毁"));
}
