#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NCMovieSceneTracks

#include "Basic.hpp"

#include "MovieScene_structs.hpp"


namespace SDK::Params
{

// Function NCMovieSceneTracks.MovieSceneTargetFollowCamSectionNC01.SetTargetBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InTargetBindingID;                                 // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID) == 0x000004, "Wrong alignment on MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID");
static_assert(sizeof(MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID) == 0x000018, "Wrong size on MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID");
static_assert(offsetof(MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID, InTargetBindingID) == 0x000000, "Member 'MovieSceneTargetFollowCamSectionNC01_SetTargetBindingID::InTargetBindingID' has a wrong offset!");

}

