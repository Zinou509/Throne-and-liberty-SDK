#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TLScheme

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "TLScheme_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TLScheme.TLCodexCodeLooksDataTable
// 0x0000 (0x00B0 - 0x00B0)
class UTLCodexCodeLooksDataTable final : public UDataTable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLCodexCodeLooksDataTable">();
	}
	static class UTLCodexCodeLooksDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLCodexCodeLooksDataTable>();
	}
};
static_assert(alignof(UTLCodexCodeLooksDataTable) == 0x000008, "Wrong alignment on UTLCodexCodeLooksDataTable");
static_assert(sizeof(UTLCodexCodeLooksDataTable) == 0x0000B0, "Wrong size on UTLCodexCodeLooksDataTable");

// Class TLScheme.TLDialogueDataTable
// 0x0000 (0x00B0 - 0x00B0)
class UTLDialogueDataTable final : public UDataTable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLDialogueDataTable">();
	}
	static class UTLDialogueDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLDialogueDataTable>();
	}
};
static_assert(alignof(UTLDialogueDataTable) == 0x000008, "Wrong alignment on UTLDialogueDataTable");
static_assert(sizeof(UTLDialogueDataTable) == 0x0000B0, "Wrong size on UTLDialogueDataTable");

// Class TLScheme.TLTableRowDataAsset
// 0x0000 (0x0030 - 0x0030)
class UTLTableRowDataAsset : public UDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLTableRowDataAsset">();
	}
	static class UTLTableRowDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLTableRowDataAsset>();
	}
};
static_assert(alignof(UTLTableRowDataAsset) == 0x000008, "Wrong alignment on UTLTableRowDataAsset");
static_assert(sizeof(UTLTableRowDataAsset) == 0x000030, "Wrong size on UTLTableRowDataAsset");

