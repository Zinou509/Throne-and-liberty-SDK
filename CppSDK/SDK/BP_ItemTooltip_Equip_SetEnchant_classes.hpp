#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Equip_SetEnchant

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ItemTooltip_Equip_SetEnchant.BP_ItemTooltip_Equip_SetEnchant_C
// 0x0050 (0x0AF8 - 0x0AA8)
class UBP_ItemTooltip_Equip_SetEnchant_C final : public UTLUserWidgetTooltipItemTraitInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ItemTooltip_Equip_EnchantTrait_Stat_C* BP_ItemTooltip_Equip_EnchantTrait_Stat_0;          // 0x0AB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemTooltip_Equip_EnchantTrait_Stat_C* BP_ItemTooltip_Equip_EnchantTrait_Stat_1;          // 0x0AB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemTooltip_Equip_EnchantTrait_Stat_C* BP_ItemTooltip_Equip_EnchantTrait_Stat_2;          // 0x0AC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       EnchantBlessPoint;                                 // 0x0AC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLVerticalBox*                         TLVerticalBox_62;                                  // 0x0AD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_NAME;                                          // 0x0AD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Resonance_Value;                               // 0x0AE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_SETItem;                                       // 0x0AE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Stat;                                          // 0x0AF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ItemTooltip_Equip_SetEnchant(int32 EntryPoint);
	void OnTraitResonanceState(bool IsOpened);
	void PreConstruct(bool IsDesignTime);

	class UObject* GetListItemObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemTooltip_Equip_SetEnchant_C">();
	}
	static class UBP_ItemTooltip_Equip_SetEnchant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemTooltip_Equip_SetEnchant_C>();
	}
};
static_assert(alignof(UBP_ItemTooltip_Equip_SetEnchant_C) == 0x000008, "Wrong alignment on UBP_ItemTooltip_Equip_SetEnchant_C");
static_assert(sizeof(UBP_ItemTooltip_Equip_SetEnchant_C) == 0x000AF8, "Wrong size on UBP_ItemTooltip_Equip_SetEnchant_C");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, UberGraphFrame) == 0x000AA8, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, BP_ItemTooltip_Equip_EnchantTrait_Stat_0) == 0x000AB0, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::BP_ItemTooltip_Equip_EnchantTrait_Stat_0' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, BP_ItemTooltip_Equip_EnchantTrait_Stat_1) == 0x000AB8, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::BP_ItemTooltip_Equip_EnchantTrait_Stat_1' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, BP_ItemTooltip_Equip_EnchantTrait_Stat_2) == 0x000AC0, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::BP_ItemTooltip_Equip_EnchantTrait_Stat_2' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, EnchantBlessPoint) == 0x000AC8, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::EnchantBlessPoint' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, TLVerticalBox_62) == 0x000AD0, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::TLVerticalBox_62' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, TXT_NAME) == 0x000AD8, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::TXT_NAME' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, TXT_Resonance_Value) == 0x000AE0, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::TXT_Resonance_Value' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, TXT_SETItem) == 0x000AE8, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::TXT_SETItem' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_SetEnchant_C, TXT_Stat) == 0x000AF0, "Member 'UBP_ItemTooltip_Equip_SetEnchant_C::TXT_Stat' has a wrong offset!");

}
