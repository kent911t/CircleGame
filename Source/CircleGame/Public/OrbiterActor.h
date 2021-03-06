// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstanceConstant.h"
#include "OrbiterActor.generated.h"

UCLASS()
class CIRCLEGAME_API AOrbiterActor : public AActor
{
	GENERATED_BODY()

	UStaticMeshComponent* StaticMeshComponent;

	UMaterialInstanceDynamic* DynamicMaterialComponent;

	UStaticMesh* StaticMesh;

	UMaterial* BaseMaterial;

public:	
	// Sets default values for this actor's properties
	UFUNCTION()
		void SetColor(FLinearColor Color);

	UFUNCTION()
		UStaticMeshComponent* GetMesh();

	AOrbiterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
