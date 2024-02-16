// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheOrderOfSixGameMode.h"
#include "TheOrderOfSixCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheOrderOfSixGameMode::ATheOrderOfSixGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
