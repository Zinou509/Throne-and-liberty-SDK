#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CostumeSystem_Icons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CostumeSystem_Icons.BP_CostumeSystem_Icons_C
// 0x0018 (0x0AA0 - 0x0A88)
class UBP_CostumeSystem_Icons_C final : public UTLUserWidgetArmorCostumeTooltipCustomizeSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               Frame;                                             // 0x0A90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Icon;                                              // 0x0A98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CostumeSystem_Icons(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CostumeSystem_Icons_C">();
	}
	static class UBP_CostumeSystem_Icons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CostumeSystem_Icons_C>();
	}
};
static_assert(alignof(UBP_CostumeSystem_Icons_C) == 0x000008, "Wrong alignment on UBP_CostumeSystem_Icons_C");
static_assert(sizeof(UBP_CostumeSystem_Icons_C) == 0x000AA0, "Wrong size on UBP_CostumeSystem_Icons_C");
static_assert(offsetof(UBP_CostumeSystem_Icons_C, UberGraphFrame) == 0x000A88, "Member 'UBP_CostumeSystem_Icons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CostumeSystem_Icons_C, Frame) == 0x000A90, "Member 'UBP_CostumeSystem_Icons_C::Frame' has a wrong offset!");
static_assert(offsetof(UBP_CostumeSystem_Icons_C, Icon) == 0x000A98, "Member 'UBP_CostumeSystem_Icons_C::Icon' has a wrong offset!");

}
