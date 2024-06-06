// Copyright Epic Games, Inc. All Rights Reserved.

#include "AAA_GamePojectGameMode.h"
#include "AAA_GamePojectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAAA_GamePojectGameMode::AAAA_GamePojectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
