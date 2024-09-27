#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_Slot_Texture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_Slot_Texture.BP_UI_Slot_Texture_C
// 0x00B0 (0x14E0 - 0x1430)
class UBP_UI_Slot_Texture_C final : public UTLUserWidgetFrame
{
public:
	uint8                                         Pad_1428[0x8];                                     // 0x1428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Focus_Anim;                                        // 0x1438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover_Anim;                                        // 0x1440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLCanvasPanel*                         BackTExture;                                       // 0x1448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLNamedSlot*                           BTN;                                               // 0x1450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLNamedSlot*                           List;                                              // 0x1458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLNamedSlot*                           SlotBox;                                           // 0x1460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_COMMON_LIST_HOVER;                             // 0x1468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_COMMON_LISTBACK_OFF_NORMAL;                    // 0x1470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_COMMON_LISTBACK_ON_NORMAL;                     // 0x1478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_COMMON_LISTLINE_ON_NORMAL;                     // 0x1480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       TLHorizontalBox_0;                                 // 0x1488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLSizeBox*                             TLSizeBox_1;                                       // 0x1490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          LargeOn_SmallOFF;                                  // 0x1498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1499[0x3];                                     // 0x1499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Three_CheckNorH;                                   // 0x149C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BackImgOn_Off;                                     // 0x14A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A1[0x3];                                     // 0x14A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BackImg_Opacity;                                   // 0x14A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 UnCheckHover_color;                                // 0x14A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CheckHover_color;                                  // 0x14AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SlotBoxShow;                                       // 0x14B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BTNShow;                                           // 0x14B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowDeco;                                          // 0x14B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B3[0x5];                                     // 0x14B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        Path_Normal_Texture;                               // 0x14B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FMargin                                In_Offset_normal_Texture;                          // 0x14D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_UI_Slot_Texture(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UnCheck_Hover_State();
	void UnCheck_Normal_State();
	void Check_Normal_State();
	void Check_Hover_State();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_Slot_Texture_C">();
	}
	static class UBP_UI_Slot_Texture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_Slot_Texture_C>();
	}
};
static_assert(alignof(UBP_UI_Slot_Texture_C) == 0x000010, "Wrong alignment on UBP_UI_Slot_Texture_C");
static_assert(sizeof(UBP_UI_Slot_Texture_C) == 0x0014E0, "Wrong size on UBP_UI_Slot_Texture_C");
static_assert(offsetof(UBP_UI_Slot_Texture_C, UberGraphFrame) == 0x001430, "Member 'UBP_UI_Slot_Texture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, Focus_Anim) == 0x001438, "Member 'UBP_UI_Slot_Texture_C::Focus_Anim' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, Hover_Anim) == 0x001440, "Member 'UBP_UI_Slot_Texture_C::Hover_Anim' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, BackTExture) == 0x001448, "Member 'UBP_UI_Slot_Texture_C::BackTExture' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, BTN) == 0x001450, "Member 'UBP_UI_Slot_Texture_C::BTN' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, List) == 0x001458, "Member 'UBP_UI_Slot_Texture_C::List' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, SlotBox) == 0x001460, "Member 'UBP_UI_Slot_Texture_C::SlotBox' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, TEX_COMMON_LIST_HOVER) == 0x001468, "Member 'UBP_UI_Slot_Texture_C::TEX_COMMON_LIST_HOVER' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, TEX_COMMON_LISTBACK_OFF_NORMAL) == 0x001470, "Member 'UBP_UI_Slot_Texture_C::TEX_COMMON_LISTBACK_OFF_NORMAL' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, TEX_COMMON_LISTBACK_ON_NORMAL) == 0x001478, "Member 'UBP_UI_Slot_Texture_C::TEX_COMMON_LISTBACK_ON_NORMAL' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, TEX_COMMON_LISTLINE_ON_NORMAL) == 0x001480, "Member 'UBP_UI_Slot_Texture_C::TEX_COMMON_LISTLINE_ON_NORMAL' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, TLHorizontalBox_0) == 0x001488, "Member 'UBP_UI_Slot_Texture_C::TLHorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, TLSizeBox_1) == 0x001490, "Member 'UBP_UI_Slot_Texture_C::TLSizeBox_1' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, LargeOn_SmallOFF) == 0x001498, "Member 'UBP_UI_Slot_Texture_C::LargeOn_SmallOFF' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, Three_CheckNorH) == 0x00149C, "Member 'UBP_UI_Slot_Texture_C::Three_CheckNorH' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, BackImgOn_Off) == 0x0014A0, "Member 'UBP_UI_Slot_Texture_C::BackImgOn_Off' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, BackImg_Opacity) == 0x0014A4, "Member 'UBP_UI_Slot_Texture_C::BackImg_Opacity' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, UnCheckHover_color) == 0x0014A8, "Member 'UBP_UI_Slot_Texture_C::UnCheckHover_color' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, CheckHover_color) == 0x0014AC, "Member 'UBP_UI_Slot_Texture_C::CheckHover_color' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, SlotBoxShow) == 0x0014B0, "Member 'UBP_UI_Slot_Texture_C::SlotBoxShow' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, BTNShow) == 0x0014B1, "Member 'UBP_UI_Slot_Texture_C::BTNShow' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, ShowDeco) == 0x0014B2, "Member 'UBP_UI_Slot_Texture_C::ShowDeco' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, Path_Normal_Texture) == 0x0014B8, "Member 'UBP_UI_Slot_Texture_C::Path_Normal_Texture' has a wrong offset!");
static_assert(offsetof(UBP_UI_Slot_Texture_C, In_Offset_normal_Texture) == 0x0014D0, "Member 'UBP_UI_Slot_Texture_C::In_Offset_normal_Texture' has a wrong offset!");

}
