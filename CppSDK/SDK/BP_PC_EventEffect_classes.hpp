#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PC_EventEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PC_EventEffect.BP_PC_EventEffect_C
// 0x0040 (0x14A0 - 0x1460)
class UBP_PC_EventEffect_C final : public UTLUserWidgetFramePcEventEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EE_Counting;                                       // 0x1468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DE_Alert_Loop;                                     // 0x1470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLCanvasPanel*                         EE_Panel;                                          // 0x1478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Image_EEIcon;                                      // 0x1480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Text_EECount;                                      // 0x1488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLUniformGridPanel*                    TLUniform_Usurping;                                // 0x1490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PC_EventEffect(int32 EntryPoint);
	void OnUpdateEECount();
	void OnUpdateEEAlert(bool bInEEAlert);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PC_EventEffect_C">();
	}
	static class UBP_PC_EventEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PC_EventEffect_C>();
	}
};
static_assert(alignof(UBP_PC_EventEffect_C) == 0x000010, "Wrong alignment on UBP_PC_EventEffect_C");
static_assert(sizeof(UBP_PC_EventEffect_C) == 0x0014A0, "Wrong size on UBP_PC_EventEffect_C");
static_assert(offsetof(UBP_PC_EventEffect_C, UberGraphFrame) == 0x001460, "Member 'UBP_PC_EventEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PC_EventEffect_C, EE_Counting) == 0x001468, "Member 'UBP_PC_EventEffect_C::EE_Counting' has a wrong offset!");
static_assert(offsetof(UBP_PC_EventEffect_C, DE_Alert_Loop) == 0x001470, "Member 'UBP_PC_EventEffect_C::DE_Alert_Loop' has a wrong offset!");
static_assert(offsetof(UBP_PC_EventEffect_C, EE_Panel) == 0x001478, "Member 'UBP_PC_EventEffect_C::EE_Panel' has a wrong offset!");
static_assert(offsetof(UBP_PC_EventEffect_C, Image_EEIcon) == 0x001480, "Member 'UBP_PC_EventEffect_C::Image_EEIcon' has a wrong offset!");
static_assert(offsetof(UBP_PC_EventEffect_C, Text_EECount) == 0x001488, "Member 'UBP_PC_EventEffect_C::Text_EECount' has a wrong offset!");
static_assert(offsetof(UBP_PC_EventEffect_C, TLUniform_Usurping) == 0x001490, "Member 'UBP_PC_EventEffect_C::TLUniform_Usurping' has a wrong offset!");

}

