#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tutorial_Onboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLScheme_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tutorial_Onboard.Tutorial_Onboard_C
// 0x0030 (0x06F0 - 0x06C0)
class UTutorial_Onboard_C final : public UTLTutorialConditionObject
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
	void ExecuteUbergraph_Tutorial_Onboard(int32 EntryPoint);
	void ___t___10();
	void ___t___4();
	void ___t___2(class FName Guid);
	void OnEventCharacterStatFocusConsole_Event_0();
	void ___t___9();
	void ___t___8();
	void OnEventClosePopupWindow_Event_2(class FName PopupWidgetName);
	void OnCreate();
	void OnActivateByID(class FName InTutorialId);
	void OnEventEnchantItemReady_Event_0();
	void OnEventLevelUp_Event_0(int32 Level);
	void ___t___7();
	void CustomEvent(class FName PopupWidgetName);
	void ___t___6(class FName Guid);
	void ___t___5();
	void ___t___0();
	void ___t___3();
	void ___t___1(bool InStatUp);
	void OnEventOpenPopupWindow_Event_1(class FName PopupWidgetName);
	void OnEventCompleteTutorial_Event_0(class FName TutorialTableId, bool bSkip);
	void OnEventAcquireItem_Event_0(EItemType ItemType, int32 ItemNum, EItemCategory ItemCategory, EItemGrade ItemGrade, class FName GroupID);
	void OnEventEnchantTransferMaterialReady_Event_0();
	void OnEventTradeSaleOpen_Event_0();
	void OnEventEnchantTraitOpen_Event_0();
	void OnEventEnchantTransferItemSet_Event_0();
	void OnEventEnchantTransferOpen_Event_0();
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
		return StaticBPGeneratedClassImpl<"Tutorial_Onboard_C">();
	}
	static class UTutorial_Onboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorial_Onboard_C>();
	}
};
static_assert(alignof(UTutorial_Onboard_C) == 0x000008, "Wrong alignment on UTutorial_Onboard_C");
static_assert(sizeof(UTutorial_Onboard_C) == 0x0006F0, "Wrong size on UTutorial_Onboard_C");
static_assert(offsetof(UTutorial_Onboard_C, UberGraphFrame) == 0x0006C0, "Member 'UTutorial_Onboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorial_Onboard_C, ______x_____) == 0x0006C8, "Member 'UTutorial_Onboard_C::______x_____' has a wrong offset!");
static_assert(offsetof(UTutorial_Onboard_C, TT_______1) == 0x0006D0, "Member 'UTutorial_Onboard_C::TT_______1' has a wrong offset!");
static_assert(offsetof(UTutorial_Onboard_C, TT_______2) == 0x0006D1, "Member 'UTutorial_Onboard_C::TT_______2' has a wrong offset!");
static_assert(offsetof(UTutorial_Onboard_C, Uid) == 0x0006D4, "Member 'UTutorial_Onboard_C::Uid' has a wrong offset!");
static_assert(offsetof(UTutorial_Onboard_C, NewVar_0) == 0x0006D8, "Member 'UTutorial_Onboard_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UTutorial_Onboard_C, Fo_Sub_Type) == 0x0006E8, "Member 'UTutorial_Onboard_C::Fo_Sub_Type' has a wrong offset!");

}

