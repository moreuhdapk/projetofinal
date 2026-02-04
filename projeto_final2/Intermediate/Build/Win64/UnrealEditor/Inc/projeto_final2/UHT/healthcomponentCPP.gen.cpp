// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projeto_final2/healthcomponentCPP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodehealthcomponentCPP() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UhealthcomponentCPP();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UhealthcomponentCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_projeto_final2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UhealthcomponentCPP ******************************************************
void UhealthcomponentCPP::StaticRegisterNativesUhealthcomponentCPP()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UhealthcomponentCPP;
UClass* UhealthcomponentCPP::GetPrivateStaticClass()
{
	using TClass = UhealthcomponentCPP;
	if (!Z_Registration_Info_UClass_UhealthcomponentCPP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("healthcomponentCPP"),
			Z_Registration_Info_UClass_UhealthcomponentCPP.InnerSingleton,
			StaticRegisterNativesUhealthcomponentCPP,
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
	return Z_Registration_Info_UClass_UhealthcomponentCPP.InnerSingleton;
}
UClass* Z_Construct_UClass_UhealthcomponentCPP_NoRegister()
{
	return UhealthcomponentCPP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UhealthcomponentCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "healthcomponentCPP.h" },
		{ "ModuleRelativePath", "healthcomponentCPP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UhealthcomponentCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UhealthcomponentCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_projeto_final2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UhealthcomponentCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UhealthcomponentCPP_Statics::ClassParams = {
	&UhealthcomponentCPP::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UhealthcomponentCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UhealthcomponentCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UhealthcomponentCPP()
{
	if (!Z_Registration_Info_UClass_UhealthcomponentCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UhealthcomponentCPP.OuterSingleton, Z_Construct_UClass_UhealthcomponentCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UhealthcomponentCPP.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UhealthcomponentCPP);
UhealthcomponentCPP::~UhealthcomponentCPP() {}
// ********** End Class UhealthcomponentCPP ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_healthcomponentCPP_h__Script_projeto_final2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UhealthcomponentCPP, UhealthcomponentCPP::StaticClass, TEXT("UhealthcomponentCPP"), &Z_Registration_Info_UClass_UhealthcomponentCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UhealthcomponentCPP), 763801610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_healthcomponentCPP_h__Script_projeto_final2_3059818334(TEXT("/Script/projeto_final2"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_healthcomponentCPP_h__Script_projeto_final2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_healthcomponentCPP_h__Script_projeto_final2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
