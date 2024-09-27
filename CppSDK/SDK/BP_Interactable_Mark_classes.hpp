#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_Mark

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Interactable_Mark.BP_Interactable_Mark_C
// 0x0088 (0x0C50 - 0x0BC8)
class UBP_Interactable_Mark_C final : public UTLUserWidgetInteractableMark
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ContextMenu_Desire_C*               BP_ItemCondition;                                  // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_Desire_C*               BP_PostCondition;                                  // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_Desire_C*               BP_PreCondition01;                                 // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_Desire_C*               BP_PreCondition02;                                 // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_Desire_C*               BP_PreCondition03;                                 // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_Desire_C*               BP_PreCondition04;                                 // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_Desire_C*               BP_PreCondition05;                                 // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLVerticalBox*                         BP_PreConditionList;                               // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextMenu_MainActionIcon_C*       MainIconFrame;                                     // 0x0C10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_19;                                        // 0x0C18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        Path_CooperateArrow_Number;                        // 0x0C20(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        Path_CooperateArrow_ArrowOnly;                     // 0x0C38(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Interactable_Mark(int32 EntryPoint);
	void OnHideKeyIcon();
	void OnShowKeyIcon();
	void Construct();
	void OnShowEnableIcon();
	void OnShowDisableIcon();
	void OnHideMainActionIcon();
	void OnShowMainActionIcon();
	void OnCastingStart(const bool bInMyPcCasting, const bool bInCooperative, const bool bInShowCooperateNum);
	void OnCastingEnd(ECastingEndReason CastingEndReason, const bool bInMyPcCasting, const bool bInShowCooperateNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Interactable_Mark_C">();
	}
	static class UBP_Interactable_Mark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Interactable_Mark_C>();
	}
};
static_assert(alignof(UBP_Interactable_Mark_C) == 0x000008, "Wrong alignment on UBP_Interactable_Mark_C");
static_assert(sizeof(UBP_Interactable_Mark_C) == 0x000C50, "Wrong size on UBP_Interactable_Mark_C");
static_assert(offsetof(UBP_Interactable_Mark_C, UberGraphFrame) == 0x000BC8, "Member 'UBP_Interactable_Mark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_ItemCondition) == 0x000BD0, "Member 'UBP_Interactable_Mark_C::BP_ItemCondition' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PostCondition) == 0x000BD8, "Member 'UBP_Interactable_Mark_C::BP_PostCondition' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PreCondition01) == 0x000BE0, "Member 'UBP_Interactable_Mark_C::BP_PreCondition01' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PreCondition02) == 0x000BE8, "Member 'UBP_Interactable_Mark_C::BP_PreCondition02' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PreCondition03) == 0x000BF0, "Member 'UBP_Interactable_Mark_C::BP_PreCondition03' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PreCondition04) == 0x000BF8, "Member 'UBP_Interactable_Mark_C::BP_PreCondition04' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PreCondition05) == 0x000C00, "Member 'UBP_Interactable_Mark_C::BP_PreCondition05' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, BP_PreConditionList) == 0x000C08, "Member 'UBP_Interactable_Mark_C::BP_PreConditionList' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, MainIconFrame) == 0x000C10, "Member 'UBP_Interactable_Mark_C::MainIconFrame' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, TLImage_19) == 0x000C18, "Member 'UBP_Interactable_Mark_C::TLImage_19' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, Path_CooperateArrow_Number) == 0x000C20, "Member 'UBP_Interactable_Mark_C::Path_CooperateArrow_Number' has a wrong offset!");
static_assert(offsetof(UBP_Interactable_Mark_C, Path_CooperateArrow_ArrowOnly) == 0x000C38, "Member 'UBP_Interactable_Mark_C::Path_CooperateArrow_ArrowOnly' has a wrong offset!");

}
