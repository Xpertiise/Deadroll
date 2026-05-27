// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadRoll/Public/DebtFormatter.h"

FString UDebtFormatting::FormatDebtDisplay(int32 DebtAmount) {
	if (DebtAmount < 1000000) {
		FString Formatted = FString::Printf(TEXT("%06d"), DebtAmount);
		return Formatted;
	}
	else {
		return FString::Printf(TEXT("%.2e"), (float)DebtAmount);
	}
}