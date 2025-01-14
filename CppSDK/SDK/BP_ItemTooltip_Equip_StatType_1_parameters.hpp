#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Equip_StatType_1

#include "Basic.hpp"

#include "TLClient_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1
// 0x01A0 (0x01A0 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText_2;                             // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InText_1;                             // 0x0020(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InText;                               // 0x0038(0x0018)(ConstParm)
	class FName                                   K2Node_Event_InColorKey_1;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InMinValue;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InMaxValue;                           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0078(0x0018)()
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   K2Node_Event_InEnchantMinValueText;                // 0x00A0(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InEnchantMaxValueText;                // 0x00B8(0x0018)(ConstParm)
	class FName                                   K2Node_Event_InColorKey;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_1;              // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_2;              // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InMinValueDiff;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InMaxValueDiff;                       // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTLTooltipStatCompareComponent         K2Node_MakeStruct_TLTooltipStatCompareComponent;   // 0x0110(0x0020)(NoDestructor, ContainsInstancedReference)
	struct FTLTooltipStatCompareComponent         K2Node_MakeStruct_TLTooltipStatCompareComponent_1; // 0x0130(0x0020)(NoDestructor, ContainsInstancedReference)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_3;              // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_4;              // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_5;              // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_6;              // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_7;              // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1) == 0x000008, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1) == 0x0001A0, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, EntryPoint) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InText_2) == 0x000008, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InText_2' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InText_1) == 0x000020, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InText_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InText) == 0x000038, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InColorKey_1) == 0x000050, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InColorKey_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InMinValue) == 0x000058, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InMinValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InMaxValue) == 0x00005C, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InMaxValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000078, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput) == 0x000090, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InEnchantMinValueText) == 0x0000A0, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InEnchantMinValueText' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InEnchantMaxValueText) == 0x0000B8, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InEnchantMaxValueText' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InColorKey) == 0x0000D0, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InColorKey' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_TextIsEmpty_ReturnValue) == 0x0000D8, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_TextIsEmpty_ReturnValue_1) == 0x0000D9, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_1) == 0x0000E0, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_2) == 0x0000F0, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_IsDesignTime) == 0x000100, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InMinValueDiff) == 0x000104, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InMinValueDiff' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_Event_InMaxValueDiff) == 0x000108, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_Event_InMaxValueDiff' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_MakeStruct_TLTooltipStatCompareComponent) == 0x000110, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_MakeStruct_TLTooltipStatCompareComponent' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, K2Node_MakeStruct_TLTooltipStatCompareComponent_1) == 0x000130, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::K2Node_MakeStruct_TLTooltipStatCompareComponent_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_3) == 0x000150, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_4) == 0x000160, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_5) == 0x000170, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_5' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_6) == 0x000180, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_6' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1, CallFunc_SetVisible_self_CastInput_7) == 0x000190, "Member 'BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1::CallFunc_SetVisible_self_CastInput_7' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateAttackValueCompare
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare final
{
public:
	int32                                         InMinValueDiff;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMaxValueDiff;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare) == 0x000004, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare) == 0x000008, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare, InMinValueDiff) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare::InMinValueDiff' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare, InMaxValueDiff) == 0x000004, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare::InMaxValueDiff' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_PreConstruct) == 0x000001, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_PreConstruct");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_PreConstruct) == 0x000001, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_PreConstruct");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateAttackEnchantValueText
// 0x0038 (0x0038 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText final
{
public:
	class FText                                   InEnchantMinValueText;                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   InEnchantMaxValueText;                             // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   InColorKey;                                        // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText) == 0x000008, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText) == 0x000038, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText, InEnchantMinValueText) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText::InEnchantMinValueText' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText, InEnchantMaxValueText) == 0x000018, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText::InEnchantMaxValueText' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText, InColorKey) == 0x000030, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText::InColorKey' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateAttackValue
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue final
{
public:
	int32                                         InMinValue;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMaxValue;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue) == 0x000004, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue) == 0x000008, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue, InMinValue) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue::InMinValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue, InMaxValue) == 0x000004, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue::InMaxValue' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateEnchantValueText
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   InColorKey;                                        // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText) == 0x000008, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText) == 0x000020, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText, InText) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText::InText' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText, InColorKey) == 0x000018, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText::InColorKey' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateBaseValueText
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText) == 0x000008, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText) == 0x000018, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText, InText) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText::InText' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateName
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName) == 0x000008, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName) == 0x000018, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName, InText) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName::InText' has a wrong offset!");

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.GetListItemObject
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject) == 0x000008, "Wrong alignment on BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject");
static_assert(sizeof(BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject) == 0x000008, "Wrong size on BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject");
static_assert(offsetof(BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject, ReturnValue) == 0x000000, "Member 'BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject::ReturnValue' has a wrong offset!");

}

