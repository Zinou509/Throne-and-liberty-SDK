#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_LatestVolume_State

#include "Basic.hpp"

#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ItemTooltip_LatestVolume_State.BP_ItemTooltip_LatestVolume_State_C
// 0x0010 (0x1440 - 0x1430)
class UBP_ItemTooltip_LatestVolume_State_C final : public UTLUserWidgetFrame
{
public:
	uint8                                         Pad_1428[0x8];                                     // 0x1428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UTLTextBlock*                           Name_0;                                            // 0x1430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Value;                                             // 0x1438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemTooltip_LatestVolume_State_C">();
	}
	static class UBP_ItemTooltip_LatestVolume_State_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemTooltip_LatestVolume_State_C>();
	}
};
static_assert(alignof(UBP_ItemTooltip_LatestVolume_State_C) == 0x000010, "Wrong alignment on UBP_ItemTooltip_LatestVolume_State_C");
static_assert(sizeof(UBP_ItemTooltip_LatestVolume_State_C) == 0x001440, "Wrong size on UBP_ItemTooltip_LatestVolume_State_C");
static_assert(offsetof(UBP_ItemTooltip_LatestVolume_State_C, Name_0) == 0x001430, "Member 'UBP_ItemTooltip_LatestVolume_State_C::Name_0' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_LatestVolume_State_C, Value) == 0x001438, "Member 'UBP_ItemTooltip_LatestVolume_State_C::Value' has a wrong offset!");

}

