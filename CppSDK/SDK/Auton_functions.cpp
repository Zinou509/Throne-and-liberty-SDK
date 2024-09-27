#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Auton

#include "Basic.hpp"

#include "Auton_classes.hpp"
#include "Auton_parameters.hpp"


namespace SDK
{

// Function Auton.TLAutonInterface.AutonNavigatableChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bNavigatable                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITLAutonInterface::AutonNavigatableChanged(bool bNavigatable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TLAutonInterface", "AutonNavigatableChanged");

	Params::TLAutonInterface_AutonNavigatableChanged Parms{};

	Parms.bNavigatable = bNavigatable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Auton.TLAutonInterface.AutonNavigationToMe
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITLAutonInterface::AutonNavigationToMe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TLAutonInterface", "AutonNavigationToMe");

	Params::TLAutonInterface_AutonNavigationToMe Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Auton.TLAutonInterface.AutonPop
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITLAutonInterface::AutonPop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TLAutonInterface", "AutonPop");

	Params::TLAutonInterface_AutonPop Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Auton.TLAutonInterface.AutonPush
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITLAutonInterface::AutonPush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TLAutonInterface", "AutonPush");

	Params::TLAutonInterface_AutonPush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Auton.TLAutonScrollInterface.AutonAreaSetMeToRemoteScroll
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSet                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITLAutonScrollInterface::AutonAreaSetMeToRemoteScroll(bool bSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TLAutonScrollInterface", "AutonAreaSetMeToRemoteScroll");

	Params::TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll Parms{};

	Parms.bSet = bSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
