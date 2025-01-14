#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeDungeon_BossIcon_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ChallengeDungeon_BossIcon_Tooltip.BP_ChallengeDungeon_BossIcon_Tooltip_C
// 0x0040 (0x0AE8 - 0x0AA8)
class UBP_ChallengeDungeon_BossIcon_Tooltip_C final : public UTLUserWidgetChallengePartyDungeonSlotTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               IMG_Icon;                                          // 0x0AB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       TAG_Mileage;                                       // 0x0AB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       TAG_Mileage_1;                                     // 0x0AC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_TOOLTIP_INNERLINE;                             // 0x0AC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TLTextBlock_1;                                     // 0x0AD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TLTextBlock_3;                                     // 0x0AD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_NAME;                                          // 0x0AE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ChallengeDungeon_BossIcon_Tooltip(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeDungeon_BossIcon_Tooltip_C">();
	}
	static class UBP_ChallengeDungeon_BossIcon_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChallengeDungeon_BossIcon_Tooltip_C>();
	}
};
static_assert(alignof(UBP_ChallengeDungeon_BossIcon_Tooltip_C) == 0x000008, "Wrong alignment on UBP_ChallengeDungeon_BossIcon_Tooltip_C");
static_assert(sizeof(UBP_ChallengeDungeon_BossIcon_Tooltip_C) == 0x000AE8, "Wrong size on UBP_ChallengeDungeon_BossIcon_Tooltip_C");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, UberGraphFrame) == 0x000AA8, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, IMG_Icon) == 0x000AB0, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::IMG_Icon' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, TAG_Mileage) == 0x000AB8, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::TAG_Mileage' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, TAG_Mileage_1) == 0x000AC0, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::TAG_Mileage_1' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, TEX_TOOLTIP_INNERLINE) == 0x000AC8, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::TEX_TOOLTIP_INNERLINE' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, TLTextBlock_1) == 0x000AD0, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::TLTextBlock_1' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, TLTextBlock_3) == 0x000AD8, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::TLTextBlock_3' has a wrong offset!");
static_assert(offsetof(UBP_ChallengeDungeon_BossIcon_Tooltip_C, TXT_NAME) == 0x000AE0, "Member 'UBP_ChallengeDungeon_BossIcon_Tooltip_C::TXT_NAME' has a wrong offset!");

}

