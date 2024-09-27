#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tem_KeyGuide_Tooltip_BTN

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Tem_KeyGuide_Tooltip_BTN.BP_Tem_KeyGuide_Tooltip_BTN_C
// 0x0020 (0x0F20 - 0x0F00)
class UBP_Tem_KeyGuide_Tooltip_BTN_C final : public UTLUserWidgetActionGuideButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Release;                                           // 0x0F08(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x0F10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible_Line;                                      // 0x0F18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Tem_KeyGuide_Tooltip_BTN(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tem_KeyGuide_Tooltip_BTN_C">();
	}
	static class UBP_Tem_KeyGuide_Tooltip_BTN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Tem_KeyGuide_Tooltip_BTN_C>();
	}
};
static_assert(alignof(UBP_Tem_KeyGuide_Tooltip_BTN_C) == 0x000008, "Wrong alignment on UBP_Tem_KeyGuide_Tooltip_BTN_C");
static_assert(sizeof(UBP_Tem_KeyGuide_Tooltip_BTN_C) == 0x000F20, "Wrong size on UBP_Tem_KeyGuide_Tooltip_BTN_C");
static_assert(offsetof(UBP_Tem_KeyGuide_Tooltip_BTN_C, UberGraphFrame) == 0x000F00, "Member 'UBP_Tem_KeyGuide_Tooltip_BTN_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Tem_KeyGuide_Tooltip_BTN_C, Release) == 0x000F08, "Member 'UBP_Tem_KeyGuide_Tooltip_BTN_C::Release' has a wrong offset!");
static_assert(offsetof(UBP_Tem_KeyGuide_Tooltip_BTN_C, Press) == 0x000F10, "Member 'UBP_Tem_KeyGuide_Tooltip_BTN_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_Tem_KeyGuide_Tooltip_BTN_C, Visible_Line) == 0x000F18, "Member 'UBP_Tem_KeyGuide_Tooltip_BTN_C::Visible_Line' has a wrong offset!");

}
