#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FO_Anim

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "TLScene_structs.hpp"
#include "TLScene_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_FO_Anim.BP_FO_Anim_C
// 0xA1D0 (0xB320 - 0x1150)
class UBP_FO_Anim_C final : public UTLRigidModelAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1158(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1188(0x0048)()
	struct FUnrealAnimNode_PseudoFlinching        UnrealPseudoFlinchingAnimGraphNode;                // 0x11D0(0x2E00)()
	struct FUnrealAnimNode_TLAssetBasedAnimDynamics NrealTLAssetBasedAnimDynamics;                     // 0x3FD0(0x7310)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xB2E0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xB300(0x0020)()

public:
	void ExecuteUbergraph_BP_FO_Anim(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FO_Anim_C">();
	}
	static class UBP_FO_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FO_Anim_C>();
	}
};
static_assert(alignof(UBP_FO_Anim_C) == 0x000010, "Wrong alignment on UBP_FO_Anim_C");
static_assert(sizeof(UBP_FO_Anim_C) == 0x00B320, "Wrong size on UBP_FO_Anim_C");
static_assert(offsetof(UBP_FO_Anim_C, UberGraphFrame) == 0x001150, "Member 'UBP_FO_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FO_Anim_C, AnimGraphNode_Root) == 0x001158, "Member 'UBP_FO_Anim_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBP_FO_Anim_C, AnimGraphNode_Slot) == 0x001188, "Member 'UBP_FO_Anim_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UBP_FO_Anim_C, UnrealPseudoFlinchingAnimGraphNode) == 0x0011D0, "Member 'UBP_FO_Anim_C::UnrealPseudoFlinchingAnimGraphNode' has a wrong offset!");
static_assert(offsetof(UBP_FO_Anim_C, NrealTLAssetBasedAnimDynamics) == 0x003FD0, "Member 'UBP_FO_Anim_C::NrealTLAssetBasedAnimDynamics' has a wrong offset!");
static_assert(offsetof(UBP_FO_Anim_C, AnimGraphNode_LocalToComponentSpace) == 0x00B2E0, "Member 'UBP_FO_Anim_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UBP_FO_Anim_C, AnimGraphNode_ComponentToLocalSpace) == 0x00B300, "Member 'UBP_FO_Anim_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}
