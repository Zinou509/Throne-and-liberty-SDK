#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Auton

#include "Basic.hpp"


namespace SDK::Params
{

// Function Auton.TLAutonInterface.AutonNavigatableChanged
// 0x0001 (0x0001 - 0x0000)
struct TLAutonInterface_AutonNavigatableChanged final
{
public:
	bool                                          bNavigatable;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLAutonInterface_AutonNavigatableChanged) == 0x000001, "Wrong alignment on TLAutonInterface_AutonNavigatableChanged");
static_assert(sizeof(TLAutonInterface_AutonNavigatableChanged) == 0x000001, "Wrong size on TLAutonInterface_AutonNavigatableChanged");
static_assert(offsetof(TLAutonInterface_AutonNavigatableChanged, bNavigatable) == 0x000000, "Member 'TLAutonInterface_AutonNavigatableChanged::bNavigatable' has a wrong offset!");

// Function Auton.TLAutonInterface.AutonNavigationToMe
// 0x0001 (0x0001 - 0x0000)
struct TLAutonInterface_AutonNavigationToMe final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLAutonInterface_AutonNavigationToMe) == 0x000001, "Wrong alignment on TLAutonInterface_AutonNavigationToMe");
static_assert(sizeof(TLAutonInterface_AutonNavigationToMe) == 0x000001, "Wrong size on TLAutonInterface_AutonNavigationToMe");
static_assert(offsetof(TLAutonInterface_AutonNavigationToMe, ReturnValue) == 0x000000, "Member 'TLAutonInterface_AutonNavigationToMe::ReturnValue' has a wrong offset!");

// Function Auton.TLAutonInterface.AutonPop
// 0x0001 (0x0001 - 0x0000)
struct TLAutonInterface_AutonPop final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLAutonInterface_AutonPop) == 0x000001, "Wrong alignment on TLAutonInterface_AutonPop");
static_assert(sizeof(TLAutonInterface_AutonPop) == 0x000001, "Wrong size on TLAutonInterface_AutonPop");
static_assert(offsetof(TLAutonInterface_AutonPop, ReturnValue) == 0x000000, "Member 'TLAutonInterface_AutonPop::ReturnValue' has a wrong offset!");

// Function Auton.TLAutonInterface.AutonPush
// 0x0001 (0x0001 - 0x0000)
struct TLAutonInterface_AutonPush final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLAutonInterface_AutonPush) == 0x000001, "Wrong alignment on TLAutonInterface_AutonPush");
static_assert(sizeof(TLAutonInterface_AutonPush) == 0x000001, "Wrong size on TLAutonInterface_AutonPush");
static_assert(offsetof(TLAutonInterface_AutonPush, ReturnValue) == 0x000000, "Member 'TLAutonInterface_AutonPush::ReturnValue' has a wrong offset!");

// Function Auton.TLAutonScrollInterface.AutonAreaSetMeToRemoteScroll
// 0x0002 (0x0002 - 0x0000)
struct TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll final
{
public:
	bool                                          bSet;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll) == 0x000001, "Wrong alignment on TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll");
static_assert(sizeof(TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll) == 0x000002, "Wrong size on TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll");
static_assert(offsetof(TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll, bSet) == 0x000000, "Member 'TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll::bSet' has a wrong offset!");
static_assert(offsetof(TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll, ReturnValue) == 0x000001, "Member 'TLAutonScrollInterface_AutonAreaSetMeToRemoteScroll::ReturnValue' has a wrong offset!");

}

