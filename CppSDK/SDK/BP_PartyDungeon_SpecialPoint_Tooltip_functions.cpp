#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PartyDungeon_SpecialPoint_Tooltip

#include "Basic.hpp"

#include "BP_PartyDungeon_SpecialPoint_Tooltip_classes.hpp"
#include "BP_PartyDungeon_SpecialPoint_Tooltip_parameters.hpp"


namespace SDK
{

// Function BP_PartyDungeon_SpecialPoint_Tooltip.BP_PartyDungeon_SpecialPoint_Tooltip_C.ExecuteUbergraph_BP_PartyDungeon_SpecialPoint_Tooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyDungeon_SpecialPoint_Tooltip_C::ExecuteUbergraph_BP_PartyDungeon_SpecialPoint_Tooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyDungeon_SpecialPoint_Tooltip_C", "ExecuteUbergraph_BP_PartyDungeon_SpecialPoint_Tooltip");

	Params::BP_PartyDungeon_SpecialPoint_Tooltip_C_ExecuteUbergraph_BP_PartyDungeon_SpecialPoint_Tooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyDungeon_SpecialPoint_Tooltip.BP_PartyDungeon_SpecialPoint_Tooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PartyDungeon_SpecialPoint_Tooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyDungeon_SpecialPoint_Tooltip_C", "PreConstruct");

	Params::BP_PartyDungeon_SpecialPoint_Tooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
