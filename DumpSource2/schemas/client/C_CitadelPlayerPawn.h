// MNetworkVarTypeOverride = "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName = "m_pCameraServices"
// MNetworkVarTypeOverride = "CCitadelPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName = "m_pMovementServices"
// MNetworkVarNames = "CMsgLaneColor m_eZipLineLaneColor"
// MNetworkVarNames = "int32 m_nLevel"
// MNetworkVarNames = "int32 m_nCurrencies"
// MNetworkVarNames = "int32 m_nSpentCurrencies"
// MNetworkVarNames = "GameTime_t m_flLastSpawnTime"
// MNetworkVarNames = "GameTime_t m_flRespawnTime"
// MNetworkVarNames = "bool m_bInRegenerationZone"
// MNetworkVarNames = "bool m_bInItemShopZone"
// MNetworkVarNames = "bool m_bInHideoutZone"
// MNetworkVarNames = "GameTime_t m_timeRevealedOnMinimapByNPC"
// MNetworkVarNames = "EntitySubclassID_t m_vecFullSellPriceItems"
// MNetworkVarNames = "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
// MNetworkVarNames = "EntitySubclassID_t m_vecQuickbuyQueue"
// MNetworkVarNames = "EntitySubclassID_t m_vecQuickbuySellQueue"
// MNetworkVarNames = "AbilityID_t m_unQuickbuyAutoPurchaseRequest"
// MNetworkVarNames = "bool m_bQuickbuyAutoPurchase"
// MNetworkVarNames = "bool m_bQuickbuyAutoQueueBuild"
// MNetworkVarNames = "bool m_bHasQuickbuyBeenUsed"
// MNetworkVarNames = "EntitySubclassID_t m_vecRestrictedToItems"
// MNetworkVarNames = "HeroBuildID_t m_unHeroBuildID"
// MNetworkVarNames = "CUtlString m_sHeroBuildSerialized"
// MNetworkVarNames = "EHANDLE m_hViewEntityForObserver"
// MNetworkVarNames = "bool m_bNetworkDisconnected"
// MNetworkVarNames = "bool m_bLearningAbility"
// MNetworkVarNames = "int m_nFlashStartTick"
// MNetworkVarNames = "int m_nFlashMaxStartTick"
// MNetworkVarNames = "int m_nFlashFadeStartTick"
// MNetworkVarNames = "int m_nFlashEndTick"
// MNetworkVarNames = "int8 m_nFlashMaxAlpha"
// MNetworkVarNames = "int32 m_nDeducedLane"
// MNetworkVarNames = "EHANDLE m_hEnemyPlayerAimTarget"
// MNetworkVarNames = "bool m_arrPreventAbilityLearning"
// MNetworkVarNames = "ItemDraftRoundState_t m_ItemDraftRoundState"
// MNetworkVarNames = "CCitadelRecentDamage m_sInCombat"
// MNetworkVarNames = "CCitadelRecentDamage m_sPlayerDamageTaken"
// MNetworkVarNames = "CCitadelRecentDamage m_sPlayerDamageDealt"
// MNetworkVarNames = "int8 m_nSuccessiveDucks"
// MNetworkVarNames = "GameTime_t m_flLastDuckTime"
// MNetworkVarNames = "bool m_bDismissedReportCard"
// MNetworkVarNames = "float m_flCurrentHealingAmount"
// MNetworkVarNames = "QAngle m_angLockedEyeAngles"
// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames = "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
// MNetworkVarNames = "bool m_bAnimGraphMovementClipped"
// MNetworkVarNames = "bool m_bAnimGraphMovementDisableGravity"
// MNetworkVarNames = "bool m_bAnimGraphMovementDirectAirControl"
// MNetworkVarNames = "GameTime_t m_flPredTimeSlowedStart"
// MNetworkVarNames = "GameTime_t m_flPredTimeSlowedEnd"
// MNetworkVarNames = "float32 m_flPredSlowSpeed"
// MNetworkVarNames = "GameTime_t m_flTimeSlowedStart"
// MNetworkVarNames = "GameTime_t m_flTimeSlowedEnd"
// MNetworkVarNames = "float32 m_flSlowSpeed"
// MNetworkVarNames = "GameTime_t m_flForceInCombatAnimsUntilTime"
// MNetworkVarNames = "uint8 m_nAudioEnclosure"
// MNetworkVarNames = "bool m_bAudioHasSkyExposure"
class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase
{
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkBitCount = 11
	// MNetworkChangeCallback = "angEyeAnglesChanged"
	// MNetworkPriority = 32
	QAngle m_angEyeAngles;
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkBitCount = 11
	// MNetworkChangeCallback = "angClientCameraChanged"
	// MNetworkPriority = 32
	QAngle m_angClientCamera;
	// MNetworkEnable
	CMsgLaneColor m_eZipLineLaneColor;
	// MNetworkEnable
	// MNetworkChangeCallback = "LevelChanged"
	int32 m_nLevel;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNetworkChangeCallback = "CurrenciesChanged"
	int32[6] m_nCurrencies;
	// MNetworkEnable
	int32[6] m_nSpentCurrencies;
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "RespawnTimeChanged"
	GameTime_t m_flRespawnTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "InRegenZoneChanged"
	bool m_bInRegenerationZone;
	// MNetworkEnable
	// MNetworkChangeCallback = "InItemShopZoneChanged"
	bool m_bInItemShopZone;
	// MNetworkEnable
	// MNetworkChangeCallback = "InHideoutZoneChanged"
	bool m_bInHideoutZone;
	// MNetworkEnable
	GameTime_t m_timeRevealedOnMinimapByNPC;
	// MNetworkEnable
	// MNetworkChangeCallback = "ItemSellPriceChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems;
	// MNetworkEnable
	// MNetworkChangeCallback = "AbilityUpgradeSellPriceChanged"
	C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades;
	// MNetworkEnable
	// MNetworkChangeCallback = "QuickbuyChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue;
	// MNetworkEnable
	// MNetworkChangeCallback = "QuickbuyChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue;
	// MNetworkEnable
	// MNetworkChangeCallback = "QuickbuyPurchaseRequestChanged"
	CUtlStringToken m_unQuickbuyAutoPurchaseRequest;
	// MNetworkEnable
	bool m_bQuickbuyAutoPurchase;
	// MNetworkEnable
	bool m_bQuickbuyAutoQueueBuild;
	// MNetworkEnable
	bool m_bHasQuickbuyBeenUsed;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems;
	// MNetworkEnable
	HeroBuildID_t m_unHeroBuildID;
	// MNetworkEnable
	// MNetworkChangeCallback = "HeroBuildChanged"
	CUtlString m_sHeroBuildSerialized;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntityForObserver;
	// MNetworkEnable
	bool m_bNetworkDisconnected;
	// MNetworkEnable
	bool m_bLearningAbility;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnFlashStartChanged"
	int32 m_nFlashStartTick;
	// MNetworkEnable
	int32 m_nFlashMaxStartTick;
	// MNetworkEnable
	int32 m_nFlashFadeStartTick;
	// MNetworkEnable
	int32 m_nFlashEndTick;
	// MNetworkEnable
	int8 m_nFlashMaxAlpha;
	// MNetworkEnable
	int32 m_nDeducedLane;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEnemyPlayerAimTarget;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool[4] m_arrPreventAbilityLearning;
	// MNetworkEnable
	// MNetworkChangeCallback = "ItemDraftRoundChanged"
	ItemDraftRoundState_t m_ItemDraftRoundState;
	// MNetworkEnable
	CCitadelRecentDamage m_sInCombat;
	// MNetworkEnable
	CCitadelRecentDamage m_sPlayerDamageTaken;
	// MNetworkEnable
	CCitadelRecentDamage m_sPlayerDamageDealt;
	// MNetworkEnable
	int8 m_nSuccessiveDucks;
	// MNetworkEnable
	GameTime_t m_flLastDuckTime;
	// MNetworkEnable
	bool m_bDismissedReportCard;
	// MNetworkEnable
	float32 m_flCurrentHealingAmount;
	// MNetworkEnable
	QAngle m_angLockedEyeAngles;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelHeroComponent"
	// MNetworkAlias = "CCitadelHeroComponent"
	// MNetworkTypeAlias = "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent;
	float32 m_flRichPresenceUpdateInterval;
	// MNetworkEnable
	bool m_bAnimGraphMovementClipped;
	// MNetworkEnable
	bool m_bAnimGraphMovementDisableGravity;
	// MNetworkEnable
	bool m_bAnimGraphMovementDirectAirControl;
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedStart;
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedEnd;
	// MNetworkEnable
	float32 m_flPredSlowSpeed;
	// MNetworkEnable
	GameTime_t[4] m_flTimeSlowedStart;
	// MNetworkEnable
	GameTime_t[4] m_flTimeSlowedEnd;
	// MNetworkEnable
	float32[4] m_flSlowSpeed;
	// MNetworkEnable
	GameTime_t m_flForceInCombatAnimsUntilTime;
	int32 m_iCurSlowSlot;
	bool m_bLocoLeanTriggeredForDirection;
	bool m_bLocoRunToStopCanTrigger;
	float32 m_flCrouchFraction;
	float32 m_flCrouchSpeed;
	GameTime_t m_fidgetTime;
	Vector m_vShootTestOffsetStanding;
	Vector m_vShootTestOffsetCrouching;
	GameTime_t m_leanStartTime;
	// MNetworkEnable
	uint8 m_nAudioEnclosure;
	// MNetworkEnable
	bool m_bAudioHasSkyExposure;
};
