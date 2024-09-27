#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContextMenuFrame

#include "Basic.hpp"

#include "TLClient_structs.hpp"


namespace SDK::Params
{

// Function BP_ContextMenuFrame.BP_ContextMenuFrame_C.ExecuteUbergraph_BP_ContextMenuFrame
// 0x0030 (0x0030 - 0x0000)
struct BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTLMenuGroupPanel                      K2Node_MakeStruct_TLMenuGroupPanel;                // 0x0008(0x0010)(NoDestructor, ContainsInstancedReference)
	TArray<struct FTLMenuGroupPanel>              K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame) == 0x000008, "Wrong alignment on BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame");
static_assert(sizeof(BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame) == 0x000030, "Wrong size on BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame");
static_assert(offsetof(BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame, EntryPoint) == 0x000000, "Member 'BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame, K2Node_MakeStruct_TLMenuGroupPanel) == 0x000008, "Member 'BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame::K2Node_MakeStruct_TLMenuGroupPanel' has a wrong offset!");
static_assert(offsetof(BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame, K2Node_Event_IsDesignTime) == 0x000028, "Member 'BP_ContextMenuFrame_C_ExecuteUbergraph_BP_ContextMenuFrame::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_ContextMenuFrame.BP_ContextMenuFrame_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_ContextMenuFrame_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ContextMenuFrame_C_PreConstruct) == 0x000001, "Wrong alignment on BP_ContextMenuFrame_C_PreConstruct");
static_assert(sizeof(BP_ContextMenuFrame_C_PreConstruct) == 0x000001, "Wrong size on BP_ContextMenuFrame_C_PreConstruct");
static_assert(offsetof(BP_ContextMenuFrame_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_ContextMenuFrame_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
