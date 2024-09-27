#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NamePlete_TargetNum_Optimization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_NamePlete_TargetNum_Optimization.BP_NamePlete_TargetNum_Optimization_C
// 0x0010 (0x0AE8 - 0x0AD8)
class UBP_NamePlete_TargetNum_Optimization_C final : public UTLUserWidgetNamePlateIndex
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AD8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                           TargetNum_TXT;                                     // 0x0AE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NamePlete_TargetNum_Optimization(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NamePlete_TargetNum_Optimization_C">();
	}
	static class UBP_NamePlete_TargetNum_Optimization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NamePlete_TargetNum_Optimization_C>();
	}
};
static_assert(alignof(UBP_NamePlete_TargetNum_Optimization_C) == 0x000008, "Wrong alignment on UBP_NamePlete_TargetNum_Optimization_C");
static_assert(sizeof(UBP_NamePlete_TargetNum_Optimization_C) == 0x000AE8, "Wrong size on UBP_NamePlete_TargetNum_Optimization_C");
static_assert(offsetof(UBP_NamePlete_TargetNum_Optimization_C, UberGraphFrame) == 0x000AD8, "Member 'UBP_NamePlete_TargetNum_Optimization_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NamePlete_TargetNum_Optimization_C, TargetNum_TXT) == 0x000AE0, "Member 'UBP_NamePlete_TargetNum_Optimization_C::TargetNum_TXT' has a wrong offset!");

}
