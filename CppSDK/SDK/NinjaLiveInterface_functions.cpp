#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLiveInterface

#include "Basic.hpp"

#include "NinjaLiveInterface_classes.hpp"
#include "NinjaLiveInterface_parameters.hpp"


namespace SDK
{

// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeTimeOfBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeTimeOfCanvas                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void INinjaLiveInterface_C::LiveActivation(class FName ParamName, float FadeTimeOfBrush, float FadeTimeOfCanvas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveInterface_C", "LiveActivation");

	Params::NinjaLiveInterface_C_LiveActivation Parms{};

	Parms.ParamName = ParamName;
	Parms.FadeTimeOfBrush = FadeTimeOfBrush;
	Parms.FadeTimeOfCanvas = FadeTimeOfCanvas;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveFluidParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BrushSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void INinjaLiveInterface_C::LiveFluidParams(float BrushSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLiveInterface_C", "LiveFluidParams");

	Params::NinjaLiveInterface_C_LiveFluidParams Parms{};

	Parms.BrushSize = BrushSize;

	UObject::ProcessEvent(Func, &Parms);
}

}
