#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MagicDoll_tooltip_ItemSlot

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MagicDoll_tooltip_ItemSlot.BP_MagicDoll_tooltip_ItemSlot_C.ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot
// 0x0008 (0x0008 - 0x0000)
struct BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot) == 0x000004, "Wrong alignment on BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot");
static_assert(sizeof(BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot) == 0x000008, "Wrong size on BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot");
static_assert(offsetof(BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot, EntryPoint) == 0x000000, "Member 'BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_MagicDoll_tooltip_ItemSlot_C_ExecuteUbergraph_BP_MagicDoll_tooltip_ItemSlot::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_MagicDoll_tooltip_ItemSlot.BP_MagicDoll_tooltip_ItemSlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct) == 0x000001, "Wrong alignment on BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct");
static_assert(sizeof(BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct) == 0x000001, "Wrong size on BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct");
static_assert(offsetof(BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_MagicDoll_tooltip_ItemSlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_MagicDoll_tooltip_ItemSlot.BP_MagicDoll_tooltip_ItemSlot_C.SetHideForTooltip
// 0x0020 (0x0020 - 0x0000)
struct BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip final
{
public:
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_Hide_self_CastInput;                      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_Hide_self_CastInput_1;                    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip) == 0x000008, "Wrong alignment on BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip");
static_assert(sizeof(BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip) == 0x000020, "Wrong size on BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip");
static_assert(offsetof(BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip, CallFunc_Hide_self_CastInput) == 0x000000, "Member 'BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip::CallFunc_Hide_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip, CallFunc_Hide_self_CastInput_1) == 0x000010, "Member 'BP_MagicDoll_tooltip_ItemSlot_C_SetHideForTooltip::CallFunc_Hide_self_CastInput_1' has a wrong offset!");

}
