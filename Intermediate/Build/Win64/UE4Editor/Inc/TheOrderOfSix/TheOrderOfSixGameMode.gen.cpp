// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOrderOfSix/TheOrderOfSixGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheOrderOfSixGameMode() {}
// Cross Module References
	THEORDEROFSIX_API UClass* Z_Construct_UClass_ATheOrderOfSixGameMode_NoRegister();
	THEORDEROFSIX_API UClass* Z_Construct_UClass_ATheOrderOfSixGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheOrderOfSix();
// End Cross Module References
	void ATheOrderOfSixGameMode::StaticRegisterNativesATheOrderOfSixGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATheOrderOfSixGameMode_NoRegister()
	{
		return ATheOrderOfSixGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheOrderOfSixGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOrderOfSix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheOrderOfSixGameMode.h" },
		{ "ModuleRelativePath", "TheOrderOfSixGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheOrderOfSixGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::ClassParams = {
		&ATheOrderOfSixGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheOrderOfSixGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheOrderOfSixGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheOrderOfSixGameMode, 51819643);
	template<> THEORDEROFSIX_API UClass* StaticClass<ATheOrderOfSixGameMode>()
	{
		return ATheOrderOfSixGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheOrderOfSixGameMode(Z_Construct_UClass_ATheOrderOfSixGameMode, &ATheOrderOfSixGameMode::StaticClass, TEXT("/Script/TheOrderOfSix"), TEXT("ATheOrderOfSixGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheOrderOfSixGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
