#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_ItemTextList_Type

#include "Basic.hpp"

#include "BP_ItemTooltip_ItemTextList_Type_classes.hpp"
#include "BP_ItemTooltip_ItemTextList_Type_parameters.hpp"


namespace SDK
{

// Function BP_ItemTooltip_ItemTextList_Type.BP_ItemTooltip_ItemTextList_Type_C.ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_ItemTextList_Type_C::ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemTextList_Type_C", "ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type");

	Params::BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_ItemTextList_Type.BP_ItemTooltip_ItemTextList_Type_C.OnSlotDimmed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InIsDimmed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTooltip_ItemTextList_Type_C::OnSlotDimmed(bool InIsDimmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemTextList_Type_C", "OnSlotDimmed");

	Params::BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed Parms{};

	Parms.InIsDimmed = InIsDimmed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_ItemTextList_Type.BP_ItemTooltip_ItemTextList_Type_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ItemTooltip_ItemTextList_Type_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemTextList_Type_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
