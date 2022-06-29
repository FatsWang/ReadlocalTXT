// Copyright Epic Games, Inc. All Rights Reserved.

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
	//创建文件，目录在"Content/"
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static  void CreateTxt(FString URL);

	//判断文件是否存在,返回布尔值,目录在"Content/"
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="WPP_ReadLocal")
	static bool ISvalidTxt(FString URL);

	
	//读取文件，并输出内容,目录在"Content/"
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static FString ReadTxt(FString URL);

	//写入文件，并保存,目录在"Content/"
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static bool WriteTxt(FString data,FString URL);


	//删除文件,目录在"Content/"
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static bool RemoveTxt(FString URL);
	





};
