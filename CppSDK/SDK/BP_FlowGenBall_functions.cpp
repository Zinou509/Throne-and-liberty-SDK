#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlowGenBall

#include "Basic.hpp"

#include "BP_FlowGenBall_classes.hpp"
#include "BP_FlowGenBall_parameters.hpp"


namespace SDK
{

// Function BP_FlowGenBall.BP_FlowGenBall_C.ExecuteUbergraph_BP_FlowGenBall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlowGenBall_C::ExecuteUbergraph_BP_FlowGenBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowGenBall_C", "ExecuteUbergraph_BP_FlowGenBall");

	Params::BP_FlowGenBall_C_ExecuteUbergraph_BP_FlowGenBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlowGenBall.BP_FlowGenBall_C.ToggleVisibleFlowGenBall
// (BlueprintCallable, BlueprintEvent)

void ABP_FlowGenBall_C::ToggleVisibleFlowGenBall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowGenBall_C", "ToggleVisibleFlowGenBall");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlowGenBall.BP_FlowGenBall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FlowGenBall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowGenBall_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlowGenBall.BP_FlowGenBall_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlowGenBall_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlowGenBall_C", "ReceiveTick");

	Params::BP_FlowGenBall_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
