#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Minimap_ContentsItem_Tooltip

#include "Basic.hpp"

#include "BP_Minimap_ContentsItem_Tooltip_classes.hpp"
#include "BP_Minimap_ContentsItem_Tooltip_parameters.hpp"


namespace SDK
{

// Function BP_Minimap_ContentsItem_Tooltip.BP_Minimap_ContentsItem_Tooltip_C.ExecuteUbergraph_BP_Minimap_ContentsItem_Tooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Minimap_ContentsItem_Tooltip_C::ExecuteUbergraph_BP_Minimap_ContentsItem_Tooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Minimap_ContentsItem_Tooltip_C", "ExecuteUbergraph_BP_Minimap_ContentsItem_Tooltip");

	Params::BP_Minimap_ContentsItem_Tooltip_C_ExecuteUbergraph_BP_Minimap_ContentsItem_Tooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Minimap_ContentsItem_Tooltip.BP_Minimap_ContentsItem_Tooltip_C.�@t��_0
// (BlueprintCallable, BlueprintEvent)

void UBP_Minimap_ContentsItem_Tooltip_C::___t___0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Minimap_ContentsItem_Tooltip_C", "�@t��_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Minimap_ContentsItem_Tooltip.BP_Minimap_ContentsItem_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Minimap_ContentsItem_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Minimap_ContentsItem_Tooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
