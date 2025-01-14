#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StorageSlotContextMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass StorageSlotContextMenu.StorageSlotContextMenu_C
// 0x0008 (0x00C0 - 0x00B8)
class UStorageSlotContextMenu_C final : public UTLItemSlotContextMenuObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StorageSlotContextMenu(int32 EntryPoint);
	void OnContextMenuShow(EInvenModeType InInvenModeType, class UTLUserWidgetItemSlot* InItemWidget, int32 InCurrentPresetNum, ETLUIPlatform UIPlatform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StorageSlotContextMenu_C">();
	}
	static class UStorageSlotContextMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStorageSlotContextMenu_C>();
	}
};
static_assert(alignof(UStorageSlotContextMenu_C) == 0x000008, "Wrong alignment on UStorageSlotContextMenu_C");
static_assert(sizeof(UStorageSlotContextMenu_C) == 0x0000C0, "Wrong size on UStorageSlotContextMenu_C");
static_assert(offsetof(UStorageSlotContextMenu_C, UberGraphFrame) == 0x0000B8, "Member 'UStorageSlotContextMenu_C::UberGraphFrame' has a wrong offset!");

}

