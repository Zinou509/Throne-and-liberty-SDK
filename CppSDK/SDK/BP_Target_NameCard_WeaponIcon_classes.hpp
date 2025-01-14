#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_WeaponIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Target_NameCard_WeaponIcon.BP_Target_NameCard_WeaponIcon_C
// 0x0030 (0x12F8 - 0x12C8)
class UBP_Target_NameCard_WeaponIcon_C final : public UTLUserWidgetCharacterCardWeaponInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x12C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               Text_Background;                                   // 0x12D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Text_WeaponCombination;                            // 0x12D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Weapon_Icon_Background;                            // 0x12E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Weapon_Set01;                                      // 0x12E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Weapon_Set02;                                      // 0x12F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Target_NameCard_WeaponIcon(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Target_NameCard_WeaponIcon_C">();
	}
	static class UBP_Target_NameCard_WeaponIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Target_NameCard_WeaponIcon_C>();
	}
};
static_assert(alignof(UBP_Target_NameCard_WeaponIcon_C) == 0x000008, "Wrong alignment on UBP_Target_NameCard_WeaponIcon_C");
static_assert(sizeof(UBP_Target_NameCard_WeaponIcon_C) == 0x0012F8, "Wrong size on UBP_Target_NameCard_WeaponIcon_C");
static_assert(offsetof(UBP_Target_NameCard_WeaponIcon_C, UberGraphFrame) == 0x0012C8, "Member 'UBP_Target_NameCard_WeaponIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_WeaponIcon_C, Text_Background) == 0x0012D0, "Member 'UBP_Target_NameCard_WeaponIcon_C::Text_Background' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_WeaponIcon_C, Text_WeaponCombination) == 0x0012D8, "Member 'UBP_Target_NameCard_WeaponIcon_C::Text_WeaponCombination' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_WeaponIcon_C, Weapon_Icon_Background) == 0x0012E0, "Member 'UBP_Target_NameCard_WeaponIcon_C::Weapon_Icon_Background' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_WeaponIcon_C, Weapon_Set01) == 0x0012E8, "Member 'UBP_Target_NameCard_WeaponIcon_C::Weapon_Set01' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_WeaponIcon_C, Weapon_Set02) == 0x0012F0, "Member 'UBP_Target_NameCard_WeaponIcon_C::Weapon_Set02' has a wrong offset!");

}

