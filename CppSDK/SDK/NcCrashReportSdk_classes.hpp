#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NcCrashReportSdk

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class NcCrashReportSdk.NcCrashReportAPI
// 0x0000 (0x0028 - 0x0028)
class UNcCrashReportAPI final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NcCrashReportAPI">();
	}
	static class UNcCrashReportAPI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNcCrashReportAPI>();
	}
};
static_assert(alignof(UNcCrashReportAPI) == 0x000008, "Wrong alignment on UNcCrashReportAPI");
static_assert(sizeof(UNcCrashReportAPI) == 0x000028, "Wrong size on UNcCrashReportAPI");

// Class NcCrashReportSdk.NcCrashReportSdkBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UNcCrashReportSdkBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NcCrashReportSdkBPLibrary">();
	}
	static class UNcCrashReportSdkBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNcCrashReportSdkBPLibrary>();
	}
};
static_assert(alignof(UNcCrashReportSdkBPLibrary) == 0x000008, "Wrong alignment on UNcCrashReportSdkBPLibrary");
static_assert(sizeof(UNcCrashReportSdkBPLibrary) == 0x000028, "Wrong size on UNcCrashReportSdkBPLibrary");

// Class NcCrashReportSdk.NccrSettings
// 0x0030 (0x0058 - 0x0028)
class UNccrSettings final : public UObject
{
public:
	bool                                          DisablePluginInitialization;                       // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AppId;                                             // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppVersion;                                        // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AndroidLogcatCount;                                // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableNCCrashReportDialog;                         // 0x0054(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NccrSettings">();
	}
	static class UNccrSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNccrSettings>();
	}
};
static_assert(alignof(UNccrSettings) == 0x000008, "Wrong alignment on UNccrSettings");
static_assert(sizeof(UNccrSettings) == 0x000058, "Wrong size on UNccrSettings");
static_assert(offsetof(UNccrSettings, DisablePluginInitialization) == 0x000028, "Member 'UNccrSettings::DisablePluginInitialization' has a wrong offset!");
static_assert(offsetof(UNccrSettings, AppId) == 0x000030, "Member 'UNccrSettings::AppId' has a wrong offset!");
static_assert(offsetof(UNccrSettings, AppVersion) == 0x000040, "Member 'UNccrSettings::AppVersion' has a wrong offset!");
static_assert(offsetof(UNccrSettings, AndroidLogcatCount) == 0x000050, "Member 'UNccrSettings::AndroidLogcatCount' has a wrong offset!");
static_assert(offsetof(UNccrSettings, EnableNCCrashReportDialog) == 0x000054, "Member 'UNccrSettings::EnableNCCrashReportDialog' has a wrong offset!");

}

