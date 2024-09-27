#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Cant_ICO_BTN

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemTooltip_Cant_ICO_BTN.BP_ItemTooltip_Cant_ICO_BTN_C.ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN
// 0x0080 (0x0080 - 0x0000)
struct BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InName;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetBrushByName_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FSlateBrush>         K2Node_MakeMap_Map;                                // 0x0018(0x0050)()
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN) == 0x000008, "Wrong alignment on BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN");
static_assert(sizeof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN) == 0x000080, "Wrong size on BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, EntryPoint) == 0x000000, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, K2Node_CustomEvent_InName) == 0x000008, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::K2Node_CustomEvent_InName' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, CallFunc_SetBrushByName_ReturnValue) == 0x000010, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::CallFunc_SetBrushByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, K2Node_MakeMap_Map) == 0x000018, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, CallFunc_SetVisible_self_CastInput) == 0x000068, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000078, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_ExecuteUbergraph_BP_ItemTooltip_Cant_ICO_BTN::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function BP_ItemTooltip_Cant_ICO_BTN.BP_ItemTooltip_Cant_ICO_BTN_C.SetIconBrush
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush) == 0x000004, "Wrong alignment on BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush");
static_assert(sizeof(BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush) == 0x000008, "Wrong size on BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush, InName) == 0x000000, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_SetIconBrush::InName' has a wrong offset!");

// Function BP_ItemTooltip_Cant_ICO_BTN.BP_ItemTooltip_Cant_ICO_BTN_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct) == 0x000001, "Wrong alignment on BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct");
static_assert(sizeof(BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct) == 0x000001, "Wrong size on BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct");
static_assert(offsetof(BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_ItemTooltip_Cant_ICO_BTN_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
