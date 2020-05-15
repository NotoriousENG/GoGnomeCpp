// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// #include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../CollectableInterface.h"
// #include "Kismet/GameplayStatics.h"
#include "MushroomCollectable.generated.h"

UCLASS()
class GOGNOME_API AMushroomCollectable : public AActor, public ICollectableInterface
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Collectable")
		void Collect_Implementation(AGnomePlayerState* State) override;
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Collectable")
		void OnCollectMushroom();
	UFUNCTION(BlueprintCallable, Category = "Collectable")
		bool CheckCollected(AGnomePlayerState* State);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collectable")
		int MushroomID {0};
protected:
	bool HasBeenCollected{ false };	
};
