#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TooltipAttach_ActionGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_TooltipAttach_ActionGuide.BP_TooltipAttach_ActionGuide_C
// 0x0010 (0x0AA8 - 0x0A98)
class UBP_TooltipAttach_ActionGuide_C final : public UTLUserWidgetActionGuideTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Tem_KeyGuideGroup_Type2_C*          BP_Tem_KeyGuideGroup_Type2;                        // 0x0AA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TooltipAttach_ActionGuide(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TooltipAttach_ActionGuide_C">();
	}
	static class UBP_TooltipAttach_ActionGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TooltipAttach_ActionGuide_C>();
	}
};
static_assert(alignof(UBP_TooltipAttach_ActionGuide_C) == 0x000008, "Wrong alignment on UBP_TooltipAttach_ActionGuide_C");
static_assert(sizeof(UBP_TooltipAttach_ActionGuide_C) == 0x000AA8, "Wrong size on UBP_TooltipAttach_ActionGuide_C");
static_assert(offsetof(UBP_TooltipAttach_ActionGuide_C, UberGraphFrame) == 0x000A98, "Member 'UBP_TooltipAttach_ActionGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TooltipAttach_ActionGuide_C, BP_Tem_KeyGuideGroup_Type2) == 0x000AA0, "Member 'UBP_TooltipAttach_ActionGuide_C::BP_Tem_KeyGuideGroup_Type2' has a wrong offset!");

}
