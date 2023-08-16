// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstrophelAndStella/AstrophelAndStellaGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstrophelAndStellaGameModeBase() {}
// Cross Module References
	ASTROPHELANDSTELLA_API UClass* Z_Construct_UClass_AAstrophelAndStellaGameModeBase();
	ASTROPHELANDSTELLA_API UClass* Z_Construct_UClass_AAstrophelAndStellaGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AstrophelAndStella();
// End Cross Module References
	void AAstrophelAndStellaGameModeBase::StaticRegisterNativesAAstrophelAndStellaGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstrophelAndStellaGameModeBase);
	UClass* Z_Construct_UClass_AAstrophelAndStellaGameModeBase_NoRegister()
	{
		return AAstrophelAndStellaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AstrophelAndStella,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AstrophelAndStellaGameModeBase.h" },
		{ "ModuleRelativePath", "AstrophelAndStellaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstrophelAndStellaGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::ClassParams = {
		&AAstrophelAndStellaGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAstrophelAndStellaGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAstrophelAndStellaGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstrophelAndStellaGameModeBase.OuterSingleton, Z_Construct_UClass_AAstrophelAndStellaGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAstrophelAndStellaGameModeBase.OuterSingleton;
	}
	template<> ASTROPHELANDSTELLA_API UClass* StaticClass<AAstrophelAndStellaGameModeBase>()
	{
		return AAstrophelAndStellaGameModeBase::StaticClass();
	}
	AAstrophelAndStellaGameModeBase::AAstrophelAndStellaGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAstrophelAndStellaGameModeBase);
	AAstrophelAndStellaGameModeBase::~AAstrophelAndStellaGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_AstrophelAndStellaGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_AstrophelAndStellaGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAstrophelAndStellaGameModeBase, AAstrophelAndStellaGameModeBase::StaticClass, TEXT("AAstrophelAndStellaGameModeBase"), &Z_Registration_Info_UClass_AAstrophelAndStellaGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstrophelAndStellaGameModeBase), 2642733955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_AstrophelAndStellaGameModeBase_h_2863177457(TEXT("/Script/AstrophelAndStella"),
		Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_AstrophelAndStellaGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_AstrophelAndStellaGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
