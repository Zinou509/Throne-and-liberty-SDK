#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Death_Panelty_Tooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C.ExecuteUbergraph_BP_Death_Panelty_Tooltip
// 0x0018 (0x0018 - 0x0000)
struct BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bActivate;                            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip) == 0x000008, "Wrong alignment on BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip");
static_assert(sizeof(BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip) == 0x000018, "Wrong size on BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip");
static_assert(offsetof(BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip, EntryPoint) == 0x000000, "Member 'BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip, K2Node_Event_bActivate) == 0x000005, "Member 'BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip::K2Node_Event_bActivate' has a wrong offset!");
static_assert(offsetof(BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_Death_Panelty_Tooltip_C_ExecuteUbergraph_BP_Death_Panelty_Tooltip::CallFunc_SetVisible_self_CastInput' has a wrong offset!");

// Function BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C.OnUpdateMembershipState
// 0x0001 (0x0001 - 0x0000)
struct BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState final
{
public:
	bool                                          bActivate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState) == 0x000001, "Wrong alignment on BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState");
static_assert(sizeof(BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState) == 0x000001, "Wrong size on BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState");
static_assert(offsetof(BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState, bActivate) == 0x000000, "Member 'BP_Death_Panelty_Tooltip_C_OnUpdateMembershipState::bActivate' has a wrong offset!");

// Function BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_Death_Panelty_Tooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Death_Panelty_Tooltip_C_PreConstruct) == 0x000001, "Wrong alignment on BP_Death_Panelty_Tooltip_C_PreConstruct");
static_assert(sizeof(BP_Death_Panelty_Tooltip_C_PreConstruct) == 0x000001, "Wrong size on BP_Death_Panelty_Tooltip_C_PreConstruct");
static_assert(offsetof(BP_Death_Panelty_Tooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_Death_Panelty_Tooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

