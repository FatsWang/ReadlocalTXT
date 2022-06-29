// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadlocalTXT/Public/ReadlocalTXTBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadlocalTXTBPLibrary() {}
// Cross Module References
	READLOCALTXT_API UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary_NoRegister();
	READLOCALTXT_API UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ReadlocalTXT();
// End Cross Module References
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execRemoveTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadlocalTXTBPLibrary::RemoveTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execWriteTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadlocalTXTBPLibrary::WriteTxt(Z_Param_data,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execReadTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadlocalTXTBPLibrary::ReadTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execISvalidTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadlocalTXTBPLibrary::ISvalidTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execCreateTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadlocalTXTBPLibrary::CreateTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	void UReadlocalTXTBPLibrary::StaticRegisterNativesUReadlocalTXTBPLibrary()
	{
		UClass* Class = UReadlocalTXTBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTxt", &UReadlocalTXTBPLibrary::execCreateTxt },
			{ "ISvalidTxt", &UReadlocalTXTBPLibrary::execISvalidTxt },
			{ "ReadTxt", &UReadlocalTXTBPLibrary::execReadTxt },
			{ "RemoveTxt", &UReadlocalTXTBPLibrary::execRemoveTxt },
			{ "WriteTxt", &UReadlocalTXTBPLibrary::execWriteTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventCreateTxt_Parms
		{
			FString URL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventCreateTxt_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//Create file, \n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "Create file," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "CreateTxt", nullptr, nullptr, sizeof(ReadlocalTXTBPLibrary_eventCreateTxt_Parms), Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventISvalidTxt_Parms
		{
			FString URL;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventISvalidTxt_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadlocalTXTBPLibrary_eventISvalidTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReadlocalTXTBPLibrary_eventISvalidTxt_Parms), &Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//Judge whether the file exists, return the Boolean value, and the directory is in the\"Content/\"\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "Judge whether the file exists, return the Boolean value, and the directory is in the\"Content/\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "ISvalidTxt", nullptr, nullptr, sizeof(ReadlocalTXTBPLibrary_eventISvalidTxt_Parms), Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventReadTxt_Parms
		{
			FString URL;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventReadTxt_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventReadTxt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//ReadTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "ReadTxt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "ReadTxt", nullptr, nullptr, sizeof(ReadlocalTXTBPLibrary_eventReadTxt_Parms), Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventRemoveTxt_Parms
		{
			FString URL;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventRemoveTxt_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadlocalTXTBPLibrary_eventRemoveTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReadlocalTXTBPLibrary_eventRemoveTxt_Parms), &Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//RemoveTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "RemoveTxt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "RemoveTxt", nullptr, nullptr, sizeof(ReadlocalTXTBPLibrary_eventRemoveTxt_Parms), Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventWriteTxt_Parms
		{
			FString data;
			FString URL;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventWriteTxt_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventWriteTxt_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadlocalTXTBPLibrary_eventWriteTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReadlocalTXTBPLibrary_eventWriteTxt_Parms), &Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//WriteTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "WriteTxt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "WriteTxt", nullptr, nullptr, sizeof(ReadlocalTXTBPLibrary_eventWriteTxt_Parms), Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary_NoRegister()
	{
		return UReadlocalTXTBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadlocalTXT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt, "CreateTxt" }, // 3792671449
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_ISvalidTxt, "ISvalidTxt" }, // 2057423800
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt, "ReadTxt" }, // 2698544561
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt, "RemoveTxt" }, // 2804135416
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt, "WriteTxt" }, // 4221576988
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// FFileManagerGeneric\n" },
		{ "IncludePath", "ReadlocalTXTBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "FFileManagerGeneric" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadlocalTXTBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::ClassParams = {
		&UReadlocalTXTBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReadlocalTXTBPLibrary, 3386549510);
	template<> READLOCALTXT_API UClass* StaticClass<UReadlocalTXTBPLibrary>()
	{
		return UReadlocalTXTBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReadlocalTXTBPLibrary(Z_Construct_UClass_UReadlocalTXTBPLibrary, &UReadlocalTXTBPLibrary::StaticClass, TEXT("/Script/ReadlocalTXT"), TEXT("UReadlocalTXTBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadlocalTXTBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
