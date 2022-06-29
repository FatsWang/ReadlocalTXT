// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReadlocalTXTBPLibrary.h"

#include "ReadlocalTXT.h"


UReadlocalTXTBPLibrary::UReadlocalTXTBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


//*****************************创建文件***************
void  UReadlocalTXTBPLibrary::CreateTxt(FString URL)
{
	FFileHelper::SaveStringToFile(TEXT("创建成功"), *URL);
}
//******************判断文件是否存在*****************
bool UReadlocalTXTBPLibrary::ISvalidTxt(FString URL)
{
    if(FFileManagerGeneric::Get().FileExists(*URL))
     {
    	return true;
      }
	return false;
	//返回变量值
}

//*****************读取文件********************
FString UReadlocalTXTBPLibrary::ReadTxt(FString URL)
{
	FString resultString; //内容存储位置
	FFileHelper::LoadFileToString(resultString, *URL);
	return  resultString;

}


//**********************写入文件并保存****************
bool UReadlocalTXTBPLibrary::WriteTxt(FString data,FString URL)
{
	//FString LoadDir = FPaths::ProjectContentDir()/TEXT("URL");  //文件路径
	FFileHelper::SaveStringToFile(TEXT("data"), *URL); //写入内容
	//创建临时变量
	bool result;
	//判断是否存储成功
	result =FFileHelper::SaveStringToFile(data,*URL);
	//返回结果
	return result;
}


//**********************删除文件!!慎用!!***********
bool UReadlocalTXTBPLibrary::RemoveTxt(FString URL)
{
	return FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*URL);
}


