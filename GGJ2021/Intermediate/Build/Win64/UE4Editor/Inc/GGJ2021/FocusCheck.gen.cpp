// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2021/FocusCheck.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusCheck() {}
// Cross Module References
	GGJ2021_API UClass* Z_Construct_UClass_UFocusCheck_NoRegister();
	GGJ2021_API UClass* Z_Construct_UClass_UFocusCheck();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_GGJ2021();
// End Cross Module References
	void UFocusCheck::StaticRegisterNativesUFocusCheck()
	{
	}
	UClass* Z_Construct_UClass_UFocusCheck_NoRegister()
	{
		return UFocusCheck::StaticClass();
	}
	struct Z_Construct_UClass_UFocusCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFocusCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2021,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFocusCheck_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FocusCheck.h" },
		{ "ModuleRelativePath", "FocusCheck.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFocusCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusCheck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFocusCheck_Statics::ClassParams = {
		&UFocusCheck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UFocusCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFocusCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFocusCheck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFocusCheck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFocusCheck, 654930765);
	template<> GGJ2021_API UClass* StaticClass<UFocusCheck>()
	{
		return UFocusCheck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFocusCheck(Z_Construct_UClass_UFocusCheck, &UFocusCheck::StaticClass, TEXT("/Script/GGJ2021"), TEXT("UFocusCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
