#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MagicDoll_Tooltip_Frame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_MagicDoll_Tooltip_Frame.BP_MagicDoll_Tooltip_Frame_C
// 0x0018 (0x0AB8 - 0x0AA0)
class UBP_MagicDoll_Tooltip_Frame_C final : public UTLUserWidgetMagicDollTooltipFrame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBp_MagicDoll_tooltip_C*                Bp_MagicDoll_Tooltip_Left;                         // 0x0AA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBp_MagicDoll_tooltip_C*                Bp_MagicDoll_Tooltip_Right;                        // 0x0AB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MagicDoll_Tooltip_Frame(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MagicDoll_Tooltip_Frame_C">();
	}
	static class UBP_MagicDoll_Tooltip_Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MagicDoll_Tooltip_Frame_C>();
	}
};
static_assert(alignof(UBP_MagicDoll_Tooltip_Frame_C) == 0x000008, "Wrong alignment on UBP_MagicDoll_Tooltip_Frame_C");
static_assert(sizeof(UBP_MagicDoll_Tooltip_Frame_C) == 0x000AB8, "Wrong size on UBP_MagicDoll_Tooltip_Frame_C");
static_assert(offsetof(UBP_MagicDoll_Tooltip_Frame_C, UberGraphFrame) == 0x000AA0, "Member 'UBP_MagicDoll_Tooltip_Frame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Tooltip_Frame_C, Bp_MagicDoll_Tooltip_Left) == 0x000AA8, "Member 'UBP_MagicDoll_Tooltip_Frame_C::Bp_MagicDoll_Tooltip_Left' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Tooltip_Frame_C, Bp_MagicDoll_Tooltip_Right) == 0x000AB0, "Member 'UBP_MagicDoll_Tooltip_Frame_C::Bp_MagicDoll_Tooltip_Right' has a wrong offset!");

}
