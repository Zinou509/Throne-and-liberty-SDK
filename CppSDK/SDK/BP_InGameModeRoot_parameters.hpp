#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGameModeRoot

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_InGameModeRoot.BP_InGameModeRoot_C.ExecuteUbergraph_BP_InGameModeRoot
// 0x0018 (0x0018 - 0x0000)
struct BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPanelWidget*>                   K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot) == 0x000008, "Wrong alignment on BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot");
static_assert(sizeof(BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot) == 0x000018, "Wrong size on BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot");
static_assert(offsetof(BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot, EntryPoint) == 0x000000, "Member 'BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_InGameModeRoot_C_ExecuteUbergraph_BP_InGameModeRoot::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_InGameModeRoot.BP_InGameModeRoot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_InGameModeRoot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InGameModeRoot_C_PreConstruct) == 0x000001, "Wrong alignment on BP_InGameModeRoot_C_PreConstruct");
static_assert(sizeof(BP_InGameModeRoot_C_PreConstruct) == 0x000001, "Wrong size on BP_InGameModeRoot_C_PreConstruct");
static_assert(offsetof(BP_InGameModeRoot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_InGameModeRoot_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

