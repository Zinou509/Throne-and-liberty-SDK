#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NamePlateFrame_Simple_Optimization

#include "Basic.hpp"

#include "BP_NamePlateFrame_Simple_Optimization_classes.hpp"
#include "BP_NamePlateFrame_Simple_Optimization_parameters.hpp"


namespace SDK
{

// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.ExecuteUbergraph_BP_NamePlateFrame_Simple_Optimization
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NamePlateFrame_Simple_Optimization_C::ExecuteUbergraph_BP_NamePlateFrame_Simple_Optimization(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "ExecuteUbergraph_BP_NamePlateFrame_Simple_Optimization");

	Params::BP_NamePlateFrame_Simple_Optimization_C_ExecuteUbergraph_BP_NamePlateFrame_Simple_Optimization Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_NamePlateFrame_Simple_Optimization_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "PreConstruct");

	Params::BP_NamePlateFrame_Simple_Optimization_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.OnUpdateBossGate
// (Event, Public, BlueprintEvent)
// Parameters:
// ETLBossGateCrowdingStatus               InBossGateStatus                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NamePlateFrame_Simple_Optimization_C::OnUpdateBossGate(ETLBossGateCrowdingStatus InBossGateStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "OnUpdateBossGate");

	Params::BP_NamePlateFrame_Simple_Optimization_C_OnUpdateBossGate Parms{};

	Parms.InBossGateStatus = InBossGateStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.OnUpdateSimpleLayout
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETLNameplateSimpleLayout                InLayout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NamePlateFrame_Simple_Optimization_C::OnUpdateSimpleLayout(ETLNameplateSimpleLayout InLayout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "OnUpdateSimpleLayout");

	Params::BP_NamePlateFrame_Simple_Optimization_C_OnUpdateSimpleLayout Parms{};

	Parms.InLayout = InLayout;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.�@t��_2
// (BlueprintCallable, BlueprintEvent)

void UBP_NamePlateFrame_Simple_Optimization_C::___t___2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "�@t��_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.OnChangeStealthDetectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// ETLStealthDectectionState               State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NamePlateFrame_Simple_Optimization_C::OnChangeStealthDetectionState(ETLStealthDectectionState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "OnChangeStealthDetectionState");

	Params::BP_NamePlateFrame_Simple_Optimization_C_OnChangeStealthDetectionState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_NamePlateFrame_Simple_Optimization_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NamePlateFrame_Simple_Optimization.BP_NamePlateFrame_Simple_Optimization_C.OnSetInteractPCTarget
// (BlueprintEvent)
// Parameters:
// bool                                    InTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_NamePlateFrame_Simple_Optimization_C::OnSetInteractPCTarget(bool InTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlateFrame_Simple_Optimization_C", "OnSetInteractPCTarget");

	Params::BP_NamePlateFrame_Simple_Optimization_C_OnSetInteractPCTarget Parms{};

	Parms.InTarget = InTarget;

	UObject::ProcessEvent(Func, &Parms);
}

}

