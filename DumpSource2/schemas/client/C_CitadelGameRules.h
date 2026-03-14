// MNetworkVarNames = "bool m_bFreezePeriod"
// MNetworkVarNames = "GameTime_t m_fLevelStartTime"
// MNetworkVarNames = "GameTime_t m_flGameStartTime"
// MNetworkVarNames = "GameTime_t m_flGameStateStartTime"
// MNetworkVarNames = "GameTime_t m_flGameStateEndTime"
// MNetworkVarNames = "GameTime_t m_flRoundStartTime"
// MNetworkVarNames = "EGameState m_eGameState"
// MNetworkVarNames = "EHANDLE m_hTowerAmber"
// MNetworkVarNames = "EHANDLE m_hTowerSapphire"
// MNetworkVarNames = "bool m_bEnemyInAmberBase"
// MNetworkVarNames = "bool m_bEnemyInSapphireBase"
// MNetworkVarNames = "bool m_bEnemyPlayersInAmberBase"
// MNetworkVarNames = "bool m_bEnemyPlayersInSapphireBase"
// MNetworkVarNames = "Vector m_vMinimapMins"
// MNetworkVarNames = "Vector m_vMinimapMaxs"
// MNetworkVarNames = "bool m_bMatchSafeToAbandon"
// MNetworkVarNames = "bool m_bMatchNotScored"
// MNetworkVarNames = "bool m_bNoDeathEnabled"
// MNetworkVarNames = "bool m_bFastCooldownsEnabled"
// MNetworkVarNames = "bool m_bStaminaCooldownsEnabled"
// MNetworkVarNames = "bool m_bUnlimitedAmmoEnabled"
// MNetworkVarNames = "bool m_bInfiniteResourcesEnabled"
// MNetworkVarNames = "bool m_bFlexSlotsForcedUnlocked"
// MNetworkVarNames = "ECitadelMatchMode m_eMatchMode"
// MNetworkVarNames = "ECitadelGameMode m_eGameMode"
// MNetworkVarNames = "uint32 m_unSpectatorCount"
// MNetworkVarNames = "uint32 m_unExpectedPlayerCount"
// MNetworkVarNames = "AccountID_t m_nHideoutOwner"
// MNetworkVarNames = "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
// MNetworkVarNames = "CitadelTeam_t m_iWinningTeam"
// MNetworkVarNames = "EHANDLE m_hCurrentHeroDrafterRebels"
// MNetworkVarNames = "EHANDLE m_hCurrentHeroDrafterCombine"
// MNetworkVarNames = "int m_iMidbossKillCount"
// MNetworkVarNames = "int m_iAmberRejuvCount"
// MNetworkVarNames = "int m_iSapphireRejuvCount"
// MNetworkVarNames = "float m_tNextMidBossSpawnTime"
// MNetworkVarNames = "bool m_bServerPaused"
// MNetworkVarNames = "int m_iPauseTeam"
// MNetworkVarNames = "int m_nMatchClockUpdateTick"
// MNetworkVarNames = "float m_flMatchClockAtLastUpdate"
// MNetworkVarNames = "bool m_bRequiresReportCardDismissal"
// MNetworkVarNames = "int m_eGGTeam"
// MNetworkVarNames = "GameTime_t m_flGGEndsAtTime"
// MNetworkVarNames = "MatchID_t m_unMatchID"
// MNetworkVarNames = "CUtlString m_sGameplayExperiment"
// MNetworkVarNames = "uint32 m_ExperimentTokenHashCode"
// MNetworkVarNames = "GameTime_t m_flHeroDiedTime"
// MNetworkVarNames = "CCitadelPlayOfTheGame* m_pPlayOfTheGame"
// MNetworkVarNames = "CStreetBrawlController m_tStreetBrawl"
class C_CitadelGameRules : public C_TeamplayRules
{
	// MNetworkEnable
	bool m_bFreezePeriod;
	// MNetworkEnable
	GameTime_t m_fLevelStartTime;
	// MNetworkEnable
	GameTime_t m_flGameStartTime;
	// MNetworkEnable
	GameTime_t m_flGameStateStartTime;
	// MNetworkEnable
	GameTime_t m_flGameStateEndTime;
	// MNetworkEnable
	GameTime_t m_flRoundStartTime;
	float32 m_flPlayOfTheGameStateEndTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "gameStateChanged"
	EGameState m_eGameState;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerAmber;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerSapphire;
	// MNetworkEnable
	bool m_bEnemyInAmberBase;
	// MNetworkEnable
	bool m_bEnemyInSapphireBase;
	// MNetworkEnable
	bool m_bEnemyPlayersInAmberBase;
	// MNetworkEnable
	bool m_bEnemyPlayersInSapphireBase;
	// MNetworkEnable
	Vector m_vMinimapMins;
	// MNetworkEnable
	Vector m_vMinimapMaxs;
	// MNetworkEnable
	bool m_bMatchSafeToAbandon;
	// MNetworkEnable
	bool m_bMatchNotScored;
	// MNetworkEnable
	bool m_bNoDeathEnabled;
	// MNetworkEnable
	bool m_bFastCooldownsEnabled;
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled;
	// MNetworkEnable
	bool m_bUnlimitedAmmoEnabled;
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled;
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked;
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode;
	// MNetworkEnable
	ECitadelGameMode m_eGameMode;
	// MNetworkEnable
	uint32 m_unSpectatorCount;
	// MNetworkEnable
	uint32 m_unExpectedPlayerCount;
	// MNetworkEnable
	uint32 m_nHideoutOwner;
	// MNetworkEnable
	CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap;
	// MNetworkEnable
	int32 m_iWinningTeam;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNetworkChangeCallback = "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNetworkChangeCallback = "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine;
	bool m_bDontUploadStats;
	// MNetworkEnable
	int32 m_iMidbossKillCount;
	// MNetworkEnable
	int32 m_iAmberRejuvCount;
	// MNetworkEnable
	int32 m_iSapphireRejuvCount;
	// MNetworkEnable
	float32 m_tNextMidBossSpawnTime;
	// MNetworkEnable
	bool m_bServerPaused;
	// MNetworkEnable
	int32 m_iPauseTeam;
	// MNetworkEnable
	int32 m_nMatchClockUpdateTick;
	// MNetworkEnable
	float32 m_flMatchClockAtLastUpdate;
	float64 m_flPauseTime;
	CPlayerSlot m_pausingPlayerId;
	CPlayerSlot m_unpausingPlayerId;
	float32 m_fPauseRawTime;
	float32 m_fPauseCurTime;
	float32 m_fUnpauseRawTime;
	float32 m_fUnpauseCurTime;
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal;
	GameTime_t m_flPreGameWaitEndTime;
	GameTime_t m_flReportCardDismissalWaitStart;
	int32 m_nLastPreGameCount;
	// MNetworkEnable
	int32 m_eGGTeam;
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime;
	// MNetworkEnable
	MatchID_t m_unMatchID;
	// MNetworkEnable
	CUtlString m_sGameplayExperiment;
	// MNetworkEnable
	uint32 m_ExperimentTokenHashCode;
	int32 m_nPlayerDeathEventID;
	int32 m_nReplayChangedEvent;
	int32 m_nGameOverEvent;
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime;
	// MNetworkEnable
	CCitadelPlayOfTheGame* m_pPlayOfTheGame;
	// MNetworkEnable
	CStreetBrawlController m_tStreetBrawl;
};
