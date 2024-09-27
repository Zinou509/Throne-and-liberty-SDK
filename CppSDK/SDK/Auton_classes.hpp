#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Auton

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Auton.TLAutonAreaInterface
// 0x0000 (0x0028 - 0x0028)
class ITLAutonAreaInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLAutonAreaInterface">();
	}
	static class ITLAutonAreaInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITLAutonAreaInterface>();
	}
};
static_assert(alignof(ITLAutonAreaInterface) == 0x000008, "Wrong alignment on ITLAutonAreaInterface");
static_assert(sizeof(ITLAutonAreaInterface) == 0x000028, "Wrong size on ITLAutonAreaInterface");

// Class Auton.TLAutonInterface
// 0x0000 (0x0028 - 0x0028)
class ITLAutonInterface final : public IInterface
{
public:
	void AutonNavigatableChanged(bool bNavigatable);
	bool AutonNavigationToMe();
	bool AutonPop();
	bool AutonPush();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLAutonInterface">();
	}
	static class ITLAutonInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITLAutonInterface>();
	}
};
static_assert(alignof(ITLAutonInterface) == 0x000008, "Wrong alignment on ITLAutonInterface");
static_assert(sizeof(ITLAutonInterface) == 0x000028, "Wrong size on ITLAutonInterface");

// Class Auton.TLAutonScrollInterface
// 0x0000 (0x0028 - 0x0028)
class ITLAutonScrollInterface final : public IInterface
{
public:
	bool AutonAreaSetMeToRemoteScroll(bool bSet);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLAutonScrollInterface">();
	}
	static class ITLAutonScrollInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITLAutonScrollInterface>();
	}
};
static_assert(alignof(ITLAutonScrollInterface) == 0x000008, "Wrong alignment on ITLAutonScrollInterface");
static_assert(sizeof(ITLAutonScrollInterface) == 0x000028, "Wrong size on ITLAutonScrollInterface");

}
