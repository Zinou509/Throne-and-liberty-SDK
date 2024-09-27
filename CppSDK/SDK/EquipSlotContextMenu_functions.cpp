#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipSlotContextMenu

#include "Basic.hpp"

#include "EquipSlotContextMenu_classes.hpp"
#include "EquipSlotContextMenu_parameters.hpp"


namespace SDK
{

// Function EquipSlotContextMenu.EquipSlotContextMenu_C.ExecuteUbergraph_EquipSlotContextMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipSlotContextMenu_C::ExecuteUbergraph_EquipSlotContextMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipSlotContextMenu_C", "ExecuteUbergraph_EquipSlotContextMenu");

	Params::EquipSlotContextMenu_C_ExecuteUbergraph_EquipSlotContextMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipSlotContextMenu.EquipSlotContextMenu_C.OnContextMenuShow
// (Event, Public, BlueprintEvent)
// Parameters:
// EInvenModeType                          InInvenModeType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTLUserWidgetItemSlot*            InItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCurrentPresetNum                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETLUIPlatform                           UIPlatform                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipSlotContextMenu_C::OnContextMenuShow(EInvenModeType InInvenModeType, class UTLUserWidgetItemSlot* InItemWidget, int32 InCurrentPresetNum, ETLUIPlatform UIPlatform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipSlotContextMenu_C", "OnContextMenuShow");

	Params::EquipSlotContextMenu_C_OnContextMenuShow Parms{};

	Parms.InInvenModeType = InInvenModeType;
	Parms.InItemWidget = InItemWidget;
	Parms.InCurrentPresetNum = InCurrentPresetNum;
	Parms.UIPlatform = UIPlatform;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipSlotContextMenu.EquipSlotContextMenu_C.AddUnequipMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLUserWidgetItemSlot*            EquipSlotWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipSlotContextMenu_C::AddUnequipMenu(class UTLUserWidgetItemSlot* EquipSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipSlotContextMenu_C", "AddUnequipMenu");

	Params::EquipSlotContextMenu_C_AddUnequipMenu Parms{};

	Parms.EquipSlotWidget = EquipSlotWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}
