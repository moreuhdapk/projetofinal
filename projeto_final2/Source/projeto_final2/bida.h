// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "components/ProgressBar.h"
#include "bida.generated.h"

/**
 * 
 */
UCLASS()
class PROJETO_FINAL2_API Ubida : public UUserWidget
{
	GENERATED_BODY()

	public:
	virtual void NativeConstruct() override;

	UFUNCTION(BluePrintCallable)
	void SetHealthBar(float newValue);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta =(BindWidget))
	TObjectPtr<UProgressBar>HealthProgressBar;

	
};
