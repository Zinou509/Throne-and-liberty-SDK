#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skill_Tooltip

#include "Basic.hpp"

#include "TLClient_structs.hpp"


namespace SDK::Params
{

// Function BP_Skill_Tooltip.BP_Skill_Tooltip_C.ExecuteUbergraph_BP_Skill_Tooltip
// 0x01A8 (0x01A8 - 0x0000)
struct BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTLUserWidgetSkillLevelOption*>  K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_AddVisibleBinding_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextBinding_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UTLTextBlock*>                   K2Node_MakeArray_Array_1;                          // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UTLTextBlock*                           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_1;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Event_InIndex;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InOptionText;                         // 0x0078(0x0018)(ConstParm)
	bool                                          K2Node_Event_bInEnable;                            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTLTextBlock*                           CallFunc_Array_Get_Item_1;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_2;              // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETLWeaponMasteryNodeState                     K2Node_Event_InNodeState;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C3[0x1];                                       // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_AddVisibleBinding_ReturnValue_1;          // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetOnUpdateDefault_ReturnValue;           // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetOnUpdateDefault_ReturnValue_1;         // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_3;              // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextBinding_ReturnValue_1;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextBinding_ReturnValue_2;             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextBinding_ReturnValue_3;             // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddVisibleBinding_ReturnValue_2;          // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextColorAndOpacityBinding_ReturnValue; // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextBinding_ReturnValue_4;             // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetOnUpdateDefault_ReturnValue_2;         // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextColorAndOpacityBinding_ReturnValue_1; // 0x00F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddTextBinding_ReturnValue_5;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddVisibleBinding_ReturnValue_3;          // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddVisibleBinding_ReturnValue_4;          // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddVisibleBinding_ReturnValue_5;          // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_4;              // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_5;              // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_6;              // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_7;              // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTLHorizontalBox*>               K2Node_MakeArray_Array_2;                          // 0x0158(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTLTextBlock*>                   K2Node_MakeArray_Array_3;                          // 0x0168(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTLTextBlock*>                   K2Node_MakeArray_Array_4;                          // 0x0178(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTLUserWidgetActivateSkillTraitInSkillTooltip*> K2Node_MakeArray_Array_5;                          // 0x0188(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTLTextBlock*>                   K2Node_MakeArray_Array_6;                          // 0x0198(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip) == 0x000008, "Wrong alignment on BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip");
static_assert(sizeof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip) == 0x0001A8, "Wrong size on BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, EntryPoint) == 0x000000, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddVisibleBinding_ReturnValue) == 0x000028, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddVisibleBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextBinding_ReturnValue) == 0x000029, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput) == 0x000030, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array_1) == 0x000040, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_1) == 0x000060, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_Event_InIndex) == 0x000070, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_Event_InIndex' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_Event_InOptionText) == 0x000078, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_Event_InOptionText' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_Event_bInEnable) == 0x000090, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_Event_bInEnable' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_2) == 0x0000B0, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000C0, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_Event_InNodeState) == 0x0000C1, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_Event_InNodeState' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_SwitchEnum_CmpSuccess) == 0x0000C2, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C4, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddVisibleBinding_ReturnValue_1) == 0x0000D4, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddVisibleBinding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000D5, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetOnUpdateDefault_ReturnValue) == 0x0000D6, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetOnUpdateDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetOnUpdateDefault_ReturnValue_1) == 0x0000D7, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetOnUpdateDefault_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000D8, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_SwitchEnum_CmpSuccess_2) == 0x0000D9, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000DA, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_BooleanAND_ReturnValue) == 0x0000DB, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_3) == 0x0000E0, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextBinding_ReturnValue_1) == 0x0000F0, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextBinding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextBinding_ReturnValue_2) == 0x0000F1, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextBinding_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextBinding_ReturnValue_3) == 0x0000F2, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextBinding_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddVisibleBinding_ReturnValue_2) == 0x0000F3, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddVisibleBinding_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextColorAndOpacityBinding_ReturnValue) == 0x0000F4, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextColorAndOpacityBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextBinding_ReturnValue_4) == 0x0000F5, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextBinding_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetOnUpdateDefault_ReturnValue_2) == 0x0000F6, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetOnUpdateDefault_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextColorAndOpacityBinding_ReturnValue_1) == 0x0000F7, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextColorAndOpacityBinding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddTextBinding_ReturnValue_5) == 0x0000F8, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddTextBinding_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddVisibleBinding_ReturnValue_3) == 0x0000F9, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddVisibleBinding_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddVisibleBinding_ReturnValue_4) == 0x0000FA, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddVisibleBinding_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_AddVisibleBinding_ReturnValue_5) == 0x0000FB, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_AddVisibleBinding_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, Temp_int_Loop_Counter_Variable) == 0x0000FC, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_Add_IntInt_ReturnValue) == 0x000104, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_4) == 0x000108, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_5) == 0x000118, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_6) == 0x000128, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_6' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SetVisible_self_CastInput_7) == 0x000138, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SetVisible_self_CastInput_7' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000148, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000150, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array_2) == 0x000158, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array_3) == 0x000168, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array_4) == 0x000178, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array_5) == 0x000188, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip, K2Node_MakeArray_Array_6) == 0x000198, "Member 'BP_Skill_Tooltip_C_ExecuteUbergraph_BP_Skill_Tooltip::K2Node_MakeArray_Array_6' has a wrong offset!");

// Function BP_Skill_Tooltip.BP_Skill_Tooltip_C.OnUpdateWeaponMasteryState
// 0x0001 (0x0001 - 0x0000)
struct BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState final
{
public:
	ETLWeaponMasteryNodeState                     InNodeState;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState) == 0x000001, "Wrong alignment on BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState");
static_assert(sizeof(BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState) == 0x000001, "Wrong size on BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState");
static_assert(offsetof(BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState, InNodeState) == 0x000000, "Member 'BP_Skill_Tooltip_C_OnUpdateWeaponMasteryState::InNodeState' has a wrong offset!");

// Function BP_Skill_Tooltip.BP_Skill_Tooltip_C.OnUpdateAwakeningOption
// 0x0028 (0x0028 - 0x0000)
struct BP_Skill_Tooltip_C_OnUpdateAwakeningOption final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InOptionText;                                      // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bInEnable;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Skill_Tooltip_C_OnUpdateAwakeningOption) == 0x000008, "Wrong alignment on BP_Skill_Tooltip_C_OnUpdateAwakeningOption");
static_assert(sizeof(BP_Skill_Tooltip_C_OnUpdateAwakeningOption) == 0x000028, "Wrong size on BP_Skill_Tooltip_C_OnUpdateAwakeningOption");
static_assert(offsetof(BP_Skill_Tooltip_C_OnUpdateAwakeningOption, InIndex) == 0x000000, "Member 'BP_Skill_Tooltip_C_OnUpdateAwakeningOption::InIndex' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_OnUpdateAwakeningOption, InOptionText) == 0x000008, "Member 'BP_Skill_Tooltip_C_OnUpdateAwakeningOption::InOptionText' has a wrong offset!");
static_assert(offsetof(BP_Skill_Tooltip_C_OnUpdateAwakeningOption, bInEnable) == 0x000020, "Member 'BP_Skill_Tooltip_C_OnUpdateAwakeningOption::bInEnable' has a wrong offset!");

}
