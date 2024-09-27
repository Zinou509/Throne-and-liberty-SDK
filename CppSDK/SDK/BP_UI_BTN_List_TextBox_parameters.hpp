#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_List_TextBox

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_UI_BTN_List_TextBox.BP_UI_BTN_List_TextBox_C.ExecuteUbergraph_BP_UI_BTN_List_TextBox
// 0x0050 (0x0050 - 0x0000)
struct BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InIsOn;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_ShowWithValue_self_CastInput;             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_1;              // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox) == 0x000008, "Wrong alignment on BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox");
static_assert(sizeof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox) == 0x000050, "Wrong size on BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, EntryPoint) == 0x000000, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, K2Node_Event_InIsOn) == 0x000020, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::K2Node_Event_InIsOn' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, CallFunc_ShowWithValue_self_CastInput) == 0x000028, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::CallFunc_ShowWithValue_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, CallFunc_SetVisible_self_CastInput_1) == 0x000038, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::CallFunc_SetVisible_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000048, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox, K2Node_Event_IsDesignTime) == 0x00004C, "Member 'BP_UI_BTN_List_TextBox_C_ExecuteUbergraph_BP_UI_BTN_List_TextBox::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_UI_BTN_List_TextBox.BP_UI_BTN_List_TextBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_UI_BTN_List_TextBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_BTN_List_TextBox_C_PreConstruct) == 0x000001, "Wrong alignment on BP_UI_BTN_List_TextBox_C_PreConstruct");
static_assert(sizeof(BP_UI_BTN_List_TextBox_C_PreConstruct) == 0x000001, "Wrong size on BP_UI_BTN_List_TextBox_C_PreConstruct");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_UI_BTN_List_TextBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_UI_BTN_List_TextBox.BP_UI_BTN_List_TextBox_C.OnUpdateNotification
// 0x0001 (0x0001 - 0x0000)
struct BP_UI_BTN_List_TextBox_C_OnUpdateNotification final
{
public:
	bool                                          InIsOn;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_BTN_List_TextBox_C_OnUpdateNotification) == 0x000001, "Wrong alignment on BP_UI_BTN_List_TextBox_C_OnUpdateNotification");
static_assert(sizeof(BP_UI_BTN_List_TextBox_C_OnUpdateNotification) == 0x000001, "Wrong size on BP_UI_BTN_List_TextBox_C_OnUpdateNotification");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_OnUpdateNotification, InIsOn) == 0x000000, "Member 'BP_UI_BTN_List_TextBox_C_OnUpdateNotification::InIsOn' has a wrong offset!");

// Function BP_UI_BTN_List_TextBox.BP_UI_BTN_List_TextBox_C.Set Button Color Type
// 0x0008 (0x0008 - 0x0000)
struct BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type final
{
public:
	int32                                         ButtonColorType;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type) == 0x000004, "Wrong alignment on BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type");
static_assert(sizeof(BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type) == 0x000008, "Wrong size on BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type, ButtonColorType) == 0x000000, "Member 'BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type::ButtonColorType' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'BP_UI_BTN_List_TextBox_C_Set_Button_Color_Type::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function BP_UI_BTN_List_TextBox.BP_UI_BTN_List_TextBox_C.Hexagon
// 0x0010 (0x0010 - 0x0000)
struct BP_UI_BTN_List_TextBox_C_Hexagon final
{
public:
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_BTN_List_TextBox_C_Hexagon) == 0x000008, "Wrong alignment on BP_UI_BTN_List_TextBox_C_Hexagon");
static_assert(sizeof(BP_UI_BTN_List_TextBox_C_Hexagon) == 0x000010, "Wrong size on BP_UI_BTN_List_TextBox_C_Hexagon");
static_assert(offsetof(BP_UI_BTN_List_TextBox_C_Hexagon, CallFunc_SetVisible_self_CastInput) == 0x000000, "Member 'BP_UI_BTN_List_TextBox_C_Hexagon::CallFunc_SetVisible_self_CastInput' has a wrong offset!");

}
