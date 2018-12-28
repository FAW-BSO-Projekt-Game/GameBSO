// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GameGameMode.h"
#include "GameHUD.h"
#include "GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameGameMode::AGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameHUD::StaticClass();
}