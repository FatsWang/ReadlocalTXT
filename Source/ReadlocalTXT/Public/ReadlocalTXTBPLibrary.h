// Copyright 2022 "ChangShengJiangJuWangPangPang".All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAL/FileManagerGeneric.h"

#include "ReadlocalTXTBPLibrary.generated.h"
// FFileManagerGeneric

UCLASS()
class UReadlocalTXTBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
    public:
	//Create file, 
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static  void CreateTxt(FString URL);

	//Judge whether the file exists, return the Boolean value, and the directory is in the"Content/"
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="WPP_ReadLocal")
	static bool ISvalidTxt(FString URL);

	
	//ReadTxt
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static FString ReadTxt(FString URL);

	//WriteTxt
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static bool WriteTxt(FString data,FString URL);


	//RemoveTxt
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static bool RemoveTxt(FString URL);
	





};
