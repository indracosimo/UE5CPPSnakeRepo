// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/Pawn_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawn_Player() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_APawn_Player();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_APawn_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class APawn_Player
void APawn_Player::StaticRegisterNativesAPawn_Player()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawn_Player);
UClass* Z_Construct_UClass_APawn_Player_NoRegister()
{
	return APawn_Player::StaticClass();
}
struct Z_Construct_UClass_APawn_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/Pawn_Player.h" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "Category", "Pawn_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual void BeginPlay() override;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void BeginPlay() override;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveScale_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateScale_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreeFly_MetaData[] = {
		{ "Category", "Pawn_Player" },
		{ "ModuleRelativePath", "Game/Pawn_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateScale;
	static void NewProp_bFreeFly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeFly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawn_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_MoveScale = { "MoveScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, MoveScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveScale_MetaData), NewProp_MoveScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_RotateScale = { "RotateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APawn_Player, RotateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateScale_MetaData), NewProp_RotateScale_MetaData) };
void Z_Construct_UClass_APawn_Player_Statics::NewProp_bFreeFly_SetBit(void* Obj)
{
	((APawn_Player*)Obj)->bFreeFly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Player_Statics::NewProp_bFreeFly = { "bFreeFly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APawn_Player), &Z_Construct_UClass_APawn_Player_Statics::NewProp_bFreeFly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreeFly_MetaData), NewProp_bFreeFly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawn_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_Sphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_MoveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_RotateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Player_Statics::NewProp_bFreeFly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APawn_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APawn_Player_Statics::ClassParams = {
	&APawn_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APawn_Player_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Player_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_APawn_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APawn_Player()
{
	if (!Z_Registration_Info_UClass_APawn_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawn_Player.OuterSingleton, Z_Construct_UClass_APawn_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APawn_Player.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<APawn_Player>()
{
	return APawn_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APawn_Player);
APawn_Player::~APawn_Player() {}
// End Class APawn_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Pawn_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APawn_Player, APawn_Player::StaticClass, TEXT("APawn_Player"), &Z_Registration_Info_UClass_APawn_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawn_Player), 566516476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Pawn_Player_h_3193520493(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Pawn_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Pawn_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
