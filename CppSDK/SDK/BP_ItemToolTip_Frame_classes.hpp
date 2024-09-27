#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemToolTip_Frame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ItemToolTip_Frame.BP_ItemToolTip_Frame_C
// 0x0030 (0x17D0 - 0x17A0)
class UBP_ItemToolTip_Frame_C final : public UTLUserWidgetItemTooltipFrame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x17A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ItemToolTip_ContextMenuFrame_C*     BP_ItemToolTip_ContextMenuFrame_Left;              // 0x17A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemToolTip_ContextMenuFrame_C*     BP_ItemToolTip_ContextMenuFrame_Right;             // 0x17B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemTooltip_Widget_C*               BP_ItemTooltip_Left;                               // 0x17B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemTooltip_Widget_C*               BP_ItemTooltip_Middle;                             // 0x17C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemTooltip_Widget_C*               BP_ItemTooltip_Right;                              // 0x17C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ItemToolTip_Frame(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemToolTip_Frame_C">();
	}
	static class UBP_ItemToolTip_Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemToolTip_Frame_C>();
	}
};
static_assert(alignof(UBP_ItemToolTip_Frame_C) == 0x000010, "Wrong alignment on UBP_ItemToolTip_Frame_C");
static_assert(sizeof(UBP_ItemToolTip_Frame_C) == 0x0017D0, "Wrong size on UBP_ItemToolTip_Frame_C");
static_assert(offsetof(UBP_ItemToolTip_Frame_C, UberGraphFrame) == 0x0017A0, "Member 'UBP_ItemToolTip_Frame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ItemToolTip_Frame_C, BP_ItemToolTip_ContextMenuFrame_Left) == 0x0017A8, "Member 'UBP_ItemToolTip_Frame_C::BP_ItemToolTip_ContextMenuFrame_Left' has a wrong offset!");
static_assert(offsetof(UBP_ItemToolTip_Frame_C, BP_ItemToolTip_ContextMenuFrame_Right) == 0x0017B0, "Member 'UBP_ItemToolTip_Frame_C::BP_ItemToolTip_ContextMenuFrame_Right' has a wrong offset!");
static_assert(offsetof(UBP_ItemToolTip_Frame_C, BP_ItemTooltip_Left) == 0x0017B8, "Member 'UBP_ItemToolTip_Frame_C::BP_ItemTooltip_Left' has a wrong offset!");
static_assert(offsetof(UBP_ItemToolTip_Frame_C, BP_ItemTooltip_Middle) == 0x0017C0, "Member 'UBP_ItemToolTip_Frame_C::BP_ItemTooltip_Middle' has a wrong offset!");
static_assert(offsetof(UBP_ItemToolTip_Frame_C, BP_ItemTooltip_Right) == 0x0017C8, "Member 'UBP_ItemToolTip_Frame_C::BP_ItemTooltip_Right' has a wrong offset!");

}
