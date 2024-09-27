#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PC_EventEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PC_EventEffect.BP_PC_EventEffect_C.ExecuteUbergraph_BP_PC_EventEffect
// 0x0020 (0x0020 - 0x0000)
struct BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInEEAlert;                           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect) == 0x000008, "Wrong alignment on BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect");
static_assert(sizeof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect) == 0x000020, "Wrong size on BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect");
static_assert(offsetof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect, EntryPoint) == 0x000000, "Member 'BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect, K2Node_Event_IsDesignTime) == 0x000010, "Member 'BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect, K2Node_Event_bInEEAlert) == 0x000011, "Member 'BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect::K2Node_Event_bInEEAlert' has a wrong offset!");
static_assert(offsetof(BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'BP_PC_EventEffect_C_ExecuteUbergraph_BP_PC_EventEffect::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function BP_PC_EventEffect.BP_PC_EventEffect_C.OnUpdateEEAlert
// 0x0001 (0x0001 - 0x0000)
struct BP_PC_EventEffect_C_OnUpdateEEAlert final
{
public:
	bool                                          bInEEAlert;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PC_EventEffect_C_OnUpdateEEAlert) == 0x000001, "Wrong alignment on BP_PC_EventEffect_C_OnUpdateEEAlert");
static_assert(sizeof(BP_PC_EventEffect_C_OnUpdateEEAlert) == 0x000001, "Wrong size on BP_PC_EventEffect_C_OnUpdateEEAlert");
static_assert(offsetof(BP_PC_EventEffect_C_OnUpdateEEAlert, bInEEAlert) == 0x000000, "Member 'BP_PC_EventEffect_C_OnUpdateEEAlert::bInEEAlert' has a wrong offset!");

// Function BP_PC_EventEffect.BP_PC_EventEffect_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_PC_EventEffect_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PC_EventEffect_C_PreConstruct) == 0x000001, "Wrong alignment on BP_PC_EventEffect_C_PreConstruct");
static_assert(sizeof(BP_PC_EventEffect_C_PreConstruct) == 0x000001, "Wrong size on BP_PC_EventEffect_C_PreConstruct");
static_assert(offsetof(BP_PC_EventEffect_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_PC_EventEffect_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
