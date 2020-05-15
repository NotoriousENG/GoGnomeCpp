// Fill out your copyright notice in the Description page of Project Settings.


#include "GnomePlayerState.h"
#include "Containers/Array.h"

void AGnomePlayerState::AddMushroomToList(uint32 Mush)
{
	CollectedMushroomList.Add(Mush);
	int count = 0;
	for (auto& item : CollectedMushroomList)
	{
		count++;
	}
	NumMush = count;
}

void AGnomePlayerState::ModifyCoinCount(int Amount)
{
	NumCoins = (Amount >= NumCoins && Amount < 0) ? 0 : NumCoins + Amount;
}
