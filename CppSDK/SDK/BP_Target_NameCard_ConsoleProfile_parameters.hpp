#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_ConsoleProfile

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Target_NameCard_ConsoleProfile.BP_Target_NameCard_ConsoleProfile_C.ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile
// 0x0018 (0x0018 - 0x0000)
struct BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InIsOn;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile) == 0x000008, "Wrong alignment on BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile");
static_assert(sizeof(BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile) == 0x000018, "Wrong size on BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile");
static_assert(offsetof(BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile, EntryPoint) == 0x000000, "Member 'BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile, K2Node_Event_InIsOn) == 0x000004, "Member 'BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile::K2Node_Event_InIsOn' has a wrong offset!");
static_assert(offsetof(BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_Target_NameCard_ConsoleProfile_C_ExecuteUbergraph_BP_Target_NameCard_ConsoleProfile::CallFunc_SetVisible_self_CastInput' has a wrong offset!");

// Function BP_Target_NameCard_ConsoleProfile.BP_Target_NameCard_ConsoleProfile_C.OnUpdateNotification
// 0x0001 (0x0001 - 0x0000)
struct BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification final
{
public:
	bool                                          InIsOn;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification) == 0x000001, "Wrong alignment on BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification");
static_assert(sizeof(BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification) == 0x000001, "Wrong size on BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification");
static_assert(offsetof(BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification, InIsOn) == 0x000000, "Member 'BP_Target_NameCard_ConsoleProfile_C_OnUpdateNotification::InIsOn' has a wrong offset!");

}

