#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeadUI_DropFo

#include "Basic.hpp"

#include "BP_HeadUI_DropFo_classes.hpp"
#include "BP_HeadUI_DropFo_parameters.hpp"


namespace SDK
{

// Function BP_HeadUI_DropFo.BP_HeadUI_DropFo_C.ExecuteUbergraph_BP_HeadUI_DropFo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HeadUI_DropFo_C::ExecuteUbergraph_BP_HeadUI_DropFo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadUI_DropFo_C", "ExecuteUbergraph_BP_HeadUI_DropFo");

	Params::BP_HeadUI_DropFo_C_ExecuteUbergraph_BP_HeadUI_DropFo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadUI_DropFo.BP_HeadUI_DropFo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_HeadUI_DropFo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadUI_DropFo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

