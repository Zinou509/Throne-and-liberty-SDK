#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomSceneCamera

#include "Basic.hpp"

#include "BP_CustomSceneCamera_classes.hpp"
#include "BP_CustomSceneCamera_parameters.hpp"


namespace SDK
{

// Function BP_CustomSceneCamera.BP_CustomSceneCamera_C.ExecuteUbergraph_BP_CustomSceneCamera
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomSceneCamera_C::ExecuteUbergraph_BP_CustomSceneCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomSceneCamera_C", "ExecuteUbergraph_BP_CustomSceneCamera");

	Params::BP_CustomSceneCamera_C_ExecuteUbergraph_BP_CustomSceneCamera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomSceneCamera.BP_CustomSceneCamera_C.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomSceneCamera_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomSceneCamera_C", "K2_OnEndViewTarget");

	Params::BP_CustomSceneCamera_C_K2_OnEndViewTarget Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomSceneCamera.BP_CustomSceneCamera_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomSceneCamera_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomSceneCamera_C", "K2_OnBecomeViewTarget");

	Params::BP_CustomSceneCamera_C_K2_OnBecomeViewTarget Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomSceneCamera.BP_CustomSceneCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomSceneCamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomSceneCamera_C", "ReceiveTick");

	Params::BP_CustomSceneCamera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomSceneCamera.BP_CustomSceneCamera_C.ActivateCustomCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActivate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomSceneCamera_C::ActivateCustomCamera(bool bActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomSceneCamera_C", "ActivateCustomCamera");

	Params::BP_CustomSceneCamera_C_ActivateCustomCamera Parms{};

	Parms.bActivate = bActivate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomSceneCamera.BP_CustomSceneCamera_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATLCustomSceneControlActor*       InCustomSceneActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomSceneCamera_C::Init(class ATLCustomSceneControlActor* InCustomSceneActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomSceneCamera_C", "Init");

	Params::BP_CustomSceneCamera_C_Init Parms{};

	Parms.InCustomSceneActor = InCustomSceneActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

