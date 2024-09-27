#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpeechBalloon_PC

#include "Basic.hpp"

#include "BP_SpeechBalloon_PC_classes.hpp"
#include "BP_SpeechBalloon_PC_parameters.hpp"


namespace SDK
{

// Function BP_SpeechBalloon_PC.BP_SpeechBalloon_PC_C.ExecuteUbergraph_BP_SpeechBalloon_PC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpeechBalloon_PC_C::ExecuteUbergraph_BP_SpeechBalloon_PC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpeechBalloon_PC_C", "ExecuteUbergraph_BP_SpeechBalloon_PC");

	Params::BP_SpeechBalloon_PC_C_ExecuteUbergraph_BP_SpeechBalloon_PC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpeechBalloon_PC.BP_SpeechBalloon_PC_C.OnChangeChatBalloonStyle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsMyPc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EChatMessageCategory                    InChatCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpeechBalloon_PC_C::OnChangeChatBalloonStyle(bool IsMyPc, EChatMessageCategory InChatCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpeechBalloon_PC_C", "OnChangeChatBalloonStyle");

	Params::BP_SpeechBalloon_PC_C_OnChangeChatBalloonStyle Parms{};

	Parms.IsMyPc = IsMyPc;
	Parms.InChatCategory = InChatCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpeechBalloon_PC.BP_SpeechBalloon_PC_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SpeechBalloon_PC_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpeechBalloon_PC_C", "PreConstruct");

	Params::BP_SpeechBalloon_PC_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
