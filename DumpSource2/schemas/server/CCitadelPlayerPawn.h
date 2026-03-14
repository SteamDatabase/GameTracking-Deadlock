// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkExcludeByName = "m_baseLayer.m_hSequence"
// MNetworkExcludeByUserGroup = "m_flCycle"
// MNetworkExcludeByName = "m_flEncodedController"
// MNetworkExcludeByName = "m_flPoseParameter"
// MNetworkUserGroupProxy = "CCitadelPlayerPawn"
// MNetworkUserGroupProxy = "CCitadelPlayerPawn"
// MNetworkVarTypeOverride = "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName = "m_pCameraServices"
// MNetworkVarTypeOverride = "CCitadelPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName = "m_pMovementServices"
// MNetworkVarNames = "QAngle m_angClientCamera"
// MNetworkVarNames = "QAngle m_angEyeAngles"
// MNetworkVarNames = "QAngle m_angLockedEyeAngles"
// MNetworkVarNames = "int32 m_nLevel"
// MNetworkVarNames = "int32 m_nCurrencies"
// MNetworkVarNames = "int32 m_nSpentCurrencies"
// MNetworkVarNames = "GameTime_t m_flRespawnTime"
// MNetworkVarNames = "GameTime_t m_flLastSpawnTime"
// MNetworkVarNames = "bool m_bInRegenerationZone"
// MNetworkVarNames = "bool m_bInItemShopZone"
// MNetworkVarNames = "bool m_bInHideoutZone"
// MNetworkVarNames = "GameTime_t m_timeRevealedOnMinimapByNPC"
// MNetworkVarNames = "EntitySubclassID_t m_vecFullSellPriceItems"
// MNetworkVarNames = "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
// MNetworkVarNames = "EntitySubclassID_t m_vecQuickbuyQueue"
// MNetworkVarNames = "EntitySubclassID_t m_vecQuickbuySellQueue"
// MNetworkVarNames = "bool m_bQuickbuyAutoPurchase"
// MNetworkVarNames = "AbilityID_t m_unQuickbuyAutoPurchaseRequest"
// MNetworkVarNames = "bool m_bQuickbuyAutoQueueBuild"
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
// MNetworkVarNames = "ItemDraftRoundState_t m_ItemDraftRoundState"
// MNetworkVarNames = "bool m_bDismissedReportCard"
// MNetworkVarNames = "float m_flCurrentHealingAmount"
// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames = "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
// MNetworkVarNames = "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "CCitadelRecentDamage m_sInCombat"
// MNetworkVarNames = "CCitadelRecentDamage m_sPlayerDamageTaken"
// MNetworkVarNames = "CCitadelRecentDamage m_sPlayerDamageDealt"
// MNetworkVarNames = "CMsgLaneColor m_eZipLineLaneColor"
// MNetworkVarNames = "int8 m_nSuccessiveDucks"
// MNetworkVarNames = "GameTime_t m_flLastDuckTime"
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
// MNetworkVarNames = "bool m_arrPreventAbilityLearning"
// MNetworkVarNames = "uint8 m_nAudioEnclosure"
// MNetworkVarNames = "bool m_bAudioHasSkyExposure"
class CCitadelPlayerPawn : public CCitadelPlayerPawnBase
{
	int32[45] m_arrGoldSources;
	// MNetworkEnable
	// MNetworkUserGroup = "SourceTVExclusive"
	// MNetworkBitCount = 11
	// MNetworkPriority = 32
	QAngle m_angClientCamera;
	// MNetworkEnable
	// MNetworkUserGroup = "RemotePlayersOnly"
	// MNetworkEncoder = "qangle"
	// MNetworkBitCount = 11
	// MNetworkPriority = 32
	QAngle m_angEyeAngles;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	QAngle m_angLockedEyeAngles;
	// MNetworkEnable
	int32 m_nLevel;
	// MNetworkEnable
	int32[6] m_nCurrencies;
	// MNetworkEnable
	int32[6] m_nSpentCurrencies;
	// MNetworkEnable
	GameTime_t m_flRespawnTime;
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	bool m_bInRegenerationZone;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bInItemShopZone;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bInHideoutZone;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	GameTime_t m_timeRevealedOnMinimapByNPC;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuyQueue;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecQuickbuySellQueue;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	bool m_bQuickbuyAutoPurchase;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CUtlStringToken m_unQuickbuyAutoPurchaseRequest;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	bool m_bQuickbuyAutoQueueBuild;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecRestrictedToItems;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	HeroBuildID_t m_unHeroBuildID;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CUtlString m_sHeroBuildSerialized;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CHandle< CBaseEntity > m_hViewEntityForObserver;
	// MNetworkEnable
	bool m_bNetworkDisconnected;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bLearningAbility;
	// MNetworkEnable
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
	// MNetworkUserGroup = "RemotePlayersOnly"
	// MNetworkPriority = 32
	CHandle< CBaseEntity > m_hEnemyPlayerAimTarget;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	ItemDraftRoundState_t m_ItemDraftRoundState;
	// MNetworkEnable
	bool m_bDismissedReportCard;
	// MNetworkEnable
	float32 m_flCurrentHealingAmount;
	CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	// MNetworkPriority = 32
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelHeroComponent"
	// MNetworkAlias = "CCitadelHeroComponent"
	// MNetworkTypeAlias = "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelRegenComponent"
	// MNetworkAlias = "CCitadelRegenComponent"
	// MNetworkTypeAlias = "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	bool m_bHasShopOpen;
	ECitadelPingLocation_t m_eCurrentPingLocation;
	float32 m_flLastRegenThinkTime;
	float32 m_flCitadelDamageAccumulator;
	int32 m_nBulletsFiredAtUs;
	int32 m_nBulletsHitOnUs;
	int32 m_nHeadshotsOnUs;
	GameTime_t m_flLastGameStatsRecorded;
	float32 m_flUnusedGoldRemainder;
	float32 m_flUnusedAbilityRemainder;
	int32 m_nBulletsFiredAtEnemyHeroes;
	int32 m_nBulletsHitOnEnemyHeroes;
	int32 m_nHeadshotsOnEnemyHeroes;
	int32 m_nLuckyShotsOnEnemyHeroes;
	int32 m_nBulletsHitOnImmobileEnemyHeroes;
	int32 m_nHeadshotsOnImmobileEnemyHeroes;
	CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime;
	bool m_bHasOverrideSpawnPos;
	Vector m_vecOverrideSpawnPos;
	int32 m_iTrooperWaveEventCount;
	int32 m_iTrooperWaveNumber;
	int32 m_iPrevTrooperWaveEventCount;
	int32 m_iPrevTrooperWaveNumber;
	bool m_bHasStartedPlaying;
	CHandle< CBaseEntity > m_hRevengeTarget;
	GameTime_t m_flLastHurtTimeByEnemyHero;
	GameTime_t m_flLastHurtByNeutral;
	GameTime_t m_flLastHurtByEnemyNPC;
	GameTime_t m_flLastTimeLookedAtByDirector;
	CTakeDamageResult m_ragdollDamage;
	// MNetworkEnable
	CCitadelRecentDamage m_sInCombat;
	// MNetworkEnable
	CCitadelRecentDamage m_sPlayerDamageTaken;
	// MNetworkEnable
	CCitadelRecentDamage m_sPlayerDamageDealt;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CMsgLaneColor m_eZipLineLaneColor;
	bool m_bCanBecomeRagdoll;
	float32 m_blindUntilTime;
	float32 m_blindStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	int8 m_nSuccessiveDucks;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	GameTime_t m_flLastDuckTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bAnimGraphMovementClipped;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDisableGravity;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDirectAirControl;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedStart;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedEnd;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	float32 m_flPredSlowSpeed;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	GameTime_t[4] m_flTimeSlowedStart;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	GameTime_t[4] m_flTimeSlowedEnd;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	float32[4] m_flSlowSpeed;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	GameTime_t m_flForceInCombatAnimsUntilTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool[4] m_arrPreventAbilityLearning;
	int32 m_iCurSlowSlot;
	ParticleIndex_t m_nRespawnParticleIndex;
	ParticleIndex_t m_nShoppingParticle;
	CCitadelPlayerBot* m_pBot;
	bool m_bLocoLeanTriggeredForDirection;
	bool m_bLocoRunToStopCanTrigger;
	float32 m_flCrouchFraction;
	float32 m_flCrouchSpeed;
	GameTime_t m_fidgetTime;
	Vector m_vShootTestOffsetStanding;
	Vector m_vShootTestOffsetCrouching;
	GameTime_t m_leanStartTime;
	GameTick_t m_nLastUnpredictableMovementTick;
	// MNetworkEnable
	// MNetworkUserGroup = "RemotePlayersOnly"
	uint8 m_nAudioEnclosure;
	// MNetworkEnable
	// MNetworkUserGroup = "RemotePlayersOnly"
	bool m_bAudioHasSkyExposure;
};
