// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Block.generated.h"

UCLASS()
class MCUE_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly) UStaticMeshComponent* SM_Block;

	uint8 MinimumMaterial;

	UPROPERTY(EditDefaultsOnly) float Resistance;

	UPROPERTY(BlueprintReadWrite) float BreakingStage;

	/* Called every time we want to break the block down further */
	void Break();

	void ResetBlock();

	/* Called once the block has hit the final breaking stage */
	void OnBroken(bool HasRequiredPickaxe);

protected:
	
};
