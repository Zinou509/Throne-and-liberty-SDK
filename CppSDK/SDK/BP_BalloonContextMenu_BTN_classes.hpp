#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BalloonContextMenu_BTN

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BalloonContextMenu_BTN.BP_BalloonContextMenu_BTN_C
// 0x0578 (0x1640 - 0x10C8)
class UBP_BalloonContextMenu_BTN_C final : public UTLUserWidgetContextMenuBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x10D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x10D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BTNUncheck;                                        // 0x10E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BTNCheck;                                          // 0x10E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_SpeechMenu_Desire_C*                BP_SpeechMenu_Desire;                              // 0x10F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SpeechMenu_SecondActionIcon_C*      BP_SpeechMenu_SecondActionIcon;                    // 0x10F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLSpacer*                              ConsoleKey_Margin;                                 // 0x1100(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                         LongPressBar;                                      // 0x1108(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Mark_Icon;                                         // 0x1110(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Tex_InteractionScene_Menu_Fx;                      // 0x1118(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Tex_InteractionScene_Menu_Mark;                    // 0x1120(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       TLHorizontalBox_1;                                 // 0x1128(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                           In_Style_Check;                                    // 0x1130(0x0278)(Edit, BlueprintVisible)
	struct FButtonStyle                           In_Style_Normal;                                   // 0x13A8(0x0278)(Edit, BlueprintVisible)
	struct FMargin                                In_Offset_Console;                                 // 0x1620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                In_Offset_PC;                                      // 0x1630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BalloonContextMenu_BTN(int32 EntryPoint);
	void Normal_BTN_Setting();
	void Check_BTN_Setting();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTBP_BalloonContextMenu_BTN_0();
	void SequenceEvent__ENTRYPOINTBP_BalloonContextMenu_BTN_1();
	void SequenceEvent__ENTRYPOINTBP_BalloonContextMenu_BTN_2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BalloonContextMenu_BTN_C">();
	}
	static class UBP_BalloonContextMenu_BTN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BalloonContextMenu_BTN_C>();
	}
};
static_assert(alignof(UBP_BalloonContextMenu_BTN_C) == 0x000008, "Wrong alignment on UBP_BalloonContextMenu_BTN_C");
static_assert(sizeof(UBP_BalloonContextMenu_BTN_C) == 0x001640, "Wrong size on UBP_BalloonContextMenu_BTN_C");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, UberGraphFrame) == 0x0010C8, "Member 'UBP_BalloonContextMenu_BTN_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, ShowAnim) == 0x0010D0, "Member 'UBP_BalloonContextMenu_BTN_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, Press) == 0x0010D8, "Member 'UBP_BalloonContextMenu_BTN_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, BTNUncheck) == 0x0010E0, "Member 'UBP_BalloonContextMenu_BTN_C::BTNUncheck' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, BTNCheck) == 0x0010E8, "Member 'UBP_BalloonContextMenu_BTN_C::BTNCheck' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, BP_SpeechMenu_Desire) == 0x0010F0, "Member 'UBP_BalloonContextMenu_BTN_C::BP_SpeechMenu_Desire' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, BP_SpeechMenu_SecondActionIcon) == 0x0010F8, "Member 'UBP_BalloonContextMenu_BTN_C::BP_SpeechMenu_SecondActionIcon' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, ConsoleKey_Margin) == 0x001100, "Member 'UBP_BalloonContextMenu_BTN_C::ConsoleKey_Margin' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, LongPressBar) == 0x001108, "Member 'UBP_BalloonContextMenu_BTN_C::LongPressBar' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, Mark_Icon) == 0x001110, "Member 'UBP_BalloonContextMenu_BTN_C::Mark_Icon' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, Tex_InteractionScene_Menu_Fx) == 0x001118, "Member 'UBP_BalloonContextMenu_BTN_C::Tex_InteractionScene_Menu_Fx' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, Tex_InteractionScene_Menu_Mark) == 0x001120, "Member 'UBP_BalloonContextMenu_BTN_C::Tex_InteractionScene_Menu_Mark' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, TLHorizontalBox_1) == 0x001128, "Member 'UBP_BalloonContextMenu_BTN_C::TLHorizontalBox_1' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, In_Style_Check) == 0x001130, "Member 'UBP_BalloonContextMenu_BTN_C::In_Style_Check' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, In_Style_Normal) == 0x0013A8, "Member 'UBP_BalloonContextMenu_BTN_C::In_Style_Normal' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, In_Offset_Console) == 0x001620, "Member 'UBP_BalloonContextMenu_BTN_C::In_Offset_Console' has a wrong offset!");
static_assert(offsetof(UBP_BalloonContextMenu_BTN_C, In_Offset_PC) == 0x001630, "Member 'UBP_BalloonContextMenu_BTN_C::In_Offset_PC' has a wrong offset!");

}
