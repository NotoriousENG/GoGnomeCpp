// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GOGNOME_API UHealth : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealth();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Health{ 3 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float MaxHealth{ 3 };
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Health")
		void OnHealthBecomeZero();
	UFUNCTION(BlueprintCallable, Category = "Health")
		void ModifyHealth(float Amount);
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
