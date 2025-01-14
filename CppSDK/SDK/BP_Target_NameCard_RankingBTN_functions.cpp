#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_RankingBTN

#include "Basic.hpp"

#include "BP_Target_NameCard_RankingBTN_classes.hpp"
#include "BP_Target_NameCard_RankingBTN_parameters.hpp"


namespace SDK
{

// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.ExecuteUbergraph_BP_Target_NameCard_RankingBTN
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Target_NameCard_RankingBTN_C::ExecuteUbergraph_BP_Target_NameCard_RankingBTN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "ExecuteUbergraph_BP_Target_NameCard_RankingBTN");

	Params::BP_Target_NameCard_RankingBTN_C_ExecuteUbergraph_BP_Target_NameCard_RankingBTN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.OnUpdateNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InIsOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Target_NameCard_RankingBTN_C::OnUpdateNotification(bool InIsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "OnUpdateNotification");

	Params::BP_Target_NameCard_RankingBTN_C_OnUpdateNotification Parms{};

	Parms.InIsOn = InIsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Target_NameCard_RankingBTN_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "PreConstruct");

	Params::BP_Target_NameCard_RankingBTN_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.gold
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Target_NameCard_RankingBTN_C::Gold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "gold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.Purple
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Target_NameCard_RankingBTN_C::Purple()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "Purple");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.Set Button Color Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonColorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Target_NameCard_RankingBTN_C::Set_Button_Color_Type(int32 ButtonColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "Set Button Color Type");

	Params::BP_Target_NameCard_RankingBTN_C_Set_Button_Color_Type Parms{};

	Parms.ButtonColorType = ButtonColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.Red
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Target_NameCard_RankingBTN_C::Red()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "Red");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Target_NameCard_RankingBTN.BP_Target_NameCard_RankingBTN_C.Hexagon
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Target_NameCard_RankingBTN_C::Hexagon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Target_NameCard_RankingBTN_C", "Hexagon");

	UObject::ProcessEvent(Func, nullptr);
}

}

