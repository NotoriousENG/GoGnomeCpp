// Fill out your copyright notice in the Description page of Project Settings.


#include "MushroomCollectable.h"

void AMushroomCollectable::Collect_Implementation(AGnomePlayerState* State)
{
	if(true)
	{
		// Change Counter
		State->AddMushroomToList(MushroomID);
		// Mark As Collected
		HasBeenCollected = true;
	}
	OnCollectMushroom();
}

bool AMushroomCollectable::CheckCollected(AGnomePlayerState* State)
{
	if (State->CollectedMushroomList.Contains(GetUniqueID()))
	{
		HasBeenCollected = true;
	}
	HasBeenCollected = false;
	return HasBeenCollected;
}