// Class TLScheme.TLInfoAbnormalLooksGroupDataAsset
// 0x0038 (0x0068 - 0x0030)
class UTLInfoAbnormalLooksGroupDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoAbnormalLooksGroup              RowData;                                           // 0x0030(0x0038)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoAbnormalLooksGroupDataAsset">();
	}
	static class UTLInfoAbnormalLooksGroupDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoAbnormalLooksGroupDataAsset>();
	}
};
static_assert(alignof(UTLInfoAbnormalLooksGroupDataAsset) == 0x000008, "Wrong alignment on UTLInfoAbnormalLooksGroupDataAsset");
static_assert(sizeof(UTLInfoAbnormalLooksGroupDataAsset) == 0x000068, "Wrong size on UTLInfoAbnormalLooksGroupDataAsset");
static_assert(offsetof(UTLInfoAbnormalLooksGroupDataAsset, RowData) == 0x000030, "Member 'UTLInfoAbnormalLooksGroupDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoAbnormalDataAsset
// 0x0078 (0x00A8 - 0x0030)
class UTLInfoAbnormalDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoAbnormal                        RowData;                                           // 0x0030(0x0078)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoAbnormalDataAsset">();
	}
	static class UTLInfoAbnormalDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoAbnormalDataAsset>();
	}
};
static_assert(alignof(UTLInfoAbnormalDataAsset) == 0x000008, "Wrong alignment on UTLInfoAbnormalDataAsset");
static_assert(sizeof(UTLInfoAbnormalDataAsset) == 0x0000A8, "Wrong size on UTLInfoAbnormalDataAsset");
static_assert(offsetof(UTLInfoAbnormalDataAsset, RowData) == 0x000030, "Member 'UTLInfoAbnormalDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoAbnormalLooksDataAsset
// 0x01F0 (0x0220 - 0x0030)
class UTLInfoAbnormalLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoAbnormalLooks                   RowData;                                           // 0x0030(0x01F0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoAbnormalLooksDataAsset">();
	}
	static class UTLInfoAbnormalLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoAbnormalLooksDataAsset>();
	}
};
static_assert(alignof(UTLInfoAbnormalLooksDataAsset) == 0x000008, "Wrong alignment on UTLInfoAbnormalLooksDataAsset");
static_assert(sizeof(UTLInfoAbnormalLooksDataAsset) == 0x000220, "Wrong size on UTLInfoAbnormalLooksDataAsset");
static_assert(offsetof(UTLInfoAbnormalLooksDataAsset, RowData) == 0x000030, "Member 'UTLInfoAbnormalLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeAchievementSteamDataAsset
// 0x0030 (0x0060 - 0x0030)
class UTLSchemeAchievementSteamDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeAchievementMapping            RowData;                                           // 0x0030(0x0030)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeAchievementSteamDataAsset">();
	}
	static class UTLSchemeAchievementSteamDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeAchievementSteamDataAsset>();
	}
};
static_assert(alignof(UTLSchemeAchievementSteamDataAsset) == 0x000008, "Wrong alignment on UTLSchemeAchievementSteamDataAsset");
static_assert(sizeof(UTLSchemeAchievementSteamDataAsset) == 0x000060, "Wrong size on UTLSchemeAchievementSteamDataAsset");
static_assert(offsetof(UTLSchemeAchievementSteamDataAsset, RowData) == 0x000030, "Member 'UTLSchemeAchievementSteamDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLCarrierDataAsset
// 0x0090 (0x00C0 - 0x0030)
class UTLCarrierDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLCarrier                             RowData;                                           // 0x0030(0x0090)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLCarrierDataAsset">();
	}
	static class UTLCarrierDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLCarrierDataAsset>();
	}
};
static_assert(alignof(UTLCarrierDataAsset) == 0x000008, "Wrong alignment on UTLCarrierDataAsset");
static_assert(sizeof(UTLCarrierDataAsset) == 0x0000C0, "Wrong size on UTLCarrierDataAsset");
static_assert(offsetof(UTLCarrierDataAsset, RowData) == 0x000030, "Member 'UTLCarrierDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoCarrierStateDataAsset
// 0x0020 (0x0050 - 0x0030)
class UTLInfoCarrierStateDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoCarrierState                    RowData;                                           // 0x0030(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoCarrierStateDataAsset">();
	}
	static class UTLInfoCarrierStateDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoCarrierStateDataAsset>();
	}
};
static_assert(alignof(UTLInfoCarrierStateDataAsset) == 0x000008, "Wrong alignment on UTLInfoCarrierStateDataAsset");
static_assert(sizeof(UTLInfoCarrierStateDataAsset) == 0x000050, "Wrong size on UTLInfoCarrierStateDataAsset");
static_assert(offsetof(UTLInfoCarrierStateDataAsset, RowData) == 0x000030, "Member 'UTLInfoCarrierStateDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoCinematicDialogDataAsset
// 0x0038 (0x0068 - 0x0030)
class UTLInfoCinematicDialogDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoCinematicDialog                 RowData;                                           // 0x0030(0x0038)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoCinematicDialogDataAsset">();
	}
	static class UTLInfoCinematicDialogDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoCinematicDialogDataAsset>();
	}
};
static_assert(alignof(UTLInfoCinematicDialogDataAsset) == 0x000008, "Wrong alignment on UTLInfoCinematicDialogDataAsset");
static_assert(sizeof(UTLInfoCinematicDialogDataAsset) == 0x000068, "Wrong size on UTLInfoCinematicDialogDataAsset");
static_assert(offsetof(UTLInfoCinematicDialogDataAsset, RowData) == 0x000030, "Member 'UTLInfoCinematicDialogDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeCodexCodeLooksDataAsset
// 0x0110 (0x0140 - 0x0030)
class UTLSchemeCodexCodeLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeCodexCodeLooks                RowData;                                           // 0x0030(0x0110)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeCodexCodeLooksDataAsset">();
	}
	static class UTLSchemeCodexCodeLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeCodexCodeLooksDataAsset>();
	}
};
static_assert(alignof(UTLSchemeCodexCodeLooksDataAsset) == 0x000008, "Wrong alignment on UTLSchemeCodexCodeLooksDataAsset");
static_assert(sizeof(UTLSchemeCodexCodeLooksDataAsset) == 0x000140, "Wrong size on UTLSchemeCodexCodeLooksDataAsset");
static_assert(offsetof(UTLSchemeCodexCodeLooksDataAsset, RowData) == 0x000030, "Member 'UTLSchemeCodexCodeLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeCodexGroupLooksDataAsset
// 0x00C0 (0x00F0 - 0x0030)
class UTLSchemeCodexGroupLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeCodexGroupLooks               RowData;                                           // 0x0030(0x00C0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeCodexGroupLooksDataAsset">();
	}
	static class UTLSchemeCodexGroupLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeCodexGroupLooksDataAsset>();
	}
};
static_assert(alignof(UTLSchemeCodexGroupLooksDataAsset) == 0x000008, "Wrong alignment on UTLSchemeCodexGroupLooksDataAsset");
static_assert(sizeof(UTLSchemeCodexGroupLooksDataAsset) == 0x0000F0, "Wrong size on UTLSchemeCodexGroupLooksDataAsset");
static_assert(offsetof(UTLSchemeCodexGroupLooksDataAsset, RowData) == 0x000030, "Member 'UTLSchemeCodexGroupLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeCodexObjectiveLooksDataAsset
// 0x0140 (0x0170 - 0x0030)
class UTLSchemeCodexObjectiveLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeCodexObjectiveLooks           RowData;                                           // 0x0030(0x0140)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeCodexObjectiveLooksDataAsset">();
	}
	static class UTLSchemeCodexObjectiveLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeCodexObjectiveLooksDataAsset>();
	}
};
static_assert(alignof(UTLSchemeCodexObjectiveLooksDataAsset) == 0x000008, "Wrong alignment on UTLSchemeCodexObjectiveLooksDataAsset");
static_assert(sizeof(UTLSchemeCodexObjectiveLooksDataAsset) == 0x000170, "Wrong size on UTLSchemeCodexObjectiveLooksDataAsset");
static_assert(offsetof(UTLSchemeCodexObjectiveLooksDataAsset, RowData) == 0x000030, "Member 'UTLSchemeCodexObjectiveLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeCostumePortraitLineDataAsset
// 0x0198 (0x01C8 - 0x0030)
class UTLSchemeCostumePortraitLineDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeCostumePortraitLine           RowData;                                           // 0x0030(0x0198)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeCostumePortraitLineDataAsset">();
	}
	static class UTLSchemeCostumePortraitLineDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeCostumePortraitLineDataAsset>();
	}
};
static_assert(alignof(UTLSchemeCostumePortraitLineDataAsset) == 0x000008, "Wrong alignment on UTLSchemeCostumePortraitLineDataAsset");
static_assert(sizeof(UTLSchemeCostumePortraitLineDataAsset) == 0x0001C8, "Wrong size on UTLSchemeCostumePortraitLineDataAsset");
static_assert(offsetof(UTLSchemeCostumePortraitLineDataAsset, RowData) == 0x000030, "Member 'UTLSchemeCostumePortraitLineDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoCutsceneDataAsset
// 0x00E0 (0x0110 - 0x0030)
class UTLInfoCutsceneDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoCutscene                        RowData;                                           // 0x0030(0x00E0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoCutsceneDataAsset">();
	}
	static class UTLInfoCutsceneDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoCutsceneDataAsset>();
	}
};
static_assert(alignof(UTLInfoCutsceneDataAsset) == 0x000008, "Wrong alignment on UTLInfoCutsceneDataAsset");
static_assert(sizeof(UTLInfoCutsceneDataAsset) == 0x000110, "Wrong size on UTLInfoCutsceneDataAsset");
static_assert(offsetof(UTLInfoCutsceneDataAsset, RowData) == 0x000030, "Member 'UTLInfoCutsceneDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLDialogueDataAsset
// 0x0170 (0x01A0 - 0x0030)
class UTLDialogueDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLDialogue                            RowData;                                           // 0x0030(0x0170)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLDialogueDataAsset">();
	}
	static class UTLDialogueDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLDialogueDataAsset>();
	}
};
static_assert(alignof(UTLDialogueDataAsset) == 0x000008, "Wrong alignment on UTLDialogueDataAsset");
static_assert(sizeof(UTLDialogueDataAsset) == 0x0001A0, "Wrong size on UTLDialogueDataAsset");
static_assert(offsetof(UTLDialogueDataAsset, RowData) == 0x000030, "Member 'UTLDialogueDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLDialogueContentDataAsset
// 0x00C8 (0x00F8 - 0x0030)
class UTLDialogueContentDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLDialogueContent                     RowData;                                           // 0x0030(0x00C8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLDialogueContentDataAsset">();
	}
	static class UTLDialogueContentDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLDialogueContentDataAsset>();
	}
};
static_assert(alignof(UTLDialogueContentDataAsset) == 0x000008, "Wrong alignment on UTLDialogueContentDataAsset");
static_assert(sizeof(UTLDialogueContentDataAsset) == 0x0000F8, "Wrong size on UTLDialogueContentDataAsset");
static_assert(offsetof(UTLDialogueContentDataAsset, RowData) == 0x000030, "Member 'UTLDialogueContentDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoEffectPropLooksDataAsset
// 0x00E0 (0x0110 - 0x0030)
class UTLInfoEffectPropLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoEffectPropLooks                 RowData;                                           // 0x0030(0x00E0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoEffectPropLooksDataAsset">();
	}
	static class UTLInfoEffectPropLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoEffectPropLooksDataAsset>();
	}
};
static_assert(alignof(UTLInfoEffectPropLooksDataAsset) == 0x000008, "Wrong alignment on UTLInfoEffectPropLooksDataAsset");
static_assert(sizeof(UTLInfoEffectPropLooksDataAsset) == 0x000110, "Wrong size on UTLInfoEffectPropLooksDataAsset");
static_assert(offsetof(UTLInfoEffectPropLooksDataAsset, RowData) == 0x000030, "Member 'UTLInfoEffectPropLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoFoDataAsset
// 0x01E0 (0x0210 - 0x0030)
class UTLInfoFoDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoFo                              RowData;                                           // 0x0030(0x01E0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoFoDataAsset">();
	}
	static class UTLInfoFoDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoFoDataAsset>();
	}
};
static_assert(alignof(UTLInfoFoDataAsset) == 0x000008, "Wrong alignment on UTLInfoFoDataAsset");
static_assert(sizeof(UTLInfoFoDataAsset) == 0x000210, "Wrong size on UTLInfoFoDataAsset");
static_assert(offsetof(UTLInfoFoDataAsset, RowData) == 0x000030, "Member 'UTLInfoFoDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoFoStateDataAsset
// 0x00D8 (0x0108 - 0x0030)
class UTLInfoFoStateDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoFoState                         RowData;                                           // 0x0030(0x00D8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoFoStateDataAsset">();
	}
	static class UTLInfoFoStateDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoFoStateDataAsset>();
	}
};
static_assert(alignof(UTLInfoFoStateDataAsset) == 0x000008, "Wrong alignment on UTLInfoFoStateDataAsset");
static_assert(sizeof(UTLInfoFoStateDataAsset) == 0x000108, "Wrong size on UTLInfoFoStateDataAsset");
static_assert(offsetof(UTLInfoFoStateDataAsset, RowData) == 0x000030, "Member 'UTLInfoFoStateDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeGrowthPassGroupDataAsset
// 0x0058 (0x0088 - 0x0030)
class UTLSchemeGrowthPassGroupDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeGrowthPassGroup               RowData;                                           // 0x0030(0x0058)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeGrowthPassGroupDataAsset">();
	}
	static class UTLSchemeGrowthPassGroupDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeGrowthPassGroupDataAsset>();
	}
};
static_assert(alignof(UTLSchemeGrowthPassGroupDataAsset) == 0x000008, "Wrong alignment on UTLSchemeGrowthPassGroupDataAsset");
static_assert(sizeof(UTLSchemeGrowthPassGroupDataAsset) == 0x000088, "Wrong size on UTLSchemeGrowthPassGroupDataAsset");
static_assert(offsetof(UTLSchemeGrowthPassGroupDataAsset, RowData) == 0x000030, "Member 'UTLSchemeGrowthPassGroupDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeGuildLevelDataAsset
// 0x00C0 (0x00F0 - 0x0030)
class UTLSchemeGuildLevelDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeGuildLevel                    RowData;                                           // 0x0030(0x00C0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeGuildLevelDataAsset">();
	}
	static class UTLSchemeGuildLevelDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeGuildLevelDataAsset>();
	}
};
static_assert(alignof(UTLSchemeGuildLevelDataAsset) == 0x000008, "Wrong alignment on UTLSchemeGuildLevelDataAsset");
static_assert(sizeof(UTLSchemeGuildLevelDataAsset) == 0x0000F0, "Wrong size on UTLSchemeGuildLevelDataAsset");
static_assert(offsetof(UTLSchemeGuildLevelDataAsset, RowData) == 0x000030, "Member 'UTLSchemeGuildLevelDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSchemeGuildRaidDataAsset
// 0x0178 (0x01A8 - 0x0030)
class UTLSchemeGuildRaidDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSchemeGuildRaid                     RowData;                                           // 0x0030(0x0178)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSchemeGuildRaidDataAsset">();
	}
	static class UTLSchemeGuildRaidDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSchemeGuildRaidDataAsset>();
	}
};
static_assert(alignof(UTLSchemeGuildRaidDataAsset) == 0x000008, "Wrong alignment on UTLSchemeGuildRaidDataAsset");
static_assert(sizeof(UTLSchemeGuildRaidDataAsset) == 0x0001A8, "Wrong size on UTLSchemeGuildRaidDataAsset");
static_assert(offsetof(UTLSchemeGuildRaidDataAsset, RowData) == 0x000030, "Member 'UTLSchemeGuildRaidDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoHyperLinkTextDataAsset
// 0x0058 (0x0088 - 0x0030)
class UTLInfoHyperLinkTextDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoHyperLinkText                   RowData;                                           // 0x0030(0x0058)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoHyperLinkTextDataAsset">();
	}
	static class UTLInfoHyperLinkTextDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoHyperLinkTextDataAsset>();
	}
};
static_assert(alignof(UTLInfoHyperLinkTextDataAsset) == 0x000008, "Wrong alignment on UTLInfoHyperLinkTextDataAsset");
static_assert(sizeof(UTLInfoHyperLinkTextDataAsset) == 0x000088, "Wrong size on UTLInfoHyperLinkTextDataAsset");
static_assert(offsetof(UTLInfoHyperLinkTextDataAsset, RowData) == 0x000030, "Member 'UTLInfoHyperLinkTextDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInteractionDataDataAsset
// 0x0110 (0x0140 - 0x0030)
class UTLInteractionDataDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInteractionData                     RowData;                                           // 0x0030(0x0110)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInteractionDataDataAsset">();
	}
	static class UTLInteractionDataDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInteractionDataDataAsset>();
	}
};
static_assert(alignof(UTLInteractionDataDataAsset) == 0x000008, "Wrong alignment on UTLInteractionDataDataAsset");
static_assert(sizeof(UTLInteractionDataDataAsset) == 0x000140, "Wrong size on UTLInteractionDataDataAsset");
static_assert(offsetof(UTLInteractionDataDataAsset, RowData) == 0x000030, "Member 'UTLInteractionDataDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoNpcDataAsset
// 0x0248 (0x0278 - 0x0030)
class UTLInfoNpcDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoNpc                             RowData;                                           // 0x0030(0x0248)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoNpcDataAsset">();
	}
	static class UTLInfoNpcDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoNpcDataAsset>();
	}
};
static_assert(alignof(UTLInfoNpcDataAsset) == 0x000008, "Wrong alignment on UTLInfoNpcDataAsset");
static_assert(sizeof(UTLInfoNpcDataAsset) == 0x000278, "Wrong size on UTLInfoNpcDataAsset");
static_assert(offsetof(UTLInfoNpcDataAsset, RowData) == 0x000030, "Member 'UTLInfoNpcDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoSkillLooksDataAsset
// 0x0130 (0x0160 - 0x0030)
class UTLInfoSkillLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoSkillLooks                      RowData;                                           // 0x0030(0x0130)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoSkillLooksDataAsset">();
	}
	static class UTLInfoSkillLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoSkillLooksDataAsset>();
	}
};
static_assert(alignof(UTLInfoSkillLooksDataAsset) == 0x000008, "Wrong alignment on UTLInfoSkillLooksDataAsset");
static_assert(sizeof(UTLInfoSkillLooksDataAsset) == 0x000160, "Wrong size on UTLInfoSkillLooksDataAsset");
static_assert(offsetof(UTLInfoSkillLooksDataAsset, RowData) == 0x000030, "Member 'UTLInfoSkillLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoSkillPcLooksDataAsset
// 0x03F8 (0x0428 - 0x0030)
class UTLInfoSkillPcLooksDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoSkillPcLooks                    RowData;                                           // 0x0030(0x03F8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoSkillPcLooksDataAsset">();
	}
	static class UTLInfoSkillPcLooksDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoSkillPcLooksDataAsset>();
	}
};
static_assert(alignof(UTLInfoSkillPcLooksDataAsset) == 0x000008, "Wrong alignment on UTLInfoSkillPcLooksDataAsset");
static_assert(sizeof(UTLInfoSkillPcLooksDataAsset) == 0x000428, "Wrong size on UTLInfoSkillPcLooksDataAsset");
static_assert(offsetof(UTLInfoSkillPcLooksDataAsset, RowData) == 0x000030, "Member 'UTLInfoSkillPcLooksDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLSocialMotionDataAsset
// 0x00A0 (0x00D0 - 0x0030)
class UTLSocialMotionDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLSocialMotion                        RowData;                                           // 0x0030(0x00A0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLSocialMotionDataAsset">();
	}
	static class UTLSocialMotionDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLSocialMotionDataAsset>();
	}
};
static_assert(alignof(UTLSocialMotionDataAsset) == 0x000008, "Wrong alignment on UTLSocialMotionDataAsset");
static_assert(sizeof(UTLSocialMotionDataAsset) == 0x0000D0, "Wrong size on UTLSocialMotionDataAsset");
static_assert(offsetof(UTLSocialMotionDataAsset, RowData) == 0x000030, "Member 'UTLSocialMotionDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLInfoTextTooltipDataAsset
// 0x0080 (0x00B0 - 0x0030)
class UTLInfoTextTooltipDataAsset final : public UTLTableRowDataAsset
{
public:
	struct FTLInfoTextTooltip                     RowData;                                           // 0x0030(0x0080)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLInfoTextTooltipDataAsset">();
	}
	static class UTLInfoTextTooltipDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLInfoTextTooltipDataAsset>();
	}
};
static_assert(alignof(UTLInfoTextTooltipDataAsset) == 0x000008, "Wrong alignment on UTLInfoTextTooltipDataAsset");
static_assert(sizeof(UTLInfoTextTooltipDataAsset) == 0x0000B0, "Wrong size on UTLInfoTextTooltipDataAsset");
static_assert(offsetof(UTLInfoTextTooltipDataAsset, RowData) == 0x000030, "Member 'UTLInfoTextTooltipDataAsset::RowData' has a wrong offset!");

