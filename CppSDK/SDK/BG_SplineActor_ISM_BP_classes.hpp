#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG_SplineActor_ISM_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BG_SplineActor_Spline_Data_structs.hpp"
#include "Engine_structs.hpp"
#include "BG_SplineActor_Random_Value_structs.hpp"
#include "TLScene_structs.hpp"
#include "TLScene_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG_SplineActor_ISM_BP.BG_SplineActor_ISM_BP_C
// 0x0130 (0x03B0 - 0x0280)
class ABG_SplineActor_ISM_BP_C final : public AUnrealSplineActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh_Pillar;                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh_Wall;                          // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Top;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Wall_Always_Z_Dir;                                 // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Wall_Mesh;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Wall_Offset_Pos;                                   // 0x02B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Wall_Offset_Rot;                                   // 0x02C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Wall_Offset_Scale;                                 // 0x02D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstance*>              Wall_Material;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible)
	float                                         Wall_UV_Tiling;                                    // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wall_UV_Tiling_Y_Scale;                            // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Pillar_Always_Z_Dir;                               // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Pillar_Mesh;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PillarStart;                                       // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PillarMid;                                         // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PillarEnd;                                         // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30B[0x1];                                      // 0x030B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Pillar_Offset_Pos;                                 // 0x030C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Pillar_Offset_Rot;                                 // 0x0318(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Pillar_Offset_Scale;                               // 0x0324(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstance*>              Pillar_Material;                                   // 0x0330(0x0010)(Edit, BlueprintVisible)
	float                                         Pillar_UV_Tiling;                                  // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pillar_UV_Tiling_Y_Scale;                          // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Higth;                                             // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spacing_Loop;                                      // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Spacing;                                           // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pillar_UV_Rotation;                                // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spacing_Random;                                    // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Random_Pos_Weight;                                 // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Random_Rot_Weight;                                 // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Random_Scale_Weight;                               // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfSplinePoint;                               // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wall_UV_Rotation;                                  // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBG_SplineActor_Spline_Data>    Spline_Data;                                       // 0x0378(0x0010)(Edit, BlueprintVisible)
	TArray<struct FBG_SplineActor_Random_Value>   Spacing_Data;                                      // 0x0388(0x0010)(Edit, BlueprintVisible)
	class FName                                   Collision_Profile;                                 // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InstanceEndCullDistance;                           // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EComponentMobility                            Mobility;                                          // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Randomized;                                        // 0x03A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EDetailModeBP                                 DetailMode_Wall;                                   // 0x03A6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDetailModeBP                                 DetailMode_Pillar;                                 // 0x03A7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoCalculateCullDistance;                        // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BG_SplineActor_ISM_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Build_Wall(class UStaticMesh* Wall);
	void Build_Pillar(class UStaticMesh* FillarMesh);
	void Append_Array(class UStaticMesh*& Mesh, TArray<class UMaterialInstance*>& Materials);
	void Get_Rotation(int32 Index_0, float X, float Y, float Z, bool Z_Dir, bool Type, int32 End_Index, struct FRotator* Rotation);
	void AddInstancedStaticMeshComponent(class UStaticMesh* StaticMesh, TArray<class UMaterialInstance*>& Materials, float UVTiling, float UVTilingYScale, float UVRotation, class UInstancedStaticMeshComponent* TargetISM);
	void RandomValue();
	void DisableOrSetLDCullDistance(class UInstancedStaticMeshComponent* ISM);

	void Has_Scalar_Parameter(class UMaterialInstance* Material, TArray<class FName>& Name_0, bool* bHas) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG_SplineActor_ISM_BP_C">();
	}
	static class ABG_SplineActor_ISM_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG_SplineActor_ISM_BP_C>();
	}
};
static_assert(alignof(ABG_SplineActor_ISM_BP_C) == 0x000008, "Wrong alignment on ABG_SplineActor_ISM_BP_C");
static_assert(sizeof(ABG_SplineActor_ISM_BP_C) == 0x0003B0, "Wrong size on ABG_SplineActor_ISM_BP_C");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, UberGraphFrame) == 0x000280, "Member 'ABG_SplineActor_ISM_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, InstancedStaticMesh_Pillar) == 0x000288, "Member 'ABG_SplineActor_ISM_BP_C::InstancedStaticMesh_Pillar' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, InstancedStaticMesh_Wall) == 0x000290, "Member 'ABG_SplineActor_ISM_BP_C::InstancedStaticMesh_Wall' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Spline) == 0x000298, "Member 'ABG_SplineActor_ISM_BP_C::Spline' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Top) == 0x0002A0, "Member 'ABG_SplineActor_ISM_BP_C::Top' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_Always_Z_Dir) == 0x0002A8, "Member 'ABG_SplineActor_ISM_BP_C::Wall_Always_Z_Dir' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_Mesh) == 0x0002B0, "Member 'ABG_SplineActor_ISM_BP_C::Wall_Mesh' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_Offset_Pos) == 0x0002B8, "Member 'ABG_SplineActor_ISM_BP_C::Wall_Offset_Pos' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_Offset_Rot) == 0x0002C4, "Member 'ABG_SplineActor_ISM_BP_C::Wall_Offset_Rot' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_Offset_Scale) == 0x0002D0, "Member 'ABG_SplineActor_ISM_BP_C::Wall_Offset_Scale' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_Material) == 0x0002E0, "Member 'ABG_SplineActor_ISM_BP_C::Wall_Material' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_UV_Tiling) == 0x0002F0, "Member 'ABG_SplineActor_ISM_BP_C::Wall_UV_Tiling' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_UV_Tiling_Y_Scale) == 0x0002F4, "Member 'ABG_SplineActor_ISM_BP_C::Wall_UV_Tiling_Y_Scale' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_Always_Z_Dir) == 0x0002F8, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_Always_Z_Dir' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_Mesh) == 0x000300, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_Mesh' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, PillarStart) == 0x000308, "Member 'ABG_SplineActor_ISM_BP_C::PillarStart' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, PillarMid) == 0x000309, "Member 'ABG_SplineActor_ISM_BP_C::PillarMid' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, PillarEnd) == 0x00030A, "Member 'ABG_SplineActor_ISM_BP_C::PillarEnd' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_Offset_Pos) == 0x00030C, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_Offset_Pos' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_Offset_Rot) == 0x000318, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_Offset_Rot' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_Offset_Scale) == 0x000324, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_Offset_Scale' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_Material) == 0x000330, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_Material' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_UV_Tiling) == 0x000340, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_UV_Tiling' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_UV_Tiling_Y_Scale) == 0x000344, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_UV_Tiling_Y_Scale' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Width) == 0x000348, "Member 'ABG_SplineActor_ISM_BP_C::Width' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Higth) == 0x00034C, "Member 'ABG_SplineActor_ISM_BP_C::Higth' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Spacing_Loop) == 0x000350, "Member 'ABG_SplineActor_ISM_BP_C::Spacing_Loop' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Spacing) == 0x000354, "Member 'ABG_SplineActor_ISM_BP_C::Spacing' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Pillar_UV_Rotation) == 0x000358, "Member 'ABG_SplineActor_ISM_BP_C::Pillar_UV_Rotation' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Spacing_Random) == 0x00035C, "Member 'ABG_SplineActor_ISM_BP_C::Spacing_Random' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Random_Pos_Weight) == 0x000360, "Member 'ABG_SplineActor_ISM_BP_C::Random_Pos_Weight' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Random_Rot_Weight) == 0x000364, "Member 'ABG_SplineActor_ISM_BP_C::Random_Rot_Weight' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Random_Scale_Weight) == 0x000368, "Member 'ABG_SplineActor_ISM_BP_C::Random_Scale_Weight' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, NumberOfSplinePoint) == 0x00036C, "Member 'ABG_SplineActor_ISM_BP_C::NumberOfSplinePoint' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Wall_UV_Rotation) == 0x000370, "Member 'ABG_SplineActor_ISM_BP_C::Wall_UV_Rotation' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Spline_Data) == 0x000378, "Member 'ABG_SplineActor_ISM_BP_C::Spline_Data' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Spacing_Data) == 0x000388, "Member 'ABG_SplineActor_ISM_BP_C::Spacing_Data' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Collision_Profile) == 0x000398, "Member 'ABG_SplineActor_ISM_BP_C::Collision_Profile' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, InstanceEndCullDistance) == 0x0003A0, "Member 'ABG_SplineActor_ISM_BP_C::InstanceEndCullDistance' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Mobility) == 0x0003A4, "Member 'ABG_SplineActor_ISM_BP_C::Mobility' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, Randomized) == 0x0003A5, "Member 'ABG_SplineActor_ISM_BP_C::Randomized' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, DetailMode_Wall) == 0x0003A6, "Member 'ABG_SplineActor_ISM_BP_C::DetailMode_Wall' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, DetailMode_Pillar) == 0x0003A7, "Member 'ABG_SplineActor_ISM_BP_C::DetailMode_Pillar' has a wrong offset!");
static_assert(offsetof(ABG_SplineActor_ISM_BP_C, bAutoCalculateCullDistance) == 0x0003A8, "Member 'ABG_SplineActor_ISM_BP_C::bAutoCalculateCullDistance' has a wrong offset!");

}

