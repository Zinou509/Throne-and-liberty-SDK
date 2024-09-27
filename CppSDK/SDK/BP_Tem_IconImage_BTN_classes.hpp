#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tem_IconImage_BTN

#include "Basic.hpp"

#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Tem_IconImage_BTN.BP_Tem_IconImage_BTN_C
// 0x0028 (0x0DD8 - 0x0DB0)
class UBP_Tem_IconImage_BTN_C final : public UTLUserWidgetButton
{
public:
	class UWidgetAnimation*                       Release;                                           // 0x0DB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x0DB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Unhover;                                           // 0x0DC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0DC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLOverlay*                             TLOverlay_0;                                       // 0x0DD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tem_IconImage_BTN_C">();
	}
	static class UBP_Tem_IconImage_BTN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Tem_IconImage_BTN_C>();
	}
};
static_assert(alignof(UBP_Tem_IconImage_BTN_C) == 0x000008, "Wrong alignment on UBP_Tem_IconImage_BTN_C");
static_assert(sizeof(UBP_Tem_IconImage_BTN_C) == 0x000DD8, "Wrong size on UBP_Tem_IconImage_BTN_C");
static_assert(offsetof(UBP_Tem_IconImage_BTN_C, Release) == 0x000DB0, "Member 'UBP_Tem_IconImage_BTN_C::Release' has a wrong offset!");
static_assert(offsetof(UBP_Tem_IconImage_BTN_C, Press) == 0x000DB8, "Member 'UBP_Tem_IconImage_BTN_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_Tem_IconImage_BTN_C, Unhover) == 0x000DC0, "Member 'UBP_Tem_IconImage_BTN_C::Unhover' has a wrong offset!");
static_assert(offsetof(UBP_Tem_IconImage_BTN_C, Hover) == 0x000DC8, "Member 'UBP_Tem_IconImage_BTN_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_Tem_IconImage_BTN_C, TLOverlay_0) == 0x000DD0, "Member 'UBP_Tem_IconImage_BTN_C::TLOverlay_0' has a wrong offset!");

}
