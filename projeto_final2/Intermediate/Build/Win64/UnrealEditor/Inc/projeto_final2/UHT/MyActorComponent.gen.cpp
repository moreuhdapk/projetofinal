// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projeto_final2/MyActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyActorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UMyActorComponent();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UMyActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_projeto_final2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyActorComponent ********************************************************
void UMyActorComponent::StaticRegisterNativesUMyActorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyActorComponent;
UClass* UMyActorComponent::GetPrivateStaticClass()
{
	using TClass = UMyActorComponent;
	if (!Z_Registration_Info_UClass_UMyActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyActorComponent"),
			Z_Registration_Info_UClass_UMyActorComponent.InnerSingleton,
			StaticRegisterNativesUMyActorComponent,
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
	return Z_Registration_Info_UClass_UMyActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyActorComponent_NoRegister()
{
	return UMyActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent.h" },
		{ "ModuleRelativePath", "MyActorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_projeto_final2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Statics::ClassParams = {
	&UMyActorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyActorComponent()
{
	if (!Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton, Z_Construct_UClass_UMyActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent);
UMyActorComponent::~UMyActorComponent() {}
// ********** End Class UMyActorComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyActorComponent_h__Script_projeto_final2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyActorComponent, UMyActorComponent::StaticClass, TEXT("UMyActorComponent"), &Z_Registration_Info_UClass_UMyActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyActorComponent), 3042895734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyActorComponent_h__Script_projeto_final2_3629769862(TEXT("/Script/projeto_final2"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyActorComponent_h__Script_projeto_final2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyActorComponent_h__Script_projeto_final2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
