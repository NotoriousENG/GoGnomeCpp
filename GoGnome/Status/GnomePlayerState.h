// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
// #include "../Collectables/MushroomCollectable.h"
#include "GnomePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GOGNOME_API AGnomePlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "GnomePlayerState")
		int NumMush{ 0 };

	TArray<uint32> CollectedMushroomList;
	
	UPROPERTY(BlueprintReadOnly, Category = "GnomePlayerState")
		int NumCoins;
	void AddMushroomToList(uint32 Mush);
	void ModifyCoinCount(int Amount);
};
