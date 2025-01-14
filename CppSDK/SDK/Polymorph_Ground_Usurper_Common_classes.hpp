#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Polymorph_Ground_Usurper_Common

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Polymorph_Ground_Usurper_Common.SequenceDirector_C
// 0x0000 (0x0038 - 0x0038)
class Polymorph_Ground_Usurper_Common::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	void Call_OnTransformedIn_0(class ATLScenarioActor* Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ATLScenarioActor* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass Polymorph_Ground_Usurper_Common.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class Polymorph_Ground_Usurper_Common::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Polymorph_Ground_Usurper_Common::USequenceDirector_C>();
	}
};
static_assert(alignof(Polymorph_Ground_Usurper_Common::USequenceDirector_C) == 0x000008, "Wrong alignment on Polymorph_Ground_Usurper_Common::USequenceDirector_C");
static_assert(sizeof(Polymorph_Ground_Usurper_Common::USequenceDirector_C) == 0x000038, "Wrong size on Polymorph_Ground_Usurper_Common::USequenceDirector_C");

}

