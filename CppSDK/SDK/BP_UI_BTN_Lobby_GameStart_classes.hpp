#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_Lobby_GameStart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_BTN_Lobby_GameStart.BP_UI_BTN_Lobby_GameStart_C
// 0x0098 (0x0F98 - 0x0F00)
class UBP_UI_BTN_Lobby_GameStart_C final : public UTLUserWidgetActionGuideButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0F08(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0F10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LineFXAnim;                                        // 0x0F18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Unhover;                                           // 0x0F20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x0F28(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0F30(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLNamedSlot*                           Bink_Fx;                                           // 0x0F38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           DescriptionText;                                   // 0x0F40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_BIGBTN_BACK_HOVER_L;                           // 0x0F48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Tex_BTN_TextBox_CenterDeco;                        // 0x0F50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_146;                                       // 0x0F58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BTN_Width;                                         // 0x0F60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BTN_Height;                                        // 0x0F64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleKeyIcon;                                    // 0x0F68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F69[0x7];                                      // 0x0F69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           Nomal_Texture;                                     // 0x0F70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Disable_Texture;                                   // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Button___Grey1_Green2_Red3;                        // 0x0F80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FullScBTN_ON_PopUpBTN_Off;                         // 0x0F84(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F85[0x3];                                      // 0x0F85(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBinkMediaPlayer*                       Var_BK2_HoverFlareFX;                              // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       Var_BK2_Lobby_gameStart_LineFX;                    // 0x0F90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_UI_BTN_Lobby_GameStart(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void TriggerEvt_BK2_Lobby_gameStart_LineFX();
	void TriggerEvt_HoverFlareFX();
	void RedButton();
	void GreyButton();
	void GreenButton();
	void RedPopUpBTN();
	void GreyPopUpBTN();
	void GreenPopUpBTN();
	void SequenceEvent__ENTRYPOINTBP_UI_BTN_Lobby_GameStart_0();
	void SequenceEvent__ENTRYPOINTBP_UI_BTN_Lobby_GameStart_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_BTN_Lobby_GameStart_C">();
	}
	static class UBP_UI_BTN_Lobby_GameStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_BTN_Lobby_GameStart_C>();
	}
};
static_assert(alignof(UBP_UI_BTN_Lobby_GameStart_C) == 0x000008, "Wrong alignment on UBP_UI_BTN_Lobby_GameStart_C");
static_assert(sizeof(UBP_UI_BTN_Lobby_GameStart_C) == 0x000F98, "Wrong size on UBP_UI_BTN_Lobby_GameStart_C");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, UberGraphFrame) == 0x000F00, "Member 'UBP_UI_BTN_Lobby_GameStart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, HideAnim) == 0x000F08, "Member 'UBP_UI_BTN_Lobby_GameStart_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, ShowAnim) == 0x000F10, "Member 'UBP_UI_BTN_Lobby_GameStart_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, LineFXAnim) == 0x000F18, "Member 'UBP_UI_BTN_Lobby_GameStart_C::LineFXAnim' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Unhover) == 0x000F20, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Unhover' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Press) == 0x000F28, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Hover) == 0x000F30, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Bink_Fx) == 0x000F38, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Bink_Fx' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, DescriptionText) == 0x000F40, "Member 'UBP_UI_BTN_Lobby_GameStart_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, TEX_BIGBTN_BACK_HOVER_L) == 0x000F48, "Member 'UBP_UI_BTN_Lobby_GameStart_C::TEX_BIGBTN_BACK_HOVER_L' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Tex_BTN_TextBox_CenterDeco) == 0x000F50, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Tex_BTN_TextBox_CenterDeco' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, TLImage_146) == 0x000F58, "Member 'UBP_UI_BTN_Lobby_GameStart_C::TLImage_146' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, BTN_Width) == 0x000F60, "Member 'UBP_UI_BTN_Lobby_GameStart_C::BTN_Width' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, BTN_Height) == 0x000F64, "Member 'UBP_UI_BTN_Lobby_GameStart_C::BTN_Height' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, VisibleKeyIcon) == 0x000F68, "Member 'UBP_UI_BTN_Lobby_GameStart_C::VisibleKeyIcon' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Nomal_Texture) == 0x000F70, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Nomal_Texture' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Disable_Texture) == 0x000F78, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Disable_Texture' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Button___Grey1_Green2_Red3) == 0x000F80, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Button___Grey1_Green2_Red3' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, FullScBTN_ON_PopUpBTN_Off) == 0x000F84, "Member 'UBP_UI_BTN_Lobby_GameStart_C::FullScBTN_ON_PopUpBTN_Off' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Var_BK2_HoverFlareFX) == 0x000F88, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Var_BK2_HoverFlareFX' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Lobby_GameStart_C, Var_BK2_Lobby_gameStart_LineFX) == 0x000F90, "Member 'UBP_UI_BTN_Lobby_GameStart_C::Var_BK2_Lobby_gameStart_LineFX' has a wrong offset!");

}

