// Copyright Epic Games, Inc. All Rights Reserved.

#include "CIS452_Second_GameGameMode.h"
#include "CIS452_Second_GamePlayerController.h"
#include "CIS452_Second_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACIS452_Second_GameGameMode::ACIS452_Second_GameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACIS452_Second_GamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}