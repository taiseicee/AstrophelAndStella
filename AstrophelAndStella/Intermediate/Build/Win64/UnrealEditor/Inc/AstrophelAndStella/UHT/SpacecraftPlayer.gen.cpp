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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentMeshBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentMeshBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentCameraSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentCameraSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContextSpacecraft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContextSpacecraft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionThrust_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionThrust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionRotate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionToggleCounterThrust_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToggleCounterThrust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CounterThrustOn_MetaData[];
#endif
		static void NewProp_CounterThrustOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CounterThrustOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputVelocity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputVelocity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_f_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_f;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_r_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_r;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrustMaxVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrustMaxVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMaxVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMaxVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentMeshBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentMeshBase = { "ComponentMeshBase", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ComponentMeshBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentMeshBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentMeshBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCameraSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCameraSpringArm = { "ComponentCameraSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ComponentCameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCamera = { "ComponentCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ComponentCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_MappingContextSpacecraft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "// Inputs\n" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
		{ "ToolTip", "Inputs" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_MappingContextSpacecraft = { "MappingContextSpacecraft", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, MappingContextSpacecraft), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_MappingContextSpacecraft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_MappingContextSpacecraft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionThrust_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionThrust = { "ActionThrust", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ActionThrust), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionThrust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionThrust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionRotate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionRotate = { "ActionRotate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ActionRotate), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionToggleCounterThrust_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionToggleCounterThrust = { "ActionToggleCounterThrust", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ActionToggleCounterThrust), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionToggleCounterThrust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionToggleCounterThrust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Movement\n" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
		{ "ToolTip", "Movement" },
	};
#endif
	void Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn_SetBit(void* Obj)
	{
		((ASpacecraftPlayer*)Obj)->CounterThrustOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn = { "CounterThrustOn", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASpacecraftPlayer), &Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "Comment", "// 1 UE unit = 1 cm\n" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
		{ "ToolTip", "1 UE unit = 1 cm" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputPosition_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputPosition = { "InputPosition", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, InputPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputVelocity1_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputVelocity1 = { "InputVelocity1", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, InputVelocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputVelocity1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputVelocity1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_f_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_f = { "f", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, f), METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_f_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_f_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, z), METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_r_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_r = { "r", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, r), METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_r_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ThrustMaxVelocity_MetaData[] = {
		{ "Category", "Movement|Thrust" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ThrustMaxVelocity = { "ThrustMaxVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, ThrustMaxVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ThrustMaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ThrustMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Movement|Rotation" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationInput_MetaData[] = {
		{ "Category", "Movement|Rotation" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationInput = { "RotationInput", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, RotationInput), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationAcceleration_MetaData[] = {
		{ "Category", "Movement|Rotation" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationAcceleration = { "RotationAcceleration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, RotationAcceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationMaxVelocity_MetaData[] = {
		{ "Category", "Movement|Rotation" },
		{ "ModuleRelativePath", "SpacecraftPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationMaxVelocity = { "RotationMaxVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpacecraftPlayer, RotationMaxVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationMaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationMaxVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpacecraftPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentMeshBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCameraSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ComponentCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_MappingContextSpacecraft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionThrust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ActionToggleCounterThrust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_CounterThrustOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_InputVelocity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_f,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_r,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_ThrustMaxVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpacecraftPlayer_Statics::NewProp_RotationMaxVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpacecraftPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpacecraftPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpacecraftPlayer_Statics::ClassParams = {
		&ASpacecraftPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpacecraftPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpacecraftPlayer_Statics::PropPointers),
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
		{ Z_Construct_UClass_ASpacecraftPlayer, ASpacecraftPlayer::StaticClass, TEXT("ASpacecraftPlayer"), &Z_Registration_Info_UClass_ASpacecraftPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpacecraftPlayer), 1215837890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_212296170(TEXT("/Script/AstrophelAndStella"),
		Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sugiyat_Documents_Unreal_Projects_AstrophelAndStella_AstrophelAndStella_Source_AstrophelAndStella_SpacecraftPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
