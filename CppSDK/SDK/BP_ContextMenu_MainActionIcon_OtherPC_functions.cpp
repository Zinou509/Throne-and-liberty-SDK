#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContextMenu_MainActionIcon_OtherPC

#include "Basic.hpp"

#include "BP_ContextMenu_MainActionIcon_OtherPC_classes.hpp"
#include "BP_ContextMenu_MainActionIcon_OtherPC_parameters.hpp"


namespace SDK
{

// Function BP_ContextMenu_MainActionIcon_OtherPC.BP_ContextMenu_MainActionIcon_OtherPC_C.ExecuteUbergraph_BP_ContextMenu_MainActionIcon_OtherPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextMenu_MainActionIcon_OtherPC_C::ExecuteUbergraph_BP_ContextMenu_MainActionIcon_OtherPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextMenu_MainActionIcon_OtherPC_C", "ExecuteUbergraph_BP_ContextMenu_MainActionIcon_OtherPC");

	Params::BP_ContextMenu_MainActionIcon_OtherPC_C_ExecuteUbergraph_BP_ContextMenu_MainActionIcon_OtherPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextMenu_MainActionIcon_OtherPC.BP_ContextMenu_MainActionIcon_OtherPC_C.BndEvt__BP_ContextMenu_MainActionIcon_Gauge_Interact_K2Node_ComponentBoundEvent_0_OnChangedPercent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextMenu_MainActionIcon_OtherPC_C::BndEvt__BP_ContextMenu_MainActionIcon_Gauge_Interact_K2Node_ComponentBoundEvent_0_OnChangedPercent__DelegateSignature(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextMenu_MainActionIcon_OtherPC_C", "BndEvt__BP_ContextMenu_MainActionIcon_Gauge_Interact_K2Node_ComponentBoundEvent_0_OnChangedPercent__DelegateSignature");

	Params::BP_ContextMenu_MainActionIcon_OtherPC_C_BndEvt__BP_ContextMenu_MainActionIcon_Gauge_Interact_K2Node_ComponentBoundEvent_0_OnChangedPercent__DelegateSignature Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextMenu_MainActionIcon_OtherPC.BP_ContextMenu_MainActionIcon_OtherPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ContextMenu_MainActionIcon_OtherPC_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextMenu_MainActionIcon_OtherPC_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextMenu_MainActionIcon_OtherPC.BP_ContextMenu_MainActionIcon_OtherPC_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ContextMenu_MainActionIcon_OtherPC_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextMenu_MainActionIcon_OtherPC_C", "PreConstruct");

	Params::BP_ContextMenu_MainActionIcon_OtherPC_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
