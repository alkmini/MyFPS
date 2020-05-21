// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyFPSGameMode.h"
#include "MyFPSHUD.h"
#include "MyFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyFPSGameMode::AMyFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyFPSHUD::StaticClass();
}
