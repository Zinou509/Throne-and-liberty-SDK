#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemToolTip_ContextMenu_BTN

#include "Basic.hpp"

#include "BP_ItemToolTip_ContextMenu_BTN_classes.hpp"
#include "BP_ItemToolTip_ContextMenu_BTN_parameters.hpp"


namespace SDK
{

// Function BP_ItemToolTip_ContextMenu_BTN.BP_ItemToolTip_ContextMenu_BTN_C.ExecuteUbergraph_BP_ItemToolTip_ContextMenu_BTN
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemToolTip_ContextMenu_BTN_C::ExecuteUbergraph_BP_ItemToolTip_ContextMenu_BTN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemToolTip_ContextMenu_BTN_C", "ExecuteUbergraph_BP_ItemToolTip_ContextMenu_BTN");

	Params::BP_ItemToolTip_ContextMenu_BTN_C_ExecuteUbergraph_BP_ItemToolTip_ContextMenu_BTN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemToolTip_ContextMenu_BTN.BP_ItemToolTip_ContextMenu_BTN_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ItemToolTip_ContextMenu_BTN_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemToolTip_ContextMenu_BTN_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

