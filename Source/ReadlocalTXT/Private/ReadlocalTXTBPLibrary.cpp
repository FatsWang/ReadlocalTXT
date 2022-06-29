// Copyright 2022 "ChangShengJiangJuWangPangPang".All Rights Reserved.

#include "ReadlocalTXTBPLibrary.h"

#include "ReadlocalTXT.h"


UReadlocalTXTBPLibrary::UReadlocalTXTBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


//*****************************create a file***************
void  UReadlocalTXTBPLibrary::CreateTxt(FString URL)
{
	FFileHelper::SaveStringToFile(TEXT("Created successfully"), *URL);
}
//******************Determine whether the file exists*****************
bool UReadlocalTXTBPLibrary::ISvalidTxt(FString URL)
{
    if(FFileManagerGeneric::Get().FileExists(*URL))
     {
    	return true;
      }
	return false;
	
}

//*****************read file********************
FString UReadlocalTXTBPLibrary::ReadTxt(FString URL)
{
	FString resultString; 
	FFileHelper::LoadFileToString(resultString, *URL);
	return  resultString;

}


//**********************Write file and save****************
bool UReadlocalTXTBPLibrary::WriteTxt(FString data,FString URL)
{
	FFileHelper::SaveStringToFile(TEXT("data"), *URL); 
	bool bResult;
	bResult =FFileHelper::SaveStringToFile(data,*URL);

	return bResult;
}


//**********************Delete file!! Use with caution!!***********
bool UReadlocalTXTBPLibrary::RemoveTxt(FString URL)
{
	return FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*URL);
}


