#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_CheckBox

#include "Basic.hpp"

#include "BP_UI_BTN_CheckBox_classes.hpp"
#include "BP_UI_BTN_CheckBox_parameters.hpp"


namespace SDK
{

// Function BP_UI_BTN_CheckBox.BP_UI_BTN_CheckBox_C.ExecuteUbergraph_BP_UI_BTN_CheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_BTN_CheckBox_C::ExecuteUbergraph_BP_UI_BTN_CheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_CheckBox_C", "ExecuteUbergraph_BP_UI_BTN_CheckBox");

	Params::BP_UI_BTN_CheckBox_C_ExecuteUbergraph_BP_UI_BTN_CheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_BTN_CheckBox.BP_UI_BTN_CheckBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_BTN_CheckBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_CheckBox_C", "PreConstruct");

	Params::BP_UI_BTN_CheckBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_BTN_CheckBox.BP_UI_BTN_CheckBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_UI_BTN_CheckBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_CheckBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI_BTN_CheckBox.BP_UI_BTN_CheckBox_C.Large_Check
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UI_BTN_CheckBox_C::Large_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_CheckBox_C", "Large_Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI_BTN_CheckBox.BP_UI_BTN_CheckBox_C.SmallCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UI_BTN_CheckBox_C::SmallCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_CheckBox_C", "SmallCheck");

	UObject::ProcessEvent(Func, nullptr);
}

}

