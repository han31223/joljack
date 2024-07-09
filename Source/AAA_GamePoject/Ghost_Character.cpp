// Fill out your copyright notice in the Description page of Project Settings.


#include "Ghost_Character.h"

// Sets default values
AGhost_Character::AGhost_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGhost_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGhost_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGhost_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGhost_Character::ServerTeleport_Implementation(FVector TargetLocation)
{
    if (HasAuthority())
    {
        SetActorLocation(TargetLocation);
    }
}

bool AGhost_Character::ServerTeleport_Validate(FVector TargetLocation)
{
    return true; // 유효성 검사를 여기에 추가할 수 있습니다.
}