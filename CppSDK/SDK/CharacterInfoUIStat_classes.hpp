#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterInfoUIStat

#include "Basic.hpp"

#include "TLClient_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharacterInfoUIStat.CharacterInfoUIStat_C
// 0x0000 (0x0090 - 0x0090)
class UCharacterInfoUIStat_C final : public UTLContentsConditionCharacterInfoUIStat
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterInfoUIStat_C">();
	}
	static class UCharacterInfoUIStat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterInfoUIStat_C>();
	}
};
static_assert(alignof(UCharacterInfoUIStat_C) == 0x000008, "Wrong alignment on UCharacterInfoUIStat_C");
static_assert(sizeof(UCharacterInfoUIStat_C) == 0x000090, "Wrong size on UCharacterInfoUIStat_C");

}

