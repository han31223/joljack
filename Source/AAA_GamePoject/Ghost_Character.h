// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ghost_Character.generated.h"

UCLASS()
class AAA_GAMEPOJECT_API AGhost_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGhost_Character();

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void ServerTeleport(FVector TargetLocation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ServerTeleport_Implementation(FVector TargetLocation);
	bool ServerTeleport_Validate(FVector TargetLocation);

};

