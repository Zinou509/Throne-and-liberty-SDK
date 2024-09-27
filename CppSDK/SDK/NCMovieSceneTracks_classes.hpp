#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NCMovieSceneTracks

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class NCMovieSceneTracks.MovieSceneTargetFollowCamSectionNC01
// 0x0520 (0x0608 - 0x00E8)
class UMovieSceneTargetFollowCamSectionNC01 final : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                DistanceCurve;                                     // 0x00E8(0x00A0)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel                RotationCurves[0x3];                               // 0x0188(0x00A0)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel                OffsetCurves[0x3];                                 // 0x0368(0x00A0)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel                WeightCurve;                                       // 0x0548(0x00A0)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneObjectBindingID             TargetBindingID;                                   // 0x05E8(0x0018)(Edit, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   TargetBoneSocketName;                              // 0x0600(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void SetTargetBindingID(const struct FMovieSceneObjectBindingID& InTargetBindingID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTargetFollowCamSectionNC01">();
	}
	static class UMovieSceneTargetFollowCamSectionNC01* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTargetFollowCamSectionNC01>();
	}
};
static_assert(alignof(UMovieSceneTargetFollowCamSectionNC01) == 0x000008, "Wrong alignment on UMovieSceneTargetFollowCamSectionNC01");
static_assert(sizeof(UMovieSceneTargetFollowCamSectionNC01) == 0x000608, "Wrong size on UMovieSceneTargetFollowCamSectionNC01");
static_assert(offsetof(UMovieSceneTargetFollowCamSectionNC01, DistanceCurve) == 0x0000E8, "Member 'UMovieSceneTargetFollowCamSectionNC01::DistanceCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneTargetFollowCamSectionNC01, RotationCurves) == 0x000188, "Member 'UMovieSceneTargetFollowCamSectionNC01::RotationCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneTargetFollowCamSectionNC01, OffsetCurves) == 0x000368, "Member 'UMovieSceneTargetFollowCamSectionNC01::OffsetCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneTargetFollowCamSectionNC01, WeightCurve) == 0x000548, "Member 'UMovieSceneTargetFollowCamSectionNC01::WeightCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneTargetFollowCamSectionNC01, TargetBindingID) == 0x0005E8, "Member 'UMovieSceneTargetFollowCamSectionNC01::TargetBindingID' has a wrong offset!");
static_assert(offsetof(UMovieSceneTargetFollowCamSectionNC01, TargetBoneSocketName) == 0x000600, "Member 'UMovieSceneTargetFollowCamSectionNC01::TargetBoneSocketName' has a wrong offset!");

// Class NCMovieSceneTracks.MovieSceneTargetFollowCamTrackNC01
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneTargetFollowCamTrackNC01 final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_90[0x8];                                       // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0098(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTargetFollowCamTrackNC01">();
	}
	static class UMovieSceneTargetFollowCamTrackNC01* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTargetFollowCamTrackNC01>();
	}
};
static_assert(alignof(UMovieSceneTargetFollowCamTrackNC01) == 0x000008, "Wrong alignment on UMovieSceneTargetFollowCamTrackNC01");
static_assert(sizeof(UMovieSceneTargetFollowCamTrackNC01) == 0x0000A8, "Wrong size on UMovieSceneTargetFollowCamTrackNC01");
static_assert(offsetof(UMovieSceneTargetFollowCamTrackNC01, Sections) == 0x000098, "Member 'UMovieSceneTargetFollowCamTrackNC01::Sections' has a wrong offset!");

}
