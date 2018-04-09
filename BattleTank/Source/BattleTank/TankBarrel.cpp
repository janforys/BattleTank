// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"
#include "BattleTank.h"



void UTankBarrel::Elevate(float DegreesPerSocond)
{

	// Move the Barrel the right amount this frame

	// Given max elevation speed and frame time

	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %f"), DegreesPerSocond);
}


