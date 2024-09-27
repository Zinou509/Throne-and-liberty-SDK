#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpeechMenu_Desire

#include "Basic.hpp"

#include "BP_SpeechMenu_Desire_classes.hpp"
#include "BP_SpeechMenu_Desire_parameters.hpp"


namespace SDK
{

// Function BP_SpeechMenu_Desire.BP_SpeechMenu_Desire_C.ExecuteUbergraph_BP_SpeechMenu_Desire
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpeechMenu_Desire_C::ExecuteUbergraph_BP_SpeechMenu_Desire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpeechMenu_Desire_C", "ExecuteUbergraph_BP_SpeechMenu_Desire");

	Params::BP_SpeechMenu_Desire_C_ExecuteUbergraph_BP_SpeechMenu_Desire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpeechMenu_Desire.BP_SpeechMenu_Desire_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SpeechMenu_Desire_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpeechMenu_Desire_C", "PreConstruct");

	Params::BP_SpeechMenu_Desire_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpeechMenu_Desire.BP_SpeechMenu_Desire_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SpeechMenu_Desire_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpeechMenu_Desire_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
