#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_PolymorphTrailData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_PolymorphTrailData.Struct_PolymorphTrailData
// 0x0038 (0x0038 - 0x0000)
struct FStruct_PolymorphTrailData final
{
public:
	class FName                                   BoneName_3_9C3EC9DC4123EB9A78A321A0B317EBC5;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_5_332F2DCE4C8F281235A7018AAAF1DE7C;       // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius_27_0FBCA7C640DD06E1161AEF92D13905A4;        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadiusVisualScale_30_BA95744B45C9EBDB9E39E9B539F89CEC; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hardness_11_69F5F0054785FF7D181F5A8D0304C53B;      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Weight_35_32B9574341E8DBD456757DA4C436EEFE;        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PileWhenInside_13_53B93BFE46FF69CF1F3B9A8D333B76F1; // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PileRadiusScale_31_89947ACC42E6AB2A79BC8E9E67C66640; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PileHardness_24_DE4230FA45EE5B4EAE283CAAB981FD0F;  // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PileWeight_37_E5B8CFF64F072F308B9A869D8CAB51EB;    // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disabled_26_34B064254A440C4B86D04B8B37C236D8;      // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FStruct_PolymorphTrailData) == 0x000004, "Wrong alignment on FStruct_PolymorphTrailData");
static_assert(sizeof(FStruct_PolymorphTrailData) == 0x000038, "Wrong size on FStruct_PolymorphTrailData");
static_assert(offsetof(FStruct_PolymorphTrailData, BoneName_3_9C3EC9DC4123EB9A78A321A0B317EBC5) == 0x000000, "Member 'FStruct_PolymorphTrailData::BoneName_3_9C3EC9DC4123EB9A78A321A0B317EBC5' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, Location_5_332F2DCE4C8F281235A7018AAAF1DE7C) == 0x000008, "Member 'FStruct_PolymorphTrailData::Location_5_332F2DCE4C8F281235A7018AAAF1DE7C' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, Radius_27_0FBCA7C640DD06E1161AEF92D13905A4) == 0x000014, "Member 'FStruct_PolymorphTrailData::Radius_27_0FBCA7C640DD06E1161AEF92D13905A4' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, RadiusVisualScale_30_BA95744B45C9EBDB9E39E9B539F89CEC) == 0x000018, "Member 'FStruct_PolymorphTrailData::RadiusVisualScale_30_BA95744B45C9EBDB9E39E9B539F89CEC' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, Hardness_11_69F5F0054785FF7D181F5A8D0304C53B) == 0x00001C, "Member 'FStruct_PolymorphTrailData::Hardness_11_69F5F0054785FF7D181F5A8D0304C53B' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, Weight_35_32B9574341E8DBD456757DA4C436EEFE) == 0x000020, "Member 'FStruct_PolymorphTrailData::Weight_35_32B9574341E8DBD456757DA4C436EEFE' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, PileWhenInside_13_53B93BFE46FF69CF1F3B9A8D333B76F1) == 0x000024, "Member 'FStruct_PolymorphTrailData::PileWhenInside_13_53B93BFE46FF69CF1F3B9A8D333B76F1' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, PileRadiusScale_31_89947ACC42E6AB2A79BC8E9E67C66640) == 0x000028, "Member 'FStruct_PolymorphTrailData::PileRadiusScale_31_89947ACC42E6AB2A79BC8E9E67C66640' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, PileHardness_24_DE4230FA45EE5B4EAE283CAAB981FD0F) == 0x00002C, "Member 'FStruct_PolymorphTrailData::PileHardness_24_DE4230FA45EE5B4EAE283CAAB981FD0F' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, PileWeight_37_E5B8CFF64F072F308B9A869D8CAB51EB) == 0x000030, "Member 'FStruct_PolymorphTrailData::PileWeight_37_E5B8CFF64F072F308B9A869D8CAB51EB' has a wrong offset!");
static_assert(offsetof(FStruct_PolymorphTrailData, Disabled_26_34B064254A440C4B86D04B8B37C236D8) == 0x000034, "Member 'FStruct_PolymorphTrailData::Disabled_26_34B064254A440C4B86D04B8B37C236D8' has a wrong offset!");

}
