// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MCUEGameMode.h"
#include "MCUEHUD.h"
#include "MCUECharacter.h"
#include "UObject/ConstructorHelpers.h"

AMCUEGameMode::AMCUEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMCUEHUD::StaticClass();
}
