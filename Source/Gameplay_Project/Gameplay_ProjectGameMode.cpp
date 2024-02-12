// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gameplay_ProjectGameMode.h"
#include "Gameplay_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameplay_ProjectGameMode::AGameplay_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
