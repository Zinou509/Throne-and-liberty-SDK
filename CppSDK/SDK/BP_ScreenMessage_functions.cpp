#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScreenMessage

#include "Basic.hpp"

#include "BP_ScreenMessage_classes.hpp"
#include "BP_ScreenMessage_parameters.hpp"


namespace SDK
{

// Function BP_ScreenMessage.BP_ScreenMessage_C.ExecuteUbergraph_BP_ScreenMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScreenMessage_C::ExecuteUbergraph_BP_ScreenMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenMessage_C", "ExecuteUbergraph_BP_ScreenMessage");

	Params::BP_ScreenMessage_C_ExecuteUbergraph_BP_ScreenMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScreenMessage.BP_ScreenMessage_C.�@t��_0
// (BlueprintCallable, BlueprintEvent)

void UBP_ScreenMessage_C::___t___0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenMessage_C", "�@t��_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScreenMessage.BP_ScreenMessage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ScreenMessage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenMessage_C", "PreConstruct");

	Params::BP_ScreenMessage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
