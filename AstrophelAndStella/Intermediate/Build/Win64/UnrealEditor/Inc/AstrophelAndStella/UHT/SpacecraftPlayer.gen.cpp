// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstrophelAndStella/SpacecraftPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpacecraftPlayer() {}
// Cross Module References
	ASTROPHELANDSTELLA_API UClass* Z_Construct_UClass_ASpacecraftPlayer();
	ASTROPHELANDSTELLA_API UClass* Z_Construct_UClass_ASpacecraftPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AstrophelAndStella();
// End Cross Module References
	void ASpacecraftPlayer::StaticRegisterNativesASpacecraftPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpacecraftPlayer);
	UClass* Z_Construct_UClass_ASpacecraftPlayer_NoRegister()
	{
		return ASpacecraftPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ASpacecraftPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpacecraftPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AstrophelAndStella,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpacecraftPlayer.h" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpacecraftPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpacecraftPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpacecraftPlayer_Statics::ClassParams = {
		&ASpacecraftPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpacecraftPlayer()
	{
		if (!Z_Registration_Info_UClass_ASpacecraftPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpacecraftPlayer.OuterSingleton, Z_Construct_UClass_ASpacecraftPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpacecraftPlayer.OuterSingleton;
	}
	template<> ASTROPHELANDSTELLA_API UClass* StaticClass<ASpacecraftPlayer>()
	{
		return ASpacecraftPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpacecraftPlayer);
	ASpacecraftPlayer::~ASpacecraftPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpacecraftPlayer, ASpacecraftPlayer::StaticClass, TEXT("ASpacecraftPlayer"), &Z_Registration_Info_UClass_ASpacecraftPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpacecraftPlayer), 2169575169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_2465342561(TEXT("/Script/AstrophelAndStella"),
		Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
