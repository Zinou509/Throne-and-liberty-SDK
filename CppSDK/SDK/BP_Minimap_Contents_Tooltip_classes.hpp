#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Minimap_Contents_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Minimap_Contents_Tooltip.BP_Minimap_Contents_Tooltip_C
// 0x0020 (0x0B98 - 0x0B78)
class UBP_Minimap_Contents_Tooltip_C final : public UTLUserWidgetTooltipContents
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MinimapBP_Minimap_Contents_Category_Text_C* BP_MinimapBP_Minimap_Contents_Category_Text;       // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipPanel_Bg_C*                  BP_TooltipPanel_Bg;                                // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLDynamicEntryBox*                     TLDynamicEntryBox_84;                              // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Minimap_Contents_Tooltip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Minimap_Contents_Tooltip_C">();
	}
	static class UBP_Minimap_Contents_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Minimap_Contents_Tooltip_C>();
	}
};
static_assert(alignof(UBP_Minimap_Contents_Tooltip_C) == 0x000008, "Wrong alignment on UBP_Minimap_Contents_Tooltip_C");
static_assert(sizeof(UBP_Minimap_Contents_Tooltip_C) == 0x000B98, "Wrong size on UBP_Minimap_Contents_Tooltip_C");
static_assert(offsetof(UBP_Minimap_Contents_Tooltip_C, UberGraphFrame) == 0x000B78, "Member 'UBP_Minimap_Contents_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_Contents_Tooltip_C, BP_MinimapBP_Minimap_Contents_Category_Text) == 0x000B80, "Member 'UBP_Minimap_Contents_Tooltip_C::BP_MinimapBP_Minimap_Contents_Category_Text' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_Contents_Tooltip_C, BP_TooltipPanel_Bg) == 0x000B88, "Member 'UBP_Minimap_Contents_Tooltip_C::BP_TooltipPanel_Bg' has a wrong offset!");
static_assert(offsetof(UBP_Minimap_Contents_Tooltip_C, TLDynamicEntryBox_84) == 0x000B90, "Member 'UBP_Minimap_Contents_Tooltip_C::TLDynamicEntryBox_84' has a wrong offset!");

}

