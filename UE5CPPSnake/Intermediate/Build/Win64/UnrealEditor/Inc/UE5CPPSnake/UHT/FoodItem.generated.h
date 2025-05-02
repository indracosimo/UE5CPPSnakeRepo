// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/FoodItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5CPPSNAKE_FoodItem_generated_h
#error "FoodItem.generated.h already included, missing '#pragma once' in FoodItem.h"
#endif
#define UE5CPPSNAKE_FoodItem_generated_h

#define FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFoodItem(); \
	friend struct Z_Construct_UClass_AFoodItem_Statics; \
public: \
	DECLARE_CLASS(AFoodItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5CPPSnake"), NO_API) \
	DECLARE_SERIALIZER(AFoodItem)


#define FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFoodItem(AFoodItem&&); \
	AFoodItem(const AFoodItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFoodItem) \
	NO_API virtual ~AFoodItem();


#define FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_11_PROLOG
#define FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5CPPSNAKE_API UClass* StaticClass<class AFoodItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_FoodItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
