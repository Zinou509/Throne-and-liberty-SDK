#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CursorFX_Widget

#include "Basic.hpp"

#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CursorFX_Widget.BP_CursorFX_Widget_C
// 0x0030 (0x1460 - 0x1430)
class UBP_CursorFX_Widget_C final : public UTLUserWidgetFrame
{
public:
	uint8                                         Pad_1428[0x8];                                     // 0x1428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       CursorFXAnim_Weakly;                               // 0x1430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CursorFXAnim_Strongly;                             // 0x1438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               CircleLineFX;                                      // 0x1440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               CursorDustFX;                                      // 0x1448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               GlowParticularFX;                                  // 0x1450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CursorFX_Widget_C">();
	}
	static class UBP_CursorFX_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CursorFX_Widget_C>();
	}
};
static_assert(alignof(UBP_CursorFX_Widget_C) == 0x000010, "Wrong alignment on UBP_CursorFX_Widget_C");
static_assert(sizeof(UBP_CursorFX_Widget_C) == 0x001460, "Wrong size on UBP_CursorFX_Widget_C");
static_assert(offsetof(UBP_CursorFX_Widget_C, CursorFXAnim_Weakly) == 0x001430, "Member 'UBP_CursorFX_Widget_C::CursorFXAnim_Weakly' has a wrong offset!");
static_assert(offsetof(UBP_CursorFX_Widget_C, CursorFXAnim_Strongly) == 0x001438, "Member 'UBP_CursorFX_Widget_C::CursorFXAnim_Strongly' has a wrong offset!");
static_assert(offsetof(UBP_CursorFX_Widget_C, CircleLineFX) == 0x001440, "Member 'UBP_CursorFX_Widget_C::CircleLineFX' has a wrong offset!");
static_assert(offsetof(UBP_CursorFX_Widget_C, CursorDustFX) == 0x001448, "Member 'UBP_CursorFX_Widget_C::CursorDustFX' has a wrong offset!");
static_assert(offsetof(UBP_CursorFX_Widget_C, GlowParticularFX) == 0x001450, "Member 'UBP_CursorFX_Widget_C::GlowParticularFX' has a wrong offset!");

}
