#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Minimap_ContentsItem_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Minimap_ContentsItem_Tooltip.BP_Minimap_ContentsItem_Tooltip_C
// 0x0028 (0x0AD8 - 0x0AB0)
class UBP_Minimap_ContentsItem_Tooltip_C final : public UTLUserWidgetTooltipContentsItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               ContentsMarker;                                    // 0x0AB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Decription;                                    // 0x0AC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Decription_1;                                  // 0x0AC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperSprite*                           GradeSprite;                                       // 0x0AD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Minimap_ContentsItem_Tooltip(int32 EntryPoint);
	void ___t___0();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Minimap_ContentsItem_Tooltip_C">();
	}
	static class UBP_Minimap_ContentsItem_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Minimap_ContentsItem_Tooltip_C>();
	}
};
static_assert(alignof(UBP_Minimap_ContentsItem_Tooltip_C) == 0x000008, "Wrong alignment on UBP_Minimap_ContentsItem_Tooltip_C");
static_assert(sizeof(UBP_Minimap_ContentsItem_Tooltip_C) == 0x000AD8, "Wrong size on UBP_Minimap_ContentsItem_Tooltip_C");
static_assert(offsetof(UBP_Minimap_ContentsItem_Tooltip_C, UberGraphFrame) == 0x000AB0, "Member 'UBP_Minimap_ContentsItem_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_ContentsItem_Tooltip_C, ContentsMarker) == 0x000AB8, "Member 'UBP_Minimap_ContentsItem_Tooltip_C::ContentsMarker' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_ContentsItem_Tooltip_C, TXT_Decription) == 0x000AC0, "Member 'UBP_Minimap_ContentsItem_Tooltip_C::TXT_Decription' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_ContentsItem_Tooltip_C, TXT_Decription_1) == 0x000AC8, "Member 'UBP_Minimap_ContentsItem_Tooltip_C::TXT_Decription_1' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_ContentsItem_Tooltip_C, GradeSprite) == 0x000AD0, "Member 'UBP_Minimap_ContentsItem_Tooltip_C::GradeSprite' has a wrong offset!");

}

