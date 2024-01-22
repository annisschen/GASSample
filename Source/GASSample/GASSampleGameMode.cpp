// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASSampleGameMode.h"
#include "GASSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASSampleGameMode::AGASSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
