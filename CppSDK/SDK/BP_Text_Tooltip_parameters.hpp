#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Text_Tooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Text_Tooltip.BP_Text_Tooltip_C.ExecuteUbergraph_BP_Text_Tooltip
// 0x0018 (0x0018 - 0x0000)
struct BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip) == 0x000008, "Wrong alignment on BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip");
static_assert(sizeof(BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip) == 0x000018, "Wrong size on BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip");
static_assert(offsetof(BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip, EntryPoint) == 0x000000, "Member 'BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip, CallFunc_TextIsEmpty_ReturnValue) == 0x000004, "Member 'BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_Text_Tooltip_C_ExecuteUbergraph_BP_Text_Tooltip::CallFunc_SetVisible_self_CastInput' has a wrong offset!");

}

