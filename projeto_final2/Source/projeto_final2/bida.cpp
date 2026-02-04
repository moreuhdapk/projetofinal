// Fill out your copyright notice in the Description page of Project Settings.


#include "bida.h"

#include "healthcomponentCPP.h"

void Ubida::NativeConstruct()
{
	Super::NativeConstruct();

	HealthProgressBar->SetPercent(100);
	
}

void Ubida::SetHealthBar(float newValue)
{
	HealthProgressBar->SetPercent(newValue);
}
