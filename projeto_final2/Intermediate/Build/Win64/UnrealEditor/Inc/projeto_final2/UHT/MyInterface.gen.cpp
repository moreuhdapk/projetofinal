// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projeto_final2/MyInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UMyInterface();
PROJETO_FINAL2_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_projeto_final2();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UMyInterface Function InterfaceEvevent *******************************
void IMyInterface::InterfaceEvevent()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InterfaceEvevent instead.");
}
static FName NAME_UMyInterface_InterfaceEvevent = FName(TEXT("InterfaceEvevent"));
void IMyInterface::Execute_InterfaceEvevent(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMyInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMyInterface_InterfaceEvevent);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UMyInterface_InterfaceEvevent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInterface_InterfaceEvevent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyInterface, nullptr, "InterfaceEvevent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInterface_InterfaceEvevent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInterface_InterfaceEvevent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMyInterface_InterfaceEvevent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInterface_InterfaceEvevent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Interface UMyInterface Function InterfaceEvevent *********************************

// ********** Begin Interface UMyInterface *********************************************************
void UMyInterface::StaticRegisterNativesUMyInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyInterface;
UClass* UMyInterface::GetPrivateStaticClass()
{
	using TClass = UMyInterface;
	if (!Z_Registration_Info_UClass_UMyInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyInterface"),
			Z_Registration_Info_UClass_UMyInterface.InnerSingleton,
			StaticRegisterNativesUMyInterface,
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
	return Z_Registration_Info_UClass_UMyInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyInterface_NoRegister()
{
	return UMyInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInterface_InterfaceEvevent, "InterfaceEvevent" }, // 1548404308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_projeto_final2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInterface_Statics::ClassParams = {
	&UMyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInterface()
{
	if (!Z_Registration_Info_UClass_UMyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInterface.OuterSingleton, Z_Construct_UClass_UMyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInterface.OuterSingleton;
}
UMyInterface::UMyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInterface);
// ********** End Interface UMyInterface ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h__Script_projeto_final2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInterface, UMyInterface::StaticClass, TEXT("UMyInterface"), &Z_Registration_Info_UClass_UMyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInterface), 2839876359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h__Script_projeto_final2_3447587344(TEXT("/Script/projeto_final2"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h__Script_projeto_final2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_GitHub_projetofinal_projeto_final2_Source_projeto_final2_MyInterface_h__Script_projeto_final2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
