#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Equip_PackageView_SlotList_Slot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ItemTooltip_Equip_PackageView_SlotList_Slot.BP_ItemTooltip_Equip_PackageView_SlotList_Slot_C
// 0x0040 (0x0E20 - 0x0DE0)
class UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C final : public UTLUserWidgetSelectableItemSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0DE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0DE8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_ItemSlot_Frame_C*                BP_UI_ItemSlot_Frame;                              // 0x0DF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_Slot_Texture_C*                  BP_UI_Slot_NomalHover;                             // 0x0DF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               IMG_Dimmed;                                        // 0x0E00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Item_Count;                                        // 0x0E08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TextItemName;                                      // 0x0E10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ItemTooltip_Equip_PackageView_SlotList_Slot(int32 EntryPoint);
	void OnSlotDimmed(bool InIsDimmed);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemTooltip_Equip_PackageView_SlotList_Slot_C">();
	}
	static class UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C>();
	}
};
static_assert(alignof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C) == 0x000010, "Wrong alignment on UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C");
static_assert(sizeof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C) == 0x000E20, "Wrong size on UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, UberGraphFrame) == 0x000DE0, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, Hover) == 0x000DE8, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, BP_UI_ItemSlot_Frame) == 0x000DF0, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::BP_UI_ItemSlot_Frame' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, BP_UI_Slot_NomalHover) == 0x000DF8, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::BP_UI_Slot_NomalHover' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, IMG_Dimmed) == 0x000E00, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::IMG_Dimmed' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, Item_Count) == 0x000E08, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::Item_Count' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C, TextItemName) == 0x000E10, "Member 'UBP_ItemTooltip_Equip_PackageView_SlotList_Slot_C::TextItemName' has a wrong offset!");

}

