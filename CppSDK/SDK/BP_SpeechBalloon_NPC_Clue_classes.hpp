#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpeechBalloon_NPC_Clue

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SpeechBalloon_NPC_Clue.BP_SpeechBalloon_NPC_Clue_C
// 0x0080 (0x15F0 - 0x1570)
class UBP_SpeechBalloon_NPC_Clue_C final : public UTLUserWidgetChatBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowAnimation;                                     // 0x1578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_Speech_BTN_C*                       BP_Interaction_BTN;                                // 0x1580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               CalibratedBG;                                      // 0x1588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         CaliBratedMid_Panel;                               // 0x1590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               ICO_BalloonMiddle;                                 // 0x1598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Img_CalibratedMiddle_D;                            // 0x15A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Img_CalibratedMiddle_L;                            // 0x15A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Img_CalibratedMiddle_R;                            // 0x15B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Img_CalibratedMiddle_U;                            // 0x15B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLGridPanel*                           NormalBG_GridPanel;                                // 0x15C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLSizeBox*                             SizeBox_Name;                                      // 0x15C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Text_Interaction;                                  // 0x15D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Text_Speech;                                       // 0x15D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         TLCanvasPanel_0;                                   // 0x15E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_NAME;                                          // 0x15E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SpeechBalloon_NPC_Clue(int32 EntryPoint);
	void OnPositionCalibrated(bool bCalibrated, ECalibratedEdgeType InEdgeType);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpeechBalloon_NPC_Clue_C">();
	}
	static class UBP_SpeechBalloon_NPC_Clue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SpeechBalloon_NPC_Clue_C>();
	}
};
static_assert(alignof(UBP_SpeechBalloon_NPC_Clue_C) == 0x000010, "Wrong alignment on UBP_SpeechBalloon_NPC_Clue_C");
static_assert(sizeof(UBP_SpeechBalloon_NPC_Clue_C) == 0x0015F0, "Wrong size on UBP_SpeechBalloon_NPC_Clue_C");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, UberGraphFrame) == 0x001570, "Member 'UBP_SpeechBalloon_NPC_Clue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, ShowAnimation) == 0x001578, "Member 'UBP_SpeechBalloon_NPC_Clue_C::ShowAnimation' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, BP_Interaction_BTN) == 0x001580, "Member 'UBP_SpeechBalloon_NPC_Clue_C::BP_Interaction_BTN' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, CalibratedBG) == 0x001588, "Member 'UBP_SpeechBalloon_NPC_Clue_C::CalibratedBG' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, CaliBratedMid_Panel) == 0x001590, "Member 'UBP_SpeechBalloon_NPC_Clue_C::CaliBratedMid_Panel' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, ICO_BalloonMiddle) == 0x001598, "Member 'UBP_SpeechBalloon_NPC_Clue_C::ICO_BalloonMiddle' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, Img_CalibratedMiddle_D) == 0x0015A0, "Member 'UBP_SpeechBalloon_NPC_Clue_C::Img_CalibratedMiddle_D' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, Img_CalibratedMiddle_L) == 0x0015A8, "Member 'UBP_SpeechBalloon_NPC_Clue_C::Img_CalibratedMiddle_L' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, Img_CalibratedMiddle_R) == 0x0015B0, "Member 'UBP_SpeechBalloon_NPC_Clue_C::Img_CalibratedMiddle_R' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, Img_CalibratedMiddle_U) == 0x0015B8, "Member 'UBP_SpeechBalloon_NPC_Clue_C::Img_CalibratedMiddle_U' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, NormalBG_GridPanel) == 0x0015C0, "Member 'UBP_SpeechBalloon_NPC_Clue_C::NormalBG_GridPanel' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, SizeBox_Name) == 0x0015C8, "Member 'UBP_SpeechBalloon_NPC_Clue_C::SizeBox_Name' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, Text_Interaction) == 0x0015D0, "Member 'UBP_SpeechBalloon_NPC_Clue_C::Text_Interaction' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, Text_Speech) == 0x0015D8, "Member 'UBP_SpeechBalloon_NPC_Clue_C::Text_Speech' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, TLCanvasPanel_0) == 0x0015E0, "Member 'UBP_SpeechBalloon_NPC_Clue_C::TLCanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UBP_SpeechBalloon_NPC_Clue_C, TXT_NAME) == 0x0015E8, "Member 'UBP_SpeechBalloon_NPC_Clue_C::TXT_NAME' has a wrong offset!");

}
