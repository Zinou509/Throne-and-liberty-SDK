#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_WeaponIcon

#include "Basic.hpp"

#include "BP_Target_NameCard_WeaponIcon_classes.hpp"
#include "BP_Target_NameCard_WeaponIcon_parameters.hpp"


namespace SDK
{

// Function BP_Target_NameCard_WeaponIcon.BP_Target_NameCard_WeaponIcon_C.ExecuteUbergraph_BP_Target_NameCard_WeaponIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Target_NameCard_WeaponIcon_C::ExecuteUbergraph_BP_Target_NameCard_WeaponIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_WeaponIcon_C", "ExecuteUbergraph_BP_Target_NameCard_WeaponIcon");

	Params::BP_Target_NameCard_WeaponIcon_C_ExecuteUbergraph_BP_Target_NameCard_WeaponIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target_NameCard_WeaponIcon.BP_Target_NameCard_WeaponIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Target_NameCard_WeaponIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_WeaponIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

