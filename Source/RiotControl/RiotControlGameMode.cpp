// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "RiotControl.h"
#include "RiotControlGameMode.h"
#include "RiotControlPlayerController.h"
#include "RiotControlCharacter.h"

ARiotControlGameMode::ARiotControlGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARiotControlPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}