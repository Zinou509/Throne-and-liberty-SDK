#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tem_Icon_BTN

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Tem_Icon_BTN.BP_Tem_Icon_BTN_C
// 0x0030 (0x0DE0 - 0x0DB0)
class UBP_Tem_Icon_BTN_C final : public UTLUserWidgetButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0DB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Release;                                           // 0x0DB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x0DC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Unhover;                                           // 0x0DC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0DD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               Glow;                                              // 0x0DD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Tem_Icon_BTN(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tem_Icon_BTN_C">();
	}
	static class UBP_Tem_Icon_BTN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Tem_Icon_BTN_C>();
	}
};
static_assert(alignof(UBP_Tem_Icon_BTN_C) == 0x000008, "Wrong alignment on UBP_Tem_Icon_BTN_C");
static_assert(sizeof(UBP_Tem_Icon_BTN_C) == 0x000DE0, "Wrong size on UBP_Tem_Icon_BTN_C");
static_assert(offsetof(UBP_Tem_Icon_BTN_C, UberGraphFrame) == 0x000DB0, "Member 'UBP_Tem_Icon_BTN_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Tem_Icon_BTN_C, Release) == 0x000DB8, "Member 'UBP_Tem_Icon_BTN_C::Release' has a wrong offset!");
static_assert(offsetof(UBP_Tem_Icon_BTN_C, Press) == 0x000DC0, "Member 'UBP_Tem_Icon_BTN_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_Tem_Icon_BTN_C, Unhover) == 0x000DC8, "Member 'UBP_Tem_Icon_BTN_C::Unhover' has a wrong offset!");
static_assert(offsetof(UBP_Tem_Icon_BTN_C, Hover) == 0x000DD0, "Member 'UBP_Tem_Icon_BTN_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_Tem_Icon_BTN_C, Glow) == 0x000DD8, "Member 'UBP_Tem_Icon_BTN_C::Glow' has a wrong offset!");

}

