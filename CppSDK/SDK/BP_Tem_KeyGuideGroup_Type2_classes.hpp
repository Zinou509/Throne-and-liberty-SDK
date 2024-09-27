#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tem_KeyGuideGroup_Type2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Tem_KeyGuideGroup_Type2.BP_Tem_KeyGuideGroup_Type2_C
// 0x0010 (0x0C08 - 0x0BF8)
class UBP_Tem_KeyGuideGroup_Type2_C final : public UTLUserWidgetActionGuide
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BF8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLDynamicEntryBox*                     TLDynamicEntryBox_140;                             // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Tem_KeyGuideGroup_Type2(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tem_KeyGuideGroup_Type2_C">();
	}
	static class UBP_Tem_KeyGuideGroup_Type2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Tem_KeyGuideGroup_Type2_C>();
	}
};
static_assert(alignof(UBP_Tem_KeyGuideGroup_Type2_C) == 0x000008, "Wrong alignment on UBP_Tem_KeyGuideGroup_Type2_C");
static_assert(sizeof(UBP_Tem_KeyGuideGroup_Type2_C) == 0x000C08, "Wrong size on UBP_Tem_KeyGuideGroup_Type2_C");
static_assert(offsetof(UBP_Tem_KeyGuideGroup_Type2_C, UberGraphFrame) == 0x000BF8, "Member 'UBP_Tem_KeyGuideGroup_Type2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Tem_KeyGuideGroup_Type2_C, TLDynamicEntryBox_140) == 0x000C00, "Member 'UBP_Tem_KeyGuideGroup_Type2_C::TLDynamicEntryBox_140' has a wrong offset!");

}
