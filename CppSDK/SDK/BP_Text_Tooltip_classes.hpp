#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Text_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Text_Tooltip.BP_Text_Tooltip_C
// 0x0048 (0x0B70 - 0x0B28)
class UBP_Text_Tooltip_C final : public UTLUserWidgetTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLSizeBox*                             ActionGuideBox;                                    // 0x0B30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipPanel_Bg_C*                  BP_TooltipPanel_Bg;                                // 0x0B38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipPanel_TEXT_Bg_C*             BP_TooltipPanel_TEXT_Bg;                           // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImageIcon;                                       // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Decription;                                    // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Title;                                         // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Title_StatNum;                                 // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Decription_0;                                  // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Text_Tooltip(int32 EntryPoint);
	void Construct();
	void ___t___0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Text_Tooltip_C">();
	}
	static class UBP_Text_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Text_Tooltip_C>();
	}
};
static_assert(alignof(UBP_Text_Tooltip_C) == 0x000008, "Wrong alignment on UBP_Text_Tooltip_C");
static_assert(sizeof(UBP_Text_Tooltip_C) == 0x000B70, "Wrong size on UBP_Text_Tooltip_C");
static_assert(offsetof(UBP_Text_Tooltip_C, UberGraphFrame) == 0x000B28, "Member 'UBP_Text_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, ActionGuideBox) == 0x000B30, "Member 'UBP_Text_Tooltip_C::ActionGuideBox' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, BP_TooltipPanel_Bg) == 0x000B38, "Member 'UBP_Text_Tooltip_C::BP_TooltipPanel_Bg' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, BP_TooltipPanel_TEXT_Bg) == 0x000B40, "Member 'UBP_Text_Tooltip_C::BP_TooltipPanel_TEXT_Bg' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, TLImageIcon) == 0x000B48, "Member 'UBP_Text_Tooltip_C::TLImageIcon' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, TXT_Decription) == 0x000B50, "Member 'UBP_Text_Tooltip_C::TXT_Decription' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, TXT_Title) == 0x000B58, "Member 'UBP_Text_Tooltip_C::TXT_Title' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, TXT_Title_StatNum) == 0x000B60, "Member 'UBP_Text_Tooltip_C::TXT_Title_StatNum' has a wrong offset!");
static_assert(offsetof(UBP_Text_Tooltip_C, TXT_Decription_0) == 0x000B68, "Member 'UBP_Text_Tooltip_C::TXT_Decription_0' has a wrong offset!");

}
