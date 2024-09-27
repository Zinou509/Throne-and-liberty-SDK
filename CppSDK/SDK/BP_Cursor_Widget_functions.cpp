#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cursor_Widget

#include "Basic.hpp"

#include "BP_Cursor_Widget_classes.hpp"
#include "BP_Cursor_Widget_parameters.hpp"


namespace SDK
{

// Function BP_Cursor_Widget.BP_Cursor_Widget_C.ExecuteUbergraph_BP_Cursor_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Cursor_Widget_C::ExecuteUbergraph_BP_Cursor_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cursor_Widget_C", "ExecuteUbergraph_BP_Cursor_Widget");

	Params::BP_Cursor_Widget_C_ExecuteUbergraph_BP_Cursor_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cursor_Widget.BP_Cursor_Widget_C.OnCursorFXEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bStronglyFX                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Cursor_Widget_C::OnCursorFXEvent(bool bStronglyFX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cursor_Widget_C", "OnCursorFXEvent");

	Params::BP_Cursor_Widget_C_OnCursorFXEvent Parms{};

	Parms.bStronglyFX = bStronglyFX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cursor_Widget.BP_Cursor_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Cursor_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cursor_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
