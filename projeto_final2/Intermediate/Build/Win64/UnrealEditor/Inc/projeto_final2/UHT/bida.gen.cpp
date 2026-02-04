// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projeto_final2/bida.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodebida() {}

// ********** Begin Cross Module References ********************************************************
PROJETO_FINAL2_API UClass* Z_Construct_UClass_Ubida();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_Ubida_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_projeto_final2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Ubida Function SetHealthBar **********************************************
struct Z_Construct_UFunction_Ubida_SetHealthBar_Statics
{
	struct bida_eventSetHealthBar_Parms
	{
		float newValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "bida.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Ubida_SetHealthBar_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(bida_eventSetHealthBar_Parms, newValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ubida_SetHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ubida_SetHealthBar_Statics::NewProp_newValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Ubida_SetHealthBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ubida_SetHealthBar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Ubida, nullptr, "SetHealthBar", Z_Construct_UFunction_Ubida_SetHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ubida_SetHealthBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_Ubida_SetHealthBar_Statics::bida_eventSetHealthBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Ubida_SetHealthBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_Ubida_SetHealthBar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Ubida_SetHealthBar_Statics::bida_eventSetHealthBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Ubida_SetHealthBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ubida_SetHealthBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Ubida::execSetHealthBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealthBar(Z_Param_newValue);
	P_NATIVE_END;
}
// ********** End Class Ubida Function SetHealthBar ************************************************

// ********** Begin Class Ubida ********************************************************************
void Ubida::StaticRegisterNativesUbida()
{
	UClass* Class = Ubida::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealthBar", &Ubida::execSetHealthBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_Ubida;
UClass* Ubida::GetPrivateStaticClass()
{
	using TClass = Ubida;
	if (!Z_Registration_Info_UClass_Ubida.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("bida"),
			Z_Registration_Info_UClass_Ubida.InnerSingleton,
			StaticRegisterNativesUbida,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_Ubida.InnerSingleton;
}
UClass* Z_Construct_UClass_Ubida_NoRegister()
{
	return Ubida::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Ubida_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "bida.h" },
		{ "ModuleRelativePath", "bida.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "bida.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Ubida_SetHealthBar, "SetHealthBar" }, // 3430495773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ubida>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ubida_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ubida, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthProgressBar_MetaData), NewProp_HealthProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ubida_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ubida_Statics::NewProp_HealthProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ubida_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Ubida_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_projeto_final2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ubida_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Ubida_Statics::ClassParams = {
	&Ubida::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_Ubida_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_Ubida_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ubida_Statics::Class_MetaDataParams), Z_Construct_UClass_Ubida_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Ubida()
{
	if (!Z_Registration_Info_UClass_Ubida.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ubida.OuterSingleton, Z_Construct_UClass_Ubida_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Ubida.OuterSingleton;
}
Ubida::Ubida(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Ubida);
Ubida::~Ubida() {}
// ********** End Class Ubida **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_bida_h__Script_projeto_final2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Ubida, Ubida::StaticClass, TEXT("Ubida"), &Z_Registration_Info_UClass_Ubida, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ubida), 3029939188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_bida_h__Script_projeto_final2_1079792636(TEXT("/Script/projeto_final2"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_bida_h__Script_projeto_final2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_bida_h__Script_projeto_final2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
