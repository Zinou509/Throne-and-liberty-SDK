#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemToolTip_ContextMenuFrame

#include "Basic.hpp"

#include "BP_ItemToolTip_ContextMenuFrame_classes.hpp"
#include "BP_ItemToolTip_ContextMenuFrame_parameters.hpp"


namespace SDK
{

// Function BP_ItemToolTip_ContextMenuFrame.BP_ItemToolTip_ContextMenuFrame_C.ExecuteUbergraph_BP_ItemToolTip_ContextMenuFrame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemToolTip_ContextMenuFrame_C::ExecuteUbergraph_BP_ItemToolTip_ContextMenuFrame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemToolTip_ContextMenuFrame_C", "ExecuteUbergraph_BP_ItemToolTip_ContextMenuFrame");

	Params::BP_ItemToolTip_ContextMenuFrame_C_ExecuteUbergraph_BP_ItemToolTip_ContextMenuFrame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemToolTip_ContextMenuFrame.BP_ItemToolTip_ContextMenuFrame_C.BP_OnChangeCharacterAlive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InAlive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ETLSetAliveSource                       InAliveSource                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemToolTip_ContextMenuFrame_C::BP_OnChangeCharacterAlive(bool InAlive, ETLSetAliveSource InAliveSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemToolTip_ContextMenuFrame_C", "BP_OnChangeCharacterAlive");

	Params::BP_ItemToolTip_ContextMenuFrame_C_BP_OnChangeCharacterAlive Parms{};

	Parms.InAlive = InAlive;
	Parms.InAliveSource = InAliveSource;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemToolTip_ContextMenuFrame.BP_ItemToolTip_ContextMenuFrame_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBP_ItemToolTip_ContextMenuFrame_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemToolTip_ContextMenuFrame_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemToolTip_ContextMenuFrame.BP_ItemToolTip_ContextMenuFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ItemToolTip_ContextMenuFrame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemToolTip_ContextMenuFrame_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

