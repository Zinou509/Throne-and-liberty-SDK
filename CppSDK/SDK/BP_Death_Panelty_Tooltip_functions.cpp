#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Death_Panelty_Tooltip

#include "Basic.hpp"

#include "BP_Death_Panelty_Tooltip_classes.hpp"
#include "BP_Death_Panelty_Tooltip_parameters.hpp"


namespace SDK
{

// Function BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C.ExecuteUbergraph_BP_Death_Panelty_Tooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Death_Panelty_Tooltip_C::ExecuteUbergraph_BP_Death_Panelty_Tooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Death_Panelty_Tooltip_C", "ExecuteUbergraph_BP_Death_Panelty_Tooltip");

	Params::BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C.OnUpdateMembershipState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bActivate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Death_Panelty_Tooltip_C::OnUpdateMembershipState(bool bActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Death_Panelty_Tooltip_C", "OnUpdateMembershipState");

	Params::BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState Parms{};

	Parms.bActivate = bActivate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Death_Panelty_Tooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Death_Panelty_Tooltip_C", "PreConstruct");

	Params::BP_Death_Panelty_Tooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
