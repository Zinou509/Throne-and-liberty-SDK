#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DamageFloaterGroup_Defence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DamageFloaterGroup_Defence.BP_DamageFloaterGroup_Defence_C
// 0x0090 (0x0D98 - 0x0D08)
class UBP_DamageFloaterGroup_Defence_C final : public UTLUserWidgetFloater
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Defence_Perfect;                                   // 0x0D10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Defence_Heavy;                                     // 0x0D18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Defence_Normal;                                    // 0x0D20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               DamF_RadialGlow;                                   // 0x0D28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               IconAbnormal;                                      // 0x0D30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               IconSector;                                        // 0x0D38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               LightLine_1;                                       // 0x0D40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Pos_Panel;                                         // 0x0D48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Ptc_critical;                                      // 0x0D50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Rot_Panel;                                         // 0x0D58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Shake_Panel;                                       // 0x0D60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLScaleBox*                            TLScaleBox_Num;                                    // 0x0D68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Txt_DamageNum;                                     // 0x0D70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Txt_DamageType;                                    // 0x0D78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Txt_DamageType_Wave;                               // 0x0D80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSoftObjectPath>                Path_Defence_TextStyleSet;                         // 0x0D88(0x0010)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BP_DamageFloaterGroup_Defence(int32 EntryPoint);
	void OnEmit(bool bInPrimeSkill, EHpAbnormalStatus AbnormalStatus, bool bInSuccessByAccuracy, EFloaterCategory FloaterCategory, bool IsMyPc);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DamageFloaterGroup_Defence_C">();
	}
	static class UBP_DamageFloaterGroup_Defence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DamageFloaterGroup_Defence_C>();
	}
};
static_assert(alignof(UBP_DamageFloaterGroup_Defence_C) == 0x000008, "Wrong alignment on UBP_DamageFloaterGroup_Defence_C");
static_assert(sizeof(UBP_DamageFloaterGroup_Defence_C) == 0x000D98, "Wrong size on UBP_DamageFloaterGroup_Defence_C");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, UberGraphFrame) == 0x000D08, "Member 'UBP_DamageFloaterGroup_Defence_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Defence_Perfect) == 0x000D10, "Member 'UBP_DamageFloaterGroup_Defence_C::Defence_Perfect' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Defence_Heavy) == 0x000D18, "Member 'UBP_DamageFloaterGroup_Defence_C::Defence_Heavy' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Defence_Normal) == 0x000D20, "Member 'UBP_DamageFloaterGroup_Defence_C::Defence_Normal' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, DamF_RadialGlow) == 0x000D28, "Member 'UBP_DamageFloaterGroup_Defence_C::DamF_RadialGlow' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, IconAbnormal) == 0x000D30, "Member 'UBP_DamageFloaterGroup_Defence_C::IconAbnormal' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, IconSector) == 0x000D38, "Member 'UBP_DamageFloaterGroup_Defence_C::IconSector' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, LightLine_1) == 0x000D40, "Member 'UBP_DamageFloaterGroup_Defence_C::LightLine_1' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Pos_Panel) == 0x000D48, "Member 'UBP_DamageFloaterGroup_Defence_C::Pos_Panel' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Ptc_critical) == 0x000D50, "Member 'UBP_DamageFloaterGroup_Defence_C::Ptc_critical' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Rot_Panel) == 0x000D58, "Member 'UBP_DamageFloaterGroup_Defence_C::Rot_Panel' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Shake_Panel) == 0x000D60, "Member 'UBP_DamageFloaterGroup_Defence_C::Shake_Panel' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, TLScaleBox_Num) == 0x000D68, "Member 'UBP_DamageFloaterGroup_Defence_C::TLScaleBox_Num' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Txt_DamageNum) == 0x000D70, "Member 'UBP_DamageFloaterGroup_Defence_C::Txt_DamageNum' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Txt_DamageType) == 0x000D78, "Member 'UBP_DamageFloaterGroup_Defence_C::Txt_DamageType' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Txt_DamageType_Wave) == 0x000D80, "Member 'UBP_DamageFloaterGroup_Defence_C::Txt_DamageType_Wave' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Defence_C, Path_Defence_TextStyleSet) == 0x000D88, "Member 'UBP_DamageFloaterGroup_Defence_C::Path_Defence_TextStyleSet' has a wrong offset!");

}

