#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NamePlete_Tem_Emblem_Optimization

#include "Basic.hpp"

#include "BP_NamePlete_Tem_Emblem_Optimization_classes.hpp"
#include "BP_NamePlete_Tem_Emblem_Optimization_parameters.hpp"


namespace SDK
{

// Function BP_NamePlete_Tem_Emblem_Optimization.BP_NamePlete_Tem_Emblem_Optimization_C.ExecuteUbergraph_BP_NamePlete_Tem_Emblem_Optimization
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NamePlete_Tem_Emblem_Optimization_C::ExecuteUbergraph_BP_NamePlete_Tem_Emblem_Optimization(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlete_Tem_Emblem_Optimization_C", "ExecuteUbergraph_BP_NamePlete_Tem_Emblem_Optimization");

	Params::BP_NamePlete_Tem_Emblem_Optimization_C_ExecuteUbergraph_BP_NamePlete_Tem_Emblem_Optimization Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NamePlete_Tem_Emblem_Optimization.BP_NamePlete_Tem_Emblem_Optimization_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_NamePlete_Tem_Emblem_Optimization_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NamePlete_Tem_Emblem_Optimization_C", "PreConstruct");

	Params::BP_NamePlete_Tem_Emblem_Optimization_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
