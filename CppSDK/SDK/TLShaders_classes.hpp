#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TLShaders

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class TLShaders.TLShadersSettings
// 0x0130 (0x0168 - 0x0038)
class UTLShadersSettings final : public UDeveloperSettings
{
public:
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetOutlineBlendTime;                            // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                             TargetOutlineBlendOption;                          // 0x0044(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetOutlineThicknessStart;                       // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineThicknessEnd;                         // 0x004C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlinePowerStart;                           // 0x0050(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlinePowerEnd;                             // 0x0054(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineCulledThicknessStart;                 // 0x0058(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineCulledThicknessEnd;                   // 0x005C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineCulledPowerStart;                     // 0x0060(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineCulledPowerEnd;                       // 0x0064(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineBrightnessStart;                      // 0x0068(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineBrightnessEnd;                        // 0x006C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineOpacityStart;                         // 0x0070(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetOutlineOpacityEnd;                           // 0x0074(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineBlendTime;                        // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                             MassCombatOutlineBlendOption;                      // 0x007C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MassCombatOutlineThicknessStart;                   // 0x0080(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineThicknessEnd;                     // 0x0084(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlinePowerStart;                       // 0x0088(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlinePowerEnd;                         // 0x008C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineCulledThicknessStart;             // 0x0090(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineCulledThicknessEnd;               // 0x0094(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineCulledPowerStart;                 // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineCulledPowerEnd;                   // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineBrightnessStart;                  // 0x00A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineBrightnessEnd;                    // 0x00A4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineOpacityStart;                     // 0x00A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatOutlineOpacityEnd;                       // 0x00AC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineBlendTime;                           // 0x00B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                             InterimOutlineBlendOption;                         // 0x00B4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterimOutlineThicknessStart;                      // 0x00B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineThicknessEnd;                        // 0x00BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlinePowerStart;                          // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlinePowerEnd;                            // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineCulledThicknessStart;                // 0x00C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineCulledThicknessEnd;                  // 0x00CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineCulledPowerStart;                    // 0x00D0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineCulledPowerEnd;                      // 0x00D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineBrightnessStart;                     // 0x00D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineBrightnessEnd;                       // 0x00DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineOpacityStart;                        // 0x00E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterimOutlineOpacityEnd;                          // 0x00E4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineBlendTime;                 // 0x00E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                             MassCombatInterimOutlineBlendOption;               // 0x00EC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MassCombatInterimOutlineThicknessStart;            // 0x00F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineThicknessEnd;              // 0x00F4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlinePowerStart;                // 0x00F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlinePowerEnd;                  // 0x00FC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineCulledThicknessStart;      // 0x0100(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineCulledThicknessEnd;        // 0x0104(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineCulledPowerStart;          // 0x0108(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineCulledPowerEnd;            // 0x010C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineBrightnessStart;           // 0x0110(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineBrightnessEnd;             // 0x0114(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineOpacityStart;              // 0x0118(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassCombatInterimOutlineOpacityEnd;                // 0x011C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineBlendTime;                          // 0x0120(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                             InteractOutlineBlendOption;                        // 0x0124(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InteractOutlineThicknessStart;                     // 0x0128(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineThicknessEnd;                       // 0x012C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlinePowerStart;                         // 0x0130(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlinePowerEnd;                           // 0x0134(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineCulledThicknessStart;               // 0x0138(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineCulledThicknessEnd;                 // 0x013C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineCulledPowerStart;                   // 0x0140(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineCulledPowerEnd;                     // 0x0144(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineBrightnessStart;                    // 0x0148(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineBrightnessEnd;                      // 0x014C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineOpacityStart;                       // 0x0150(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractOutlineOpacityEnd;                         // 0x0154(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SelfOutlineColor;                                  // 0x0158(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLShadersSettings">();
	}
	static class UTLShadersSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLShadersSettings>();
	}
};
static_assert(alignof(UTLShadersSettings) == 0x000008, "Wrong alignment on UTLShadersSettings");
static_assert(sizeof(UTLShadersSettings) == 0x000168, "Wrong size on UTLShadersSettings");
static_assert(offsetof(UTLShadersSettings, TargetOutlineBlendTime) == 0x000040, "Member 'UTLShadersSettings::TargetOutlineBlendTime' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineBlendOption) == 0x000044, "Member 'UTLShadersSettings::TargetOutlineBlendOption' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineThicknessStart) == 0x000048, "Member 'UTLShadersSettings::TargetOutlineThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineThicknessEnd) == 0x00004C, "Member 'UTLShadersSettings::TargetOutlineThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlinePowerStart) == 0x000050, "Member 'UTLShadersSettings::TargetOutlinePowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlinePowerEnd) == 0x000054, "Member 'UTLShadersSettings::TargetOutlinePowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineCulledThicknessStart) == 0x000058, "Member 'UTLShadersSettings::TargetOutlineCulledThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineCulledThicknessEnd) == 0x00005C, "Member 'UTLShadersSettings::TargetOutlineCulledThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineCulledPowerStart) == 0x000060, "Member 'UTLShadersSettings::TargetOutlineCulledPowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineCulledPowerEnd) == 0x000064, "Member 'UTLShadersSettings::TargetOutlineCulledPowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineBrightnessStart) == 0x000068, "Member 'UTLShadersSettings::TargetOutlineBrightnessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineBrightnessEnd) == 0x00006C, "Member 'UTLShadersSettings::TargetOutlineBrightnessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineOpacityStart) == 0x000070, "Member 'UTLShadersSettings::TargetOutlineOpacityStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, TargetOutlineOpacityEnd) == 0x000074, "Member 'UTLShadersSettings::TargetOutlineOpacityEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineBlendTime) == 0x000078, "Member 'UTLShadersSettings::MassCombatOutlineBlendTime' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineBlendOption) == 0x00007C, "Member 'UTLShadersSettings::MassCombatOutlineBlendOption' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineThicknessStart) == 0x000080, "Member 'UTLShadersSettings::MassCombatOutlineThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineThicknessEnd) == 0x000084, "Member 'UTLShadersSettings::MassCombatOutlineThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlinePowerStart) == 0x000088, "Member 'UTLShadersSettings::MassCombatOutlinePowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlinePowerEnd) == 0x00008C, "Member 'UTLShadersSettings::MassCombatOutlinePowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineCulledThicknessStart) == 0x000090, "Member 'UTLShadersSettings::MassCombatOutlineCulledThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineCulledThicknessEnd) == 0x000094, "Member 'UTLShadersSettings::MassCombatOutlineCulledThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineCulledPowerStart) == 0x000098, "Member 'UTLShadersSettings::MassCombatOutlineCulledPowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineCulledPowerEnd) == 0x00009C, "Member 'UTLShadersSettings::MassCombatOutlineCulledPowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineBrightnessStart) == 0x0000A0, "Member 'UTLShadersSettings::MassCombatOutlineBrightnessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineBrightnessEnd) == 0x0000A4, "Member 'UTLShadersSettings::MassCombatOutlineBrightnessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineOpacityStart) == 0x0000A8, "Member 'UTLShadersSettings::MassCombatOutlineOpacityStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatOutlineOpacityEnd) == 0x0000AC, "Member 'UTLShadersSettings::MassCombatOutlineOpacityEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineBlendTime) == 0x0000B0, "Member 'UTLShadersSettings::InterimOutlineBlendTime' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineBlendOption) == 0x0000B4, "Member 'UTLShadersSettings::InterimOutlineBlendOption' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineThicknessStart) == 0x0000B8, "Member 'UTLShadersSettings::InterimOutlineThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineThicknessEnd) == 0x0000BC, "Member 'UTLShadersSettings::InterimOutlineThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlinePowerStart) == 0x0000C0, "Member 'UTLShadersSettings::InterimOutlinePowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlinePowerEnd) == 0x0000C4, "Member 'UTLShadersSettings::InterimOutlinePowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineCulledThicknessStart) == 0x0000C8, "Member 'UTLShadersSettings::InterimOutlineCulledThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineCulledThicknessEnd) == 0x0000CC, "Member 'UTLShadersSettings::InterimOutlineCulledThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineCulledPowerStart) == 0x0000D0, "Member 'UTLShadersSettings::InterimOutlineCulledPowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineCulledPowerEnd) == 0x0000D4, "Member 'UTLShadersSettings::InterimOutlineCulledPowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineBrightnessStart) == 0x0000D8, "Member 'UTLShadersSettings::InterimOutlineBrightnessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineBrightnessEnd) == 0x0000DC, "Member 'UTLShadersSettings::InterimOutlineBrightnessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineOpacityStart) == 0x0000E0, "Member 'UTLShadersSettings::InterimOutlineOpacityStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InterimOutlineOpacityEnd) == 0x0000E4, "Member 'UTLShadersSettings::InterimOutlineOpacityEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineBlendTime) == 0x0000E8, "Member 'UTLShadersSettings::MassCombatInterimOutlineBlendTime' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineBlendOption) == 0x0000EC, "Member 'UTLShadersSettings::MassCombatInterimOutlineBlendOption' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineThicknessStart) == 0x0000F0, "Member 'UTLShadersSettings::MassCombatInterimOutlineThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineThicknessEnd) == 0x0000F4, "Member 'UTLShadersSettings::MassCombatInterimOutlineThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlinePowerStart) == 0x0000F8, "Member 'UTLShadersSettings::MassCombatInterimOutlinePowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlinePowerEnd) == 0x0000FC, "Member 'UTLShadersSettings::MassCombatInterimOutlinePowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineCulledThicknessStart) == 0x000100, "Member 'UTLShadersSettings::MassCombatInterimOutlineCulledThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineCulledThicknessEnd) == 0x000104, "Member 'UTLShadersSettings::MassCombatInterimOutlineCulledThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineCulledPowerStart) == 0x000108, "Member 'UTLShadersSettings::MassCombatInterimOutlineCulledPowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineCulledPowerEnd) == 0x00010C, "Member 'UTLShadersSettings::MassCombatInterimOutlineCulledPowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineBrightnessStart) == 0x000110, "Member 'UTLShadersSettings::MassCombatInterimOutlineBrightnessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineBrightnessEnd) == 0x000114, "Member 'UTLShadersSettings::MassCombatInterimOutlineBrightnessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineOpacityStart) == 0x000118, "Member 'UTLShadersSettings::MassCombatInterimOutlineOpacityStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, MassCombatInterimOutlineOpacityEnd) == 0x00011C, "Member 'UTLShadersSettings::MassCombatInterimOutlineOpacityEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineBlendTime) == 0x000120, "Member 'UTLShadersSettings::InteractOutlineBlendTime' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineBlendOption) == 0x000124, "Member 'UTLShadersSettings::InteractOutlineBlendOption' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineThicknessStart) == 0x000128, "Member 'UTLShadersSettings::InteractOutlineThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineThicknessEnd) == 0x00012C, "Member 'UTLShadersSettings::InteractOutlineThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlinePowerStart) == 0x000130, "Member 'UTLShadersSettings::InteractOutlinePowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlinePowerEnd) == 0x000134, "Member 'UTLShadersSettings::InteractOutlinePowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineCulledThicknessStart) == 0x000138, "Member 'UTLShadersSettings::InteractOutlineCulledThicknessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineCulledThicknessEnd) == 0x00013C, "Member 'UTLShadersSettings::InteractOutlineCulledThicknessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineCulledPowerStart) == 0x000140, "Member 'UTLShadersSettings::InteractOutlineCulledPowerStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineCulledPowerEnd) == 0x000144, "Member 'UTLShadersSettings::InteractOutlineCulledPowerEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineBrightnessStart) == 0x000148, "Member 'UTLShadersSettings::InteractOutlineBrightnessStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineBrightnessEnd) == 0x00014C, "Member 'UTLShadersSettings::InteractOutlineBrightnessEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineOpacityStart) == 0x000150, "Member 'UTLShadersSettings::InteractOutlineOpacityStart' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, InteractOutlineOpacityEnd) == 0x000154, "Member 'UTLShadersSettings::InteractOutlineOpacityEnd' has a wrong offset!");
static_assert(offsetof(UTLShadersSettings, SelfOutlineColor) == 0x000158, "Member 'UTLShadersSettings::SelfOutlineColor' has a wrong offset!");

}

