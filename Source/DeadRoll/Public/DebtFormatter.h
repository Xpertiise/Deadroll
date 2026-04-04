// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebtFormatter.generated.h"

UCLASS()
class DEADROLL_API UDebtFormatting : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
  
public:
	UFUNCTION(BlueprintCallable, Category = "Debt")
	static FString FormatDebtDisplay(int32 DebtAmount);
};