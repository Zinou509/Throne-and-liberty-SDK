#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScreenMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ScreenMessage.BP_ScreenMessage_C
// 0x0090 (0x1540 - 0x14B0)
class UBP_ScreenMessage_C final : public UTLUserWidgetScreenMessage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ChatInvitation_ChatPos;                            // 0x14B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ChatInvitation_NormalPos;                          // 0x14C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Codex_Group;                                       // 0x14C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Collection_Memorial_Group;                         // 0x14D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Contracts_Group;                                   // 0x14D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         DE_WorldEffect;                                    // 0x14E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Etcs;                                              // 0x14E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Event_RotationEvent_Group;                         // 0x14F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         EventBattle;                                       // 0x14F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         EventBoss_Group;                                   // 0x1500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         EventSiege_Group;                                  // 0x1508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         GuildContract;                                     // 0x1510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Item_Skill_Group;                                  // 0x1518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         LevelTerriotory_Group;                             // 0x1520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         MagicDollExpedition;                               // 0x1528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         TLCanvasPanel_1;                                   // 0x1530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLInvalidationBox*                     TLInvalidationBox_0;                               // 0x1538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ScreenMessage(int32 EntryPoint);
	void ___t___0();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScreenMessage_C">();
	}
	static class UBP_ScreenMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ScreenMessage_C>();
	}
};
static_assert(alignof(UBP_ScreenMessage_C) == 0x000010, "Wrong alignment on UBP_ScreenMessage_C");
static_assert(sizeof(UBP_ScreenMessage_C) == 0x001540, "Wrong size on UBP_ScreenMessage_C");
static_assert(offsetof(UBP_ScreenMessage_C, UberGraphFrame) == 0x0014B0, "Member 'UBP_ScreenMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, ChatInvitation_ChatPos) == 0x0014B8, "Member 'UBP_ScreenMessage_C::ChatInvitation_ChatPos' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, ChatInvitation_NormalPos) == 0x0014C0, "Member 'UBP_ScreenMessage_C::ChatInvitation_NormalPos' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, Codex_Group) == 0x0014C8, "Member 'UBP_ScreenMessage_C::Codex_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, Collection_Memorial_Group) == 0x0014D0, "Member 'UBP_ScreenMessage_C::Collection_Memorial_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, Contracts_Group) == 0x0014D8, "Member 'UBP_ScreenMessage_C::Contracts_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, DE_WorldEffect) == 0x0014E0, "Member 'UBP_ScreenMessage_C::DE_WorldEffect' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, Etcs) == 0x0014E8, "Member 'UBP_ScreenMessage_C::Etcs' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, Event_RotationEvent_Group) == 0x0014F0, "Member 'UBP_ScreenMessage_C::Event_RotationEvent_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, EventBattle) == 0x0014F8, "Member 'UBP_ScreenMessage_C::EventBattle' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, EventBoss_Group) == 0x001500, "Member 'UBP_ScreenMessage_C::EventBoss_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, EventSiege_Group) == 0x001508, "Member 'UBP_ScreenMessage_C::EventSiege_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, GuildContract) == 0x001510, "Member 'UBP_ScreenMessage_C::GuildContract' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, Item_Skill_Group) == 0x001518, "Member 'UBP_ScreenMessage_C::Item_Skill_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, LevelTerriotory_Group) == 0x001520, "Member 'UBP_ScreenMessage_C::LevelTerriotory_Group' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, MagicDollExpedition) == 0x001528, "Member 'UBP_ScreenMessage_C::MagicDollExpedition' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, TLCanvasPanel_1) == 0x001530, "Member 'UBP_ScreenMessage_C::TLCanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UBP_ScreenMessage_C, TLInvalidationBox_0) == 0x001538, "Member 'UBP_ScreenMessage_C::TLInvalidationBox_0' has a wrong offset!");

}
