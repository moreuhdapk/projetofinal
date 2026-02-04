// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyInterface.h"

#ifdef PROJETO_FINAL2_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define PROJETO_FINAL2_MyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMyInterface *********************************************************
#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_CALLBACK_WRAPPERS
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();

#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJETO_FINAL2_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyInterface(UMyInterface&&) = delete; \
	UMyInterface(const UMyInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJETO_FINAL2_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	virtual ~UMyInterface() = default;


#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct Z_Construct_UClass_UMyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETO_FINAL2_API UClass* Z_Construct_UClass_UMyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/projeto_final2"), Z_Construct_UClass_UMyInterface_NoRegister) \
	DECLARE_SERIALIZER(UMyInterface)


#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	static void Execute_InterfaceEvevent(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_10_PROLOG
#define FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyInterface;

// ********** End Interface UMyInterface ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
