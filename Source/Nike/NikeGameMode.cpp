// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Nike.h"
#include "NikeGameMode.h"
#include "NikeHUD.h"
#include "NikeCharacter.h"

ANikeGameMode::ANikeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANikeHUD::StaticClass();
}
