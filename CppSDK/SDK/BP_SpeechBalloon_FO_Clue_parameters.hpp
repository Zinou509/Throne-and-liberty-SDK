#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpeechBalloon_FO_Clue

#include "Basic.hpp"

#include "TLClient_structs.hpp"


namespace SDK::Params
{

// Function BP_SpeechBalloon_FO_Clue.BP_SpeechBalloon_FO_Clue_C.ExecuteUbergraph_BP_SpeechBalloon_FO_Clue
// 0x0008 (0x0008 - 0x0000)
struct BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bCalibrated;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECalibratedEdgeType                           K2Node_Event_InEdgeType;                           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue) == 0x000004, "Wrong alignment on BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue");
static_assert(sizeof(BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue) == 0x000008, "Wrong size on BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue, EntryPoint) == 0x000000, "Member 'BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue, K2Node_Event_bCalibrated) == 0x000005, "Member 'BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue::K2Node_Event_bCalibrated' has a wrong offset!");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue, K2Node_Event_InEdgeType) == 0x000006, "Member 'BP_SpeechBalloon_FO_Clue_C_ExecuteUbergraph_BP_SpeechBalloon_FO_Clue::K2Node_Event_InEdgeType' has a wrong offset!");

// Function BP_SpeechBalloon_FO_Clue.BP_SpeechBalloon_FO_Clue_C.OnPositionCalibrated
// 0x0002 (0x0002 - 0x0000)
struct BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated final
{
public:
	bool                                          bCalibrated;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECalibratedEdgeType                           InEdgeType;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated) == 0x000001, "Wrong alignment on BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated");
static_assert(sizeof(BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated) == 0x000002, "Wrong size on BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated, bCalibrated) == 0x000000, "Member 'BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated::bCalibrated' has a wrong offset!");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated, InEdgeType) == 0x000001, "Member 'BP_SpeechBalloon_FO_Clue_C_OnPositionCalibrated::InEdgeType' has a wrong offset!");

// Function BP_SpeechBalloon_FO_Clue.BP_SpeechBalloon_FO_Clue_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_SpeechBalloon_FO_Clue_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpeechBalloon_FO_Clue_C_PreConstruct) == 0x000001, "Wrong alignment on BP_SpeechBalloon_FO_Clue_C_PreConstruct");
static_assert(sizeof(BP_SpeechBalloon_FO_Clue_C_PreConstruct) == 0x000001, "Wrong size on BP_SpeechBalloon_FO_Clue_C_PreConstruct");
static_assert(offsetof(BP_SpeechBalloon_FO_Clue_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_SpeechBalloon_FO_Clue_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

