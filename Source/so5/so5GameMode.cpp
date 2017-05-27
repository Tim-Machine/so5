// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "so5GameMode.h"
#include "so5HUD.h"
#include "so5Character.h"
#include "UObject/ConstructorHelpers.h"

Aso5GameMode::Aso5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Aso5HUD::StaticClass();
}
