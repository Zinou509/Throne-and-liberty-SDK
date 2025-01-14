#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContentsMark_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ContentsMark_Widget.BP_ContentsMark_Widget_C
// 0x0020 (0x0AE8 - 0x0AC8)
class UBP_ContentsMark_Widget_C final : public UTLUserWidgetCodexWorldPositionIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               Tex_ConAlarm_ICO_MakerL_Codex_N;                   // 0x0AD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_Marker_Fx;                                 // 0x0AD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Marker_Distance;                               // 0x0AE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ContentsMark_Widget(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ContentsMark_Widget_C">();
	}
	static class UBP_ContentsMark_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ContentsMark_Widget_C>();
	}
};
static_assert(alignof(UBP_ContentsMark_Widget_C) == 0x000008, "Wrong alignment on UBP_ContentsMark_Widget_C");
static_assert(sizeof(UBP_ContentsMark_Widget_C) == 0x000AE8, "Wrong size on UBP_ContentsMark_Widget_C");
static_assert(offsetof(UBP_ContentsMark_Widget_C, UberGraphFrame) == 0x000AC8, "Member 'UBP_ContentsMark_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ContentsMark_Widget_C, Tex_ConAlarm_ICO_MakerL_Codex_N) == 0x000AD0, "Member 'UBP_ContentsMark_Widget_C::Tex_ConAlarm_ICO_MakerL_Codex_N' has a wrong offset!");
static_assert(offsetof(UBP_ContentsMark_Widget_C, TLImage_Marker_Fx) == 0x000AD8, "Member 'UBP_ContentsMark_Widget_C::TLImage_Marker_Fx' has a wrong offset!");
static_assert(offsetof(UBP_ContentsMark_Widget_C, TXT_Marker_Distance) == 0x000AE0, "Member 'UBP_ContentsMark_Widget_C::TXT_Marker_Distance' has a wrong offset!");

}

