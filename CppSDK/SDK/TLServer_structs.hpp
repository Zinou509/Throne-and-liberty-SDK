#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TLServer

#include "Basic.hpp"


namespace SDK
{

// Enum TLServer.ETLServerEvent
// NumValues: 0x00A7
enum class ETLServerEvent : uint8
{
	KGateGracefullyDisconnectedNotify        = 0,
	KGateConnected                           = 1,
	KGateDisconnected                        = 2,
	KStartLobbyOkay                          = 3,
	KStartLobbyFail                          = 4,
	KPlayerNameValid                         = 5,
	KPlayerNameEmpty                         = 6,
	KCreatePlayerOkay                        = 7,
	KCreatePlayerFail                        = 8,
	KStartGameOkay                           = 9,
	KStartGameFail                           = 10,
	KChoiceHerosRequest                      = 11,
	KChoiceHerosOkay                         = 12,
	KChoiceHerosFail                         = 13,
	KNpAuthGateOkay                          = 14,
	KNpAuthGateFail                          = 15,
	KLobbyInfoGateOkay                       = 16,
	KLobbyInfoGateFail                       = 17,
	StartCinematicDialog                     = 18,
	KGateSvrDisconnectedCharacterQueryOkay   = 19,
	KGateSvrDisconnectedCharacterQueryFail   = 20,
	KGateSvrDisconnectedCharacterSelectOkay  = 21,
	KGateSvrDisconnectedCharacterSelectFail  = 22,
	KGateSvrCheckCharacterDeletableOkay      = 23,
	KGateSvrCheckCharacterDeletableFail      = 24,
	KServerListGateOkay                      = 25,
	KServerListGateFail                      = 26,
	KDeleteCharacterGateOkay                 = 27,
	KDeleteCharacterGateFail                 = 28,
	KCancelDeletingCharacterOkay             = 29,
	KCancelDeletingCharacterFail             = 30,
	KCharacterGuildInfoUpdateNoti            = 31,
	KChangeCharacterNameSuccess              = 32,
	KChangeCharacterNameFail                 = 33,
	KValidateGuildNameSuccess                = 34,
	KValidateGuildNameFail                   = 35,
	KServerAliveChangedGateNotify            = 36,
	KGateSvrCharacterBanNotify               = 37,
	KStartCharacterGateReq                   = 38,
	KStartCharacterGateOkay                  = 39,
	KStartCharacterGateFail                  = 40,
	KGateSvrLoginQueueCancelOkay             = 41,
	KGateSvrLoginQueueCancelFail             = 42,
	KGateSvrLoginQueueStatusNotify           = 43,
	GateSvrLoginQueueCancelNotify            = 44,
	KGateSvrConfirmLoginNotify               = 45,
	KHelloWorldServer                        = 46,
	KReadyToSendToWorldServer                = 47,
	KReadyToWorldPlayOkay                    = 48,
	KWorldConnectOtherServer                 = 49,
	KWorldLogoutRes                          = 50,
	KGateLogoutNotify                        = 51,
	KWorldLogoutNotify                       = 52,
	KMoveToLobbySuccessNotify                = 53,
	KMoveToLobbyFailNotify                   = 54,
	KNowInLobbyFromStart                     = 55,
	KNowInLobbyFromWorld                     = 56,
	KEnterWorldServerReq                     = 57,
	KEnterWorldServerOkay                    = 58,
	KWorldServerConnected                    = 59,
	KWorldServerDisconnected                 = 60,
	KPreoccupancyCharacterNameOkay           = 61,
	KPreoccupancyCharacterNameFail           = 62,
	KGateValidateCharacterNameOkay           = 63,
	KGateValidateCharacterNameFail           = 64,
	KCreateCharacterCompleteOkay             = 65,
	KCreateCharacterCompleteFail             = 66,
	KCreateCharacterCancelOkay               = 67,
	KCreateCharacterCancelFail               = 68,
	KWorldValidateCharacterNameSuccess       = 69,
	KWorldValidateCharacterNameFail          = 70,
	GateUpdateProfileImageOkay               = 71,
	GateUpdateProfileImageFail               = 72,
	WorldUpdateProfileImageOkay              = 73,
	WorldUpdateProfileImageFail              = 74,
	KStartChangeMap                          = 75,
	KEquipCostumeSuccess                     = 76,
	KEquipCostumeFail                        = 77,
	KUnequipCostumeSuccess                   = 78,
	KUnequipCostumeFail                      = 79,
	KUpdateCostumeSuccess                    = 80,
	KUpdateCostumeFail                       = 81,
	KGateSvrNpSecondaryAuthVerifyOkay        = 82,
	KGateSvrNpSecondaryAuthVerifyFail        = 83,
	KGetNpGameAccountIdByCharacterIdRes      = 84,
	KPartyEnterStart                         = 85,
	KPartyUserEnter                          = 86,
	KPartyMemberSync                         = 87,
	KPartyMemberLeave                        = 88,
	KPartyMemberKick                         = 89,
	KPartyLeaderChange                       = 90,
	KPartyWithdraw                           = 91,
	KPartyRecruitmentRegisterSuccess         = 92,
	KPartyRecruitmentRegisterFail            = 93,
	KPartyRecruitmentDeregisterSuccess       = 94,
	KPartyRecruitmentDeregisterFail          = 95,
	KPartyRecruitmentListRefreshSuccess      = 96,
	KPartyRecruitmentListRefreshFail         = 97,
	KPartyRecruitmentListSearchSuccess       = 98,
	KPartyRecruitmentListSearchFail          = 99,
	KPartyJoinByRecruitmentListSuccess       = 100,
	KPartyJoinByRecruitmentListFail          = 101,
	KPartyRecruitmentUpdateSuccess           = 102,
	KPartyRecruitmentUpdateFail              = 103,
	KPartyMatchingRegisterSuccess            = 104,
	KPartyMatchingRegisterFail               = 105,
	KPartyMatchingReserveSuccess             = 106,
	KPartyMatchingReserveFail                = 107,
	KPartyMatchingRegisterNotify             = 108,
	KPartyMatchingReserveNotify              = 109,
	KPartyMatchingCompleteNotify             = 110,
	KPartyMatchingEntryNotify                = 111,
	KPartyMatchingRoleSelectSuccess          = 112,
	KPartyMatchingRoleSelectFail             = 113,
	KPartyMatchingRoleSelectNotify           = 114,
	KPartyMatchingRoleDecideSuccess          = 115,
	KPartyMatchingRoleDecideFail             = 116,
	KPartyMatchingRoleDecideNotify           = 117,
	KPartyMatchingRoleCancelSuccess          = 118,
	KPartyMatchingRoleCancelFail             = 119,
	KPartyMatchingRoleCancelNotify           = 120,
	KPartyMatchingRoleExpireNotify           = 121,
	KPartyMatchingDeregisterSuccess          = 122,
	KPartyMatchingDeregisterFail             = 123,
	KPartyMatchingDeregisterNotify           = 124,
	KPartyMatchingStandByNotify              = 125,
	KPartyMatchingMemberLeft                 = 126,
	EnteringPartyDungeonAcceptSuccess        = 127,
	EnteringPartyDungeonAcceptFail           = 128,
	EnteringPartyDungeonAcceptNotify         = 129,
	EnteringPartyDungeonRejectSuccess        = 130,
	EnteringPartyDungeonRejectFail           = 131,
	EnteringPartyDungeonRejectNotify         = 132,
	EnteringPartyDungeonExpiredNotify        = 133,
	EnteringPartyDungeonAllAcceptNotify      = 134,
	EffectInstantHeal                        = 135,
	PartyPinConfigOkay                       = 136,
	PartyPinConfigFail                       = 137,
	PartyMemberKickElectionSuccess           = 138,
	PartyMemberKickElectionFail              = 139,
	PartyMemberKickElectionNotify            = 140,
	PartyMemberVoteKickElectionSuccess       = 141,
	PartyMemberVoteKickElectionFail          = 142,
	PartyMemberKickElectionResultNotify      = 143,
	PartyMemberKickElectionCancelNotify      = 144,
	KPartyArenaMatchingRegisterSuccess       = 145,
	KPartyArenaMatchingRegisterFail          = 146,
	KPartyArenaMatchingRegisterNotify        = 147,
	KPartyArenaMatchingDeregisterSuccess     = 148,
	KPartyArenaMatchingDeregisterFail        = 149,
	KPartyArenaMatchingDeregisterNotify      = 150,
	KPartyArenaInvitePartyToGameSuccess      = 151,
	KPartyArenaInvitePartyToGameFail         = 152,
	KPartyArenaInviteReceivedToGameNotify    = 153,
	KPartyArenaInviteRespondToGameSuccess    = 154,
	KPartyArenaInviteRespondToGameFail       = 155,
	KPartyArenaInviteGameRejectedNotify      = 156,
	KPartyArenaInviteGameAcceptedNotify      = 157,
	KPartyArenaMatchingAcceptWaitingNotify   = 158,
	KPartyArenaMatchingAcceptRespondSuccess  = 159,
	KPartyArenaMatchingAcceptRespondFail     = 160,
	KPartyArenaMatchingAcceptRespondNotify   = 161,
	KPartyArenaMatchingAcceptCancelNotify    = 162,
	KPartyArenaStartEnteringNotify           = 163,
	MyPcEnterCompleted                       = 164,
	ChallengeDungeonUpdatePeriod             = 165,
	ETLServerEvent_MAX                       = 166,
};

}

