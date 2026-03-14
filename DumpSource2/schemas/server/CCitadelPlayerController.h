// MNetworkVarNames = "EPlayerPlayState m_ePlayState"
// MNetworkVarNames = "int m_iGuidedBotMatchLastHits"
// MNetworkVarNames = "int m_iGuidedBotMatchOrbsSecured"
// MNetworkVarNames = "int m_iGuidedBotMatchOrbsDenied"
// MNetworkVarNames = "int m_iGuidedBotMatchDamageToGuardians"
// MNetworkVarNames = "int m_iGuidedBotMatchDamageToPlayers"
// MNetworkVarNames = "int m_iGuidedBotMatchDamageTaken"
// MNetworkVarNames = "int m_iGuidedBotMatchNetWorth"
// MNetworkVarNames = "int m_iGuidedBotMatchModsPurchased"
// MNetworkVarNames = "int m_iGuidedBotMatchAbilityUpgrades"
// MNetworkVarNames = "float m_flGuideBotMatchLastTaskNagVO"
// MNetworkVarNames = "float m_flGuideBotLastTimeTaskCompleted"
// MNetworkVarNames = "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
// MNetworkVarNames = "int m_nCurrentRank"
// MNetworkVarNames = "int8 m_nAssignedLane"
// MNetworkVarNames = "int8 m_nOriginalLaneAssignment"
// MNetworkVarNames = "bool m_bBotDisconnectTakeover"
// MNetworkVarNames = "bool m_bInTeamChat"
// MNetworkVarNames = "bool m_bInPartyChat"
// MNetworkVarNames = "bool m_bLaneSwapLocked"
// MNetworkVarNames = "EHANDLE m_vecLaneSwapRequests"
// MNetworkVarNames = "EHANDLE m_vecLaneSwapRejects"
// MNetworkVarNames = "int32 m_vecMutedPlayers"
// MNetworkVarNames = "bool m_bCommsRestricted"
// MNetworkVarNames = "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
// MNetworkVarNames = "PlayerDataGlobal_t m_PlayerDataGlobal"
// MNetworkVarNames = "int8 m_nDeathReplayAvailable"
// MNetworkVarNames = "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
class CCitadelPlayerController : public CBasePlayerController
{
	// MNetworkEnable
	// MNotSaved
	EPlayerPlayState m_ePlayState;
	// MNetworkEnable
	int32 m_iGuidedBotMatchLastHits;
	// MNetworkEnable
	int32 m_iGuidedBotMatchOrbsSecured;
	// MNetworkEnable
	int32 m_iGuidedBotMatchOrbsDenied;
	// MNetworkEnable
	int32 m_iGuidedBotMatchDamageToGuardians;
	// MNetworkEnable
	int32 m_iGuidedBotMatchDamageToPlayers;
	// MNetworkEnable
	int32 m_iGuidedBotMatchDamageTaken;
	// MNetworkEnable
	int32 m_iGuidedBotMatchNetWorth;
	// MNetworkEnable
	int32 m_iGuidedBotMatchModsPurchased;
	// MNetworkEnable
	int32 m_iGuidedBotMatchAbilityUpgrades;
	// MNetworkEnable
	float32 m_flGuideBotMatchLastTaskNagVO;
	// MNetworkEnable
	float32 m_flGuideBotLastTimeTaskCompleted;
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective;
	// MNetworkEnable
	int32 m_nCurrentRank;
	// MNetworkEnable
	// MNetworkChangeCallback = "AssignedLaneChanged"
	int8 m_nAssignedLane;
	// MNetworkEnable
	int8 m_nOriginalLaneAssignment;
	// MNetworkEnable
	bool m_bBotDisconnectTakeover;
	// MNetworkEnable
	// MNetworkChangeCallback = "ChatGroupsChanged"
	bool m_bInTeamChat;
	// MNetworkEnable
	// MNetworkChangeCallback = "ChatGroupsChanged"
	bool m_bInPartyChat;
	// MNetworkEnable
	bool m_bLaneSwapLocked;
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRequests;
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecLaneSwapRejects;
	// MNetworkEnable
	CNetworkUtlVectorBase< int32 > m_vecMutedPlayers;
	// MNetworkEnable
	bool m_bCommsRestricted;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnHeroPawnChanged"
	CHandle< CCitadelPlayerPawn > m_hHeroPawn;
	// MNetworkEnable
	// MNotSaved
	PlayerDataGlobal_t m_PlayerDataGlobal;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int8 m_nDeathReplayAvailable;
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot;
	GameTime_t m_flLastCommsTime;
	GameTime_t m_flNextAllowedCommsTime;
	GameTime_t m_flLastFailedCommsTime;
	CUtlVector< GameTime_t > m_vecRecentCommAttempts;
	int32 m_nTotalCommsAttempted;
	int32 m_nGuideBotNumTasksComplete;
};
