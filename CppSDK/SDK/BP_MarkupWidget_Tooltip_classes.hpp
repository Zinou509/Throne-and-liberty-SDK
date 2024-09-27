#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MarkupWidget_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_MarkupWidget_Tooltip.BP_MarkupWidget_Tooltip_C
// 0x0020 (0x0AC0 - 0x0AA0)
class UBP_MarkupWidget_Tooltip_C final : public UTLUserWidgetTextBlockWidgetTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               IMG_Emblem;                                        // 0x0AA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_60;                                        // 0x0AB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Tooltip;                                       // 0x0AB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MarkupWidget_Tooltip(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MarkupWidget_Tooltip_C">();
	}
	static class UBP_MarkupWidget_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MarkupWidget_Tooltip_C>();
	}
};
static_assert(alignof(UBP_MarkupWidget_Tooltip_C) == 0x000008, "Wrong alignment on UBP_MarkupWidget_Tooltip_C");
static_assert(sizeof(UBP_MarkupWidget_Tooltip_C) == 0x000AC0, "Wrong size on UBP_MarkupWidget_Tooltip_C");
static_assert(offsetof(UBP_MarkupWidget_Tooltip_C, UberGraphFrame) == 0x000AA0, "Member 'UBP_MarkupWidget_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MarkupWidget_Tooltip_C, IMG_Emblem) == 0x000AA8, "Member 'UBP_MarkupWidget_Tooltip_C::IMG_Emblem' has a wrong offset!");
static_assert(offsetof(UBP_MarkupWidget_Tooltip_C, TLImage_60) == 0x000AB0, "Member 'UBP_MarkupWidget_Tooltip_C::TLImage_60' has a wrong offset!");
static_assert(offsetof(UBP_MarkupWidget_Tooltip_C, TXT_Tooltip) == 0x000AB8, "Member 'UBP_MarkupWidget_Tooltip_C::TXT_Tooltip' has a wrong offset!");

}