// Class TLScheme.TLStringSystemDataTable
// 0x0000 (0x00B0 - 0x00B0)
class UTLStringSystemDataTable final : public UDataTable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLStringSystemDataTable">();
	}
	static class UTLStringSystemDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLStringSystemDataTable>();
	}
};
static_assert(alignof(UTLStringSystemDataTable) == 0x000008, "Wrong alignment on UTLStringSystemDataTable");
static_assert(sizeof(UTLStringSystemDataTable) == 0x0000B0, "Wrong size on UTLStringSystemDataTable");

// Class TLScheme.TLDataAssetLoaderInterface
// 0x0000 (0x0028 - 0x0028)
class ITLDataAssetLoaderInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLDataAssetLoaderInterface">();
	}
	static class ITLDataAssetLoaderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITLDataAssetLoaderInterface>();
	}
};
static_assert(alignof(ITLDataAssetLoaderInterface) == 0x000008, "Wrong alignment on ITLDataAssetLoaderInterface");
static_assert(sizeof(ITLDataAssetLoaderInterface) == 0x000028, "Wrong size on ITLDataAssetLoaderInterface");

// Class TLScheme.TLTextTooltipDataTable
// 0x0000 (0x00B0 - 0x00B0)
class UTLTextTooltipDataTable final : public UDataTable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TLTextTooltipDataTable">();
	}
	static class UTLTextTooltipDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTLTextTooltipDataTable>();
	}
};
static_assert(alignof(UTLTextTooltipDataTable) == 0x000008, "Wrong alignment on UTLTextTooltipDataTable");
static_assert(sizeof(UTLTextTooltipDataTable) == 0x0000B0, "Wrong size on UTLTextTooltipDataTable");

}
