#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nameplate_DropFo

#include "Basic.hpp"

#include "BP_Nameplate_DropFo_classes.hpp"
#include "BP_Nameplate_DropFo_parameters.hpp"


namespace SDK
{

// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.ExecuteUbergraph_BP_Nameplate_DropFo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Nameplate_DropFo_C::ExecuteUbergraph_BP_Nameplate_DropFo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nameplate_DropFo_C", "ExecuteUbergraph_BP_Nameplate_DropFo");

	Params::BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Nameplate_DropFo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nameplate_DropFo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.OnOwnershipGained
// (Event, Public, BlueprintEvent)

void UBP_Nameplate_DropFo_C::OnOwnershipGained()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nameplate_DropFo_C", "OnOwnershipGained");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.OnOwnershipLost
// (Event, Public, BlueprintEvent)

void UBP_Nameplate_DropFo_C::OnOwnershipLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nameplate_DropFo_C", "OnOwnershipLost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Nameplate_DropFo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nameplate_DropFo_C", "PreConstruct");

	Params::BP_Nameplate_DropFo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

