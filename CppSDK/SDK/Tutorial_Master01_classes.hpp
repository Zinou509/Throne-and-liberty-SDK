#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tutorial_Master01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLScheme_structs.hpp"
#include "TLClient_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tutorial_Master01.Tutorial_Master01_C
// 0x0030 (0x06F0 - 0x06C0)
class UTutorial_Master01_C final : public UTLTutorialConditionObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   ______x_____;                                      // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TT_______1;                                        // 0x06D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TT_______2;                                        // 0x06D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D2[0x2];                                      // 0x06D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Uid;                                               // 0x06D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         NewVar_0;                                          // 0x06D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EFoSubType                                    Fo_Sub_Type;                                       // 0x06E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tutorial_Master01(int32 EntryPoint);
	void ___t___3();
	void ___t___2();
	void ___t___1();
	void ___t___5(class FName Guid);
	void ___t___0(int32 Uid_0, bool bIsFo, EFoSubType FoSubType, class FName TagName);
	void OnEventObjTickInterval_Event_1(class UTLObjectWorldProxy* WorldObject);
	void OnEventChangeToDeath_Event_0(ETLContentResurrectionType InResurrectionType);
	void CustomEvent_0(ETLPurchaseShopType SpecialShopType);
	void OnEventClosePopupWindow_Event_1(class FName PopupWidgetName);
	void OnEventNpcFoInteractionDelegate_Event_0(int32 Uid_0, bool bIsFo, EFoSubType FoSubType, class FName TagName);
	void OnEventChangeActionCamera_Event_0(bool bActionCameraMode);
	void OnEventContractNpcAcceptableCountOverMax_Event_0();
	void OnEventEquipSlotUpdate_Event_0(EEquipCategory InEquipSlotCategory, const struct FTLInfoItem& InInfoItem);
	void OnEventEndCutscene_Event_0(class FName CutSceneID);
	void OnEventDeleteTLObjectWorldEvent_Event_0(int32 ObjId, class FName TableRowName, EWorldObjectType WorldObjectType, ETLCreatureRank CreatureRank, bool bLeaveByFar);
	void OnEventUseSkill_Event_1(ETLSkillQuickSlotId UseSkillSlot, int32 SkillComplexId);
	void OnEventClosePopupWindow_Event_0(class FName PopupWidgetName);
	void OnAcceptContract_Event_0();
	void OnEventAcquireMagicDoll_Event_0(class FName MagicDollId, const struct FTLRowMagicDoll& MagicDollInfo);
	void OnEventEarnFirstRotationEventPoint_Event_0();
	void OnEventChangeMapRegionType_Event_0(EMapRegionType MapRegionType);
	void OnEventEffectCount_Event_0(class FName InName, int32 InCount);
	void OnEventCeateTLObjectWorldEvent_Event_0(int32 ObjId, class FName TableRowName, EWorldObjectType WorldObjectType, ETLCreatureRank CreatureRank);
	void OnEventItemCountUpdate_Event_0(const struct FTLInfoItem& InfoItem, int64 NewCount, bool bIncrease);
	void OnEventUpdateTreasureBoxAreaApproaching_Event_0();
	void OnEventPartyActivate_Event_0(bool InActivate);
	void OnEventAcquirePolymorph_Event_0(class FName PolymorphId, const struct FTLSchemePolymorph& PolymorphInfo);
	void OnEventObjectiveAttained_Event_0(class FName Guid);
	void OnEventUpdateWeaponMasteryLevel_Event_0(int32 InLevelPrev, int32 InLevel);
	void OnEventEnterContentsVolume_Event_1(class FName ContentsVolumeEventName, bool bIsEnter);
	void OnEventChangePolymorph_Event_1(int32 Uid_0, ETLBodySize BodySize, ETLMobiltyType MobiltyType);
	void OnEventChangePolymorph_Event_0(int32 Uid_0, ETLBodySize BodySize, ETLMobiltyType MobiltyType);
	void OnEventCodeAttained_Event_0(class FName Guid);
	void OnEventJumpDelegate_Event_0();
	void OnEventEnterContentsVolume_Event_0(class FName ContentsVolumeEventName, bool bIsEnter);
	void OnEventZoomCamera_Event_0();
	void OnEventRotateCamera_Event_0();
	void OnEventUseSkill_Event_0(ETLSkillQuickSlotId UseSkillSlot, int32 SkillComplexId);
	void OnEventNpcFoInteractionDelegate_Event_1(int32 Uid_0, bool bIsFo, EFoSubType FoSubType, class FName TagName);
	void OnEventOpenPopupWindow_Event_1(class FName PopupWidgetName);
	void OnActivateByID(class FName InTutorialId);
	void OnEventOpenPopupWindow_Event_0(class FName PopupWidgetName);
	void OnEventLevelUp_Event_0(int32 Level);
	void OnCreate();
	void TT____(class FName ______x______0);
	void TLTableUI_pt0___(class FName CheckRowName, class FName* CheckName);
	void TLFo_pt0___(class FName CheckRowName, int32* CheckUID, class FName* CheckName);
	void TLNpc_pt0___(class FName CheckRowName, int32* CheckUID, class FName* CheckName);
	void TLRegionList_pt0___(class FName CheckRowName, class FName* CheckName);
	void TLPolymorph_pt0___(class FName CheckRowName, int32* CheckUID);
	void TLItemMisc_pt0___(class FName CheckRowName, int32* CheckUID);
	void TLInteractionCameraSetting_pt0___(class FName CheckRowName, class FName* CheckName);
	void TLEventEffect_pt0___(class FName CheckRowName, class FName* CheckName);
	void TLMap_pt0___(class FName CheckRowName, class FName* CheckName, int32* CheckUID);
	void TLMagicDoll_pt0___(class FName CheckRowName, int32* CheckUID, class FName* CheckName);
	void CodexGuid_pt0___(class FName CheckRowName, class FName* CheckName);
	void TLCutscene_pt0___(class FName CheckRowName, class FName* CheckName);
	void DynamicEvent_pt0___(class FName CheckRowName, class FName* CheckName);
	void FieldBossEvent_pt0___(class FName CheckRowName, class FName* CheckName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tutorial_Master01_C">();
	}
	static class UTutorial_Master01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorial_Master01_C>();
	}
};
static_assert(alignof(UTutorial_Master01_C) == 0x000008, "Wrong alignment on UTutorial_Master01_C");
static_assert(sizeof(UTutorial_Master01_C) == 0x0006F0, "Wrong size on UTutorial_Master01_C");
static_assert(offsetof(UTutorial_Master01_C, UberGraphFrame) == 0x0006C0, "Member 'UTutorial_Master01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorial_Master01_C, ______x_____) == 0x0006C8, "Member 'UTutorial_Master01_C::______x_____' has a wrong offset!");
static_assert(offsetof(UTutorial_Master01_C, TT_______1) == 0x0006D0, "Member 'UTutorial_Master01_C::TT_______1' has a wrong offset!");
static_assert(offsetof(UTutorial_Master01_C, TT_______2) == 0x0006D1, "Member 'UTutorial_Master01_C::TT_______2' has a wrong offset!");
static_assert(offsetof(UTutorial_Master01_C, Uid) == 0x0006D4, "Member 'UTutorial_Master01_C::Uid' has a wrong offset!");
static_assert(offsetof(UTutorial_Master01_C, NewVar_0) == 0x0006D8, "Member 'UTutorial_Master01_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UTutorial_Master01_C, Fo_Sub_Type) == 0x0006E8, "Member 'UTutorial_Master01_C::Fo_Sub_Type' has a wrong offset!");

}
