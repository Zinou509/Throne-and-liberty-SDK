#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_ItemSlot

#include "Basic.hpp"

#include "BP_UI_ItemSlot_classes.hpp"
#include "BP_UI_ItemSlot_parameters.hpp"


namespace SDK
{

// Function BP_UI_ItemSlot.BP_UI_ItemSlot_C.ExecuteUbergraph_BP_UI_ItemSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_ItemSlot_C::ExecuteUbergraph_BP_UI_ItemSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_ItemSlot_C", "ExecuteUbergraph_BP_UI_ItemSlot");

	Params::BP_UI_ItemSlot_C_ExecuteUbergraph_BP_UI_ItemSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_ItemSlot.BP_UI_ItemSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_ItemSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_ItemSlot_C", "PreConstruct");

	Params::BP_UI_ItemSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
