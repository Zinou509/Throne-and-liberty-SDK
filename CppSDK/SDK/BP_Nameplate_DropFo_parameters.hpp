#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nameplate_DropFo

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.ExecuteUbergraph_BP_Nameplate_DropFo
// 0x0030 (0x0030 - 0x0000)
struct BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextColorAndOpacityBinding_ReturnValue; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetEnableHitTest_self_CastInput;          // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetEnableHitTest_self_CastInput_1;        // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo) == 0x000008, "Wrong alignment on BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo");
static_assert(sizeof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo) == 0x000030, "Wrong size on BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo");
static_assert(offsetof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo, EntryPoint) == 0x000000, "Member 'BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo, CallFunc_AddTextColorAndOpacityBinding_ReturnValue) == 0x000005, "Member 'BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo::CallFunc_AddTextColorAndOpacityBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo, CallFunc_SetEnableHitTest_self_CastInput) == 0x000008, "Member 'BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo::CallFunc_SetEnableHitTest_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo, CallFunc_SetEnableHitTest_self_CastInput_1) == 0x000018, "Member 'BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo::CallFunc_SetEnableHitTest_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'BP_Nameplate_DropFo_C_ExecuteUbergraph_BP_Nameplate_DropFo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BP_Nameplate_DropFo.BP_Nameplate_DropFo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_Nameplate_DropFo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Nameplate_DropFo_C_PreConstruct) == 0x000001, "Wrong alignment on BP_Nameplate_DropFo_C_PreConstruct");
static_assert(sizeof(BP_Nameplate_DropFo_C_PreConstruct) == 0x000001, "Wrong size on BP_Nameplate_DropFo_C_PreConstruct");
static_assert(offsetof(BP_Nameplate_DropFo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_Nameplate_DropFo_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
