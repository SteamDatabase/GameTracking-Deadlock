// MNetworkIncludeByName = "m_lifeState"
// MNetworkIncludeByName = "m_spawnflags"
// MNetworkVarNames = "NPC_STATE m_NPCState"
// MNetworkVarNames = "CAI_Motor * m_pMotor"
// MNetworkVarNames = "bool m_bFadeCorpse"
// MNetworkVarNames = "bool m_bImportantRagdoll"
class CAI_BaseNPC : public CBaseCombatCharacter
{
	CNPCPhysicsHull m_currentNPCBasePhysicsHull;
	bool m_bCheckContacts;
	bool m_bForceDynamicHull;
	CRelativeLocation m_lastNavLocation;
	float32 m_flLastPositionTolerance;
	CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC;
	CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs;
	// MNetworkEnable
	NPC_STATE m_NPCState;
	NPC_STATE m_nPreModifierNPCState;
	NPC_STATE m_IdealNPCState;
	GameTime_t m_flLastStateChangeTime;
	CAI_Senses* m_pSenses;
	CAI_ScheduleBits m_Conditions;
	CAI_ScheduleBits m_ExistingConditionsAsync;
	CAI_ScheduleBits m_NonGatherConditions;
	CAI_ScheduleBits m_CustomInterruptConditions;
	bool m_bForceConditionsGather;
	bool m_bConditionsGathered;
	bool m_bConditionsGatheredAsync;
	GameTick_t m_nTickGatheredConditions;
	GameTime_t m_flLastTimeIgnited;
	GameTime_t m_flTimeIgnitionStarted;
	// MNotSaved
	bool m_bDoPostRestoreRefindPath;
	CAI_BehaviorHost* m_pBehaviorHost;
	CGlobalSymbol m_sDeathAnim;
	CAI_EnemyServices* m_pEnemyServices;
	CRandStopwatch m_GiveUpOnDeadEnemyTimer;
	CSimpleSimTimer m_FailChooseEnemyTimer;
	GameTime_t m_flAcceptableTimeSeenEnemy;
	bool m_bSkippedChooseEnemy;
	bool m_bIgnoreUnseenEnemies;
	CHandle< CBaseFilter > m_hEnemyFilter;
	CUtlSymbolLarge m_iszEnemyFilterName;
	CHandle< CBaseEntity > m_hTargetEnt;
	bool m_bClearTargetOnScheduleEnd;
	GameTime_t m_flSoundWaitTime;
	int32 m_nSoundPriority;
	bool m_bSuppressFootsteps;
	int32 m_afCapability;
	float32 m_flGroundSpeed;
	GameTime_t m_lastTimeBashedObstacle;
	GameTime_t m_nextMantleTime;
	GameTime_t m_flMoveWaitFinished;
	CHandle< CBaseEntity > m_hOpeningDoor;
	CUnreachableTargetList m_UnreachableTargets;
	CHandle< CBaseEntity > m_hPathObstructor;
	// MNotSaved
	float32 m_flJumpMaxRise;
	// MNotSaved
	float32 m_flJumpMaxDrop;
	// MNotSaved
	float32 m_flJumpMaxDist;
	// MNotSaved
	float32 m_flJumpMinDist;
	CAI_FacingServices* m_pFacingServices;
	CAI_AnimGraphServices* m_pAnimGraphServices;
	bool m_bAnimGraphIsAnimatingDeath;
	// MNotSaved
	bool m_bDeferredNavigation;
	CAI_Scheduler m_Scheduler;
	CAI_Navigator* m_pNavigator;
	CAI_Pathfinder* m_pPathfinder;
	CAI_Pathfinder* m_pPathfinderNet;
	// MNetworkEnable
	CAI_Motor* m_pMotor;
	GameTime_t m_flTimeLastMovement;
	GameTime_t m_flTimeLastFootstep;
	AI_VolumetricEventHandle_t m_hFootstepEvent;
	CSimpleSimTimer m_CheckOnGroundTimer;
	CUtlSymbolLarge m_strNavRestrictionVolume;
	int32 m_afMemory;
	GameTime_t m_flLastAttackTime;
	GameTime_t m_flLastTookDamageTime;
	GameTime_t m_flLastTookDamageFromPlayerTime;
	Vector m_vecLastTookDamageAttackVector;
	CUtlSymbolLarge m_iszSquadName;
	CUtlVector< SquadSlotNPCEntry_t > m_vecMySquadSlots;
	int32 m_nPrevHealthDuringModifyDamage;
	// MNetworkEnable
	bool m_bFadeCorpse;
	// MNetworkEnable
	bool m_bImportantRagdoll;
	bool m_bDidDeathCleanup;
	bool m_bReceivedEnemyDeadNotification;
	GameTime_t m_flWaitFinished;
	bool m_fNoDamageDecal;
	// MNotSaved
	CUtlVector< CHandle< CBaseEntity > >* m_pVecAttachments;
	CEntityIOOutput m_OnDamaged;
	CEntityIOOutput m_OnStartDeath;
	CEntityIOOutput m_OnDeath;
	CEntityIOOutput m_OnQuarterHealth;
	CEntityIOOutput m_OnHalfHealth;
	CEntityIOOutput m_OnThreeQuarterHealth;
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy;
	CEntityIOOutput m_OnLostEnemy;
	CEntityIOOutput m_OnLostPlayer;
	CEntityIOOutput m_OnDamagedByPlayer;
	CEntityIOOutput m_OnDamagedByPlayerSquad;
	CEntityIOOutput m_OnPlayerUse;
	CEntityIOOutput m_OnUse;
	CEntityIOOutput m_OnStartTouchMaterial;
	CEntityIOOutput m_OnEndTouchMaterial;
	CEntityIOOutput m_OnLostEnemyLOS;
	CEntityIOOutput m_OnLostPlayerLOS;
	uint64 m_nAITraceMask;
	bool m_bDynamicAILOD;
	AILOD_t m_aiLOD;
	float32 m_flThinkTime;
	// MNotSaved
	int32 m_nDebugCurIndex;
};
