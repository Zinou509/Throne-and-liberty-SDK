#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AreaEnterLeaveMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLScheme_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AreaEnterLeaveMessage.BP_AreaEnterLeaveMessage_C
// 0x01A0 (0x0340 - 0x01A0)
class UBP_AreaEnterLeaveMessage_C final : public UTLContentsConditionMessageObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	ETLJsonMapRegionType                          PrevRegionType_0;                                  // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETLJsonMapRegionType                          CurRegionType_0;                                   // 0x01A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapRegionType                                PrevContentsRegionType;                            // 0x01AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapRegionType                                CurContentsRegionType;                             // 0x01AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnterPrepareSiege;                                // 0x01AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterProgressSiege;                               // 0x01AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveSiegePrepare;                                // 0x01AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveSiegeProgress;                               // 0x01AF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterOccupation;                                  // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveOccupation;                                  // 0x01B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterDynamicEvent;                                // 0x01B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveDyanmicEvent;                                // 0x01B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bChangeDynamicEventSide;                           // 0x01B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bResultSiege;                                      // 0x01B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUpdateSiege;                                      // 0x01B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterTaxDelivery;                                 // 0x01B7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveTaxDelivery;                                 // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterWorldBossEvent;                              // 0x01B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveWorldBossEvent;                              // 0x01BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterFieldBossEvent;                              // 0x01BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLeaveFieldBossEvent;                              // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bContentsToContents;                               // 0x01BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BE[0x2];                                      // 0x01BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CastleName;                                        // 0x01C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OccupationName;                                    // 0x01D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DynamicEventName;                                  // 0x01F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TaxDeliveryEventName;                              // 0x0208(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WorldBossEventName;                                // 0x0220(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FieldBossEventName;                                // 0x0238(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   EventEffectName;                                   // 0x0250(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OldTribeName;                                      // 0x0268(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NewTribeName;                                      // 0x0280(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NameIsNull;                                        // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NewTribeUid;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OldTribeUid;                                       // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayTimeForDisplayContentsLeaveMsg;               // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayTimeForAvoidRedundantOutput;                  // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OnEnterDelayTimeForDisplayRegionTypeChangeMsg;     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OnLeaveDelayTimeForDisplayRegionTypeChangeMsg;     // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ArraySiegeSystemMessage;                           // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArrayOccupationMessage;                            // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArrayDynamicEventMessage;                          // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArrayWorldBossEventMessage;                        // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArrayTaxDeliveryMessage;                           // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArrayFieldBossEventMessage;                        // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bPeaceWorldBossEvent;                              // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPeaceFieldBossEvent;                              // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ETLEventScheduleType                          DynamicEventType;                                  // 0x032A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32B[0x1];                                      // 0x032B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntContentsCurRegionType;                          // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IntContentsPrevRegionType;                         // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResetStop;                                        // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bChangedRegionTypeEvent;                           // 0x0335(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bChangeEclipsInStart;                              // 0x0336(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bChangedEclipsInEnd;                               // 0x0337(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnterRegion;                                      // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInterserveEvent;                                  // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOccupationParticipating;                          // 0x033A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EMapRegionType                                LocalRegionType;                                   // 0x033B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AreaEnterLeaveMessage(int32 EntryPoint);
	void OnResultSiegeWarfareImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnPreLeaveSiegeWarfareImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnEnterSiegeWarfareImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnEnterRegionImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnChangeEnvTimeTypeImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnChangeEclipseStatusImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnUpdateSiegeStatusImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnLeaveFieldBossImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnJoinFieldBossImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnLeaveTaxDeliveryImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnJoinTaxDeliveryImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnLeaveWorldBossImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnJoinWorldBossImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnLeaveDynamicEventImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnEnterDynamicEventImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnPreLeaveOccupationImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void OnEnterOccupationImpl(const struct FTLContentsScreenMsgParams& InMsgParam);
	void Set_System_Message(int32 CurContentsType, int32 PrevContentsType, class FName* ScreeMesaage, class FName* ChatMessage, bool* ShowScreenSystemMessage, bool* ShowChatSystemMessage);
	void Convert_Region_Type_to_Integer(EMapRegionType RegionType, int32* IntRegionType);
	void Is_Join_Contents(bool* NewParam);
	void DebugStringMessage(class FName ChatSystemMsgID, bool DebugPreint, int32 PrevContents, int32 CurContents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AreaEnterLeaveMessage_C">();
	}
	static class UBP_AreaEnterLeaveMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AreaEnterLeaveMessage_C>();
	}
};
static_assert(alignof(UBP_AreaEnterLeaveMessage_C) == 0x000008, "Wrong alignment on UBP_AreaEnterLeaveMessage_C");
static_assert(sizeof(UBP_AreaEnterLeaveMessage_C) == 0x000340, "Wrong size on UBP_AreaEnterLeaveMessage_C");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, UberGraphFrame) == 0x0001A0, "Member 'UBP_AreaEnterLeaveMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, PrevRegionType_0) == 0x0001A8, "Member 'UBP_AreaEnterLeaveMessage_C::PrevRegionType_0' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, CurRegionType_0) == 0x0001A9, "Member 'UBP_AreaEnterLeaveMessage_C::CurRegionType_0' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, PrevContentsRegionType) == 0x0001AA, "Member 'UBP_AreaEnterLeaveMessage_C::PrevContentsRegionType' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, CurContentsRegionType) == 0x0001AB, "Member 'UBP_AreaEnterLeaveMessage_C::CurContentsRegionType' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterPrepareSiege) == 0x0001AC, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterPrepareSiege' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterProgressSiege) == 0x0001AD, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterProgressSiege' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveSiegePrepare) == 0x0001AE, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveSiegePrepare' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveSiegeProgress) == 0x0001AF, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveSiegeProgress' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterOccupation) == 0x0001B0, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterOccupation' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveOccupation) == 0x0001B1, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveOccupation' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterDynamicEvent) == 0x0001B2, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterDynamicEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveDyanmicEvent) == 0x0001B3, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveDyanmicEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bChangeDynamicEventSide) == 0x0001B4, "Member 'UBP_AreaEnterLeaveMessage_C::bChangeDynamicEventSide' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bResultSiege) == 0x0001B5, "Member 'UBP_AreaEnterLeaveMessage_C::bResultSiege' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bUpdateSiege) == 0x0001B6, "Member 'UBP_AreaEnterLeaveMessage_C::bUpdateSiege' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterTaxDelivery) == 0x0001B7, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterTaxDelivery' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveTaxDelivery) == 0x0001B8, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveTaxDelivery' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterWorldBossEvent) == 0x0001B9, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterWorldBossEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveWorldBossEvent) == 0x0001BA, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveWorldBossEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterFieldBossEvent) == 0x0001BB, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterFieldBossEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bLeaveFieldBossEvent) == 0x0001BC, "Member 'UBP_AreaEnterLeaveMessage_C::bLeaveFieldBossEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bContentsToContents) == 0x0001BD, "Member 'UBP_AreaEnterLeaveMessage_C::bContentsToContents' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, CastleName) == 0x0001C0, "Member 'UBP_AreaEnterLeaveMessage_C::CastleName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, OccupationName) == 0x0001D8, "Member 'UBP_AreaEnterLeaveMessage_C::OccupationName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, DynamicEventName) == 0x0001F0, "Member 'UBP_AreaEnterLeaveMessage_C::DynamicEventName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, TaxDeliveryEventName) == 0x000208, "Member 'UBP_AreaEnterLeaveMessage_C::TaxDeliveryEventName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, WorldBossEventName) == 0x000220, "Member 'UBP_AreaEnterLeaveMessage_C::WorldBossEventName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, FieldBossEventName) == 0x000238, "Member 'UBP_AreaEnterLeaveMessage_C::FieldBossEventName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, EventEffectName) == 0x000250, "Member 'UBP_AreaEnterLeaveMessage_C::EventEffectName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, OldTribeName) == 0x000268, "Member 'UBP_AreaEnterLeaveMessage_C::OldTribeName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, NewTribeName) == 0x000280, "Member 'UBP_AreaEnterLeaveMessage_C::NewTribeName' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, NameIsNull) == 0x000298, "Member 'UBP_AreaEnterLeaveMessage_C::NameIsNull' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, NewTribeUid) == 0x0002B0, "Member 'UBP_AreaEnterLeaveMessage_C::NewTribeUid' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, OldTribeUid) == 0x0002B4, "Member 'UBP_AreaEnterLeaveMessage_C::OldTribeUid' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, DelayTimeForDisplayContentsLeaveMsg) == 0x0002B8, "Member 'UBP_AreaEnterLeaveMessage_C::DelayTimeForDisplayContentsLeaveMsg' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, DelayTimeForAvoidRedundantOutput) == 0x0002BC, "Member 'UBP_AreaEnterLeaveMessage_C::DelayTimeForAvoidRedundantOutput' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, OnEnterDelayTimeForDisplayRegionTypeChangeMsg) == 0x0002C0, "Member 'UBP_AreaEnterLeaveMessage_C::OnEnterDelayTimeForDisplayRegionTypeChangeMsg' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, OnLeaveDelayTimeForDisplayRegionTypeChangeMsg) == 0x0002C4, "Member 'UBP_AreaEnterLeaveMessage_C::OnLeaveDelayTimeForDisplayRegionTypeChangeMsg' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, ArraySiegeSystemMessage) == 0x0002C8, "Member 'UBP_AreaEnterLeaveMessage_C::ArraySiegeSystemMessage' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, ArrayOccupationMessage) == 0x0002D8, "Member 'UBP_AreaEnterLeaveMessage_C::ArrayOccupationMessage' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, ArrayDynamicEventMessage) == 0x0002E8, "Member 'UBP_AreaEnterLeaveMessage_C::ArrayDynamicEventMessage' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, ArrayWorldBossEventMessage) == 0x0002F8, "Member 'UBP_AreaEnterLeaveMessage_C::ArrayWorldBossEventMessage' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, ArrayTaxDeliveryMessage) == 0x000308, "Member 'UBP_AreaEnterLeaveMessage_C::ArrayTaxDeliveryMessage' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, ArrayFieldBossEventMessage) == 0x000318, "Member 'UBP_AreaEnterLeaveMessage_C::ArrayFieldBossEventMessage' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bPeaceWorldBossEvent) == 0x000328, "Member 'UBP_AreaEnterLeaveMessage_C::bPeaceWorldBossEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bPeaceFieldBossEvent) == 0x000329, "Member 'UBP_AreaEnterLeaveMessage_C::bPeaceFieldBossEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, DynamicEventType) == 0x00032A, "Member 'UBP_AreaEnterLeaveMessage_C::DynamicEventType' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, IntContentsCurRegionType) == 0x00032C, "Member 'UBP_AreaEnterLeaveMessage_C::IntContentsCurRegionType' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, IntContentsPrevRegionType) == 0x000330, "Member 'UBP_AreaEnterLeaveMessage_C::IntContentsPrevRegionType' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bResetStop) == 0x000334, "Member 'UBP_AreaEnterLeaveMessage_C::bResetStop' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bChangedRegionTypeEvent) == 0x000335, "Member 'UBP_AreaEnterLeaveMessage_C::bChangedRegionTypeEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bChangeEclipsInStart) == 0x000336, "Member 'UBP_AreaEnterLeaveMessage_C::bChangeEclipsInStart' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bChangedEclipsInEnd) == 0x000337, "Member 'UBP_AreaEnterLeaveMessage_C::bChangedEclipsInEnd' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bEnterRegion) == 0x000338, "Member 'UBP_AreaEnterLeaveMessage_C::bEnterRegion' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bInterserveEvent) == 0x000339, "Member 'UBP_AreaEnterLeaveMessage_C::bInterserveEvent' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, bOccupationParticipating) == 0x00033A, "Member 'UBP_AreaEnterLeaveMessage_C::bOccupationParticipating' has a wrong offset!");
static_assert(offsetof(UBP_AreaEnterLeaveMessage_C, LocalRegionType) == 0x00033B, "Member 'UBP_AreaEnterLeaveMessage_C::LocalRegionType' has a wrong offset!");

}
