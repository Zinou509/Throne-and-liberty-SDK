#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tem_KeyGuide_Tooltip_BTN

#include "Basic.hpp"

#include "BP_Tem_KeyGuide_Tooltip_BTN_classes.hpp"
#include "BP_Tem_KeyGuide_Tooltip_BTN_parameters.hpp"


namespace SDK
{

// Function BP_Tem_KeyGuide_Tooltip_BTN.BP_Tem_KeyGuide_Tooltip_BTN_C.ExecuteUbergraph_BP_Tem_KeyGuide_Tooltip_BTN
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tem_KeyGuide_Tooltip_BTN_C::ExecuteUbergraph_BP_Tem_KeyGuide_Tooltip_BTN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tem_KeyGuide_Tooltip_BTN_C", "ExecuteUbergraph_BP_Tem_KeyGuide_Tooltip_BTN");

	Params::BP_Tem_KeyGuide_Tooltip_BTN_C_ExecuteUbergraph_BP_Tem_KeyGuide_Tooltip_BTN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tem_KeyGuide_Tooltip_BTN.BP_Tem_KeyGuide_Tooltip_BTN_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Tem_KeyGuide_Tooltip_BTN_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tem_KeyGuide_Tooltip_BTN_C", "PreConstruct");

	Params::BP_Tem_KeyGuide_Tooltip_BTN_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
