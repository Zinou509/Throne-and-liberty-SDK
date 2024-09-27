#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillSlot_Weather

#include "Basic.hpp"

#include "TLScheme_structs.hpp"


namespace SDK::Params
{

// Function BP_SkillSlot_Weather.BP_SkillSlot_Weather_C.ExecuteUbergraph_BP_SkillSlot_Weather
// 0x0050 (0x0050 - 0x0000)
struct BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> K2Node_DynamicCast_AsTLWidget_Visibility_Interface; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETLUIPlatform                                 CallFunc_GetUIPlatform_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETLUIPlatform                                 CallFunc_GetUIPlatform_ReturnValue_1;              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> K2Node_DynamicCast_AsTLWidget_Visibility_Interface_1; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather) == 0x000008, "Wrong alignment on BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather");
static_assert(sizeof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather) == 0x000050, "Wrong size on BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, EntryPoint) == 0x000000, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_DynamicCast_AsTLWidget_Visibility_Interface) == 0x000008, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_DynamicCast_AsTLWidget_Visibility_Interface' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_Event_IsDesignTime) == 0x000019, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, CallFunc_SetVisible_self_CastInput) == 0x000020, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, CallFunc_GetUIPlatform_ReturnValue) == 0x000030, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::CallFunc_GetUIPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, CallFunc_GetUIPlatform_ReturnValue_1) == 0x000032, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::CallFunc_GetUIPlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_SwitchEnum_CmpSuccess_1) == 0x000033, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_DynamicCast_AsTLWidget_Visibility_Interface_1) == 0x000038, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_DynamicCast_AsTLWidget_Visibility_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_SkillSlot_Weather_C_ExecuteUbergraph_BP_SkillSlot_Weather::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_SkillSlot_Weather.BP_SkillSlot_Weather_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_SkillSlot_Weather_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkillSlot_Weather_C_PreConstruct) == 0x000001, "Wrong alignment on BP_SkillSlot_Weather_C_PreConstruct");
static_assert(sizeof(BP_SkillSlot_Weather_C_PreConstruct) == 0x000001, "Wrong size on BP_SkillSlot_Weather_C_PreConstruct");
static_assert(offsetof(BP_SkillSlot_Weather_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_SkillSlot_Weather_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
