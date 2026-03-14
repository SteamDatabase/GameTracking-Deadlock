// MNetworkIncludeByName = "m_flTimeScale"
// MNetworkExcludeByName = "m_angRotation"
// MNetworkExcludeByName = "m_cellX"
// MNetworkExcludeByName = "m_cellY"
// MNetworkExcludeByName = "m_cellZ"
// MNetworkExcludeByUserGroup = "m_flCycle"
// MNetworkExcludeByName = "m_flEncodedController"
// MNetworkExcludeByName = "m_flPoseParameter"
// MNetworkExcludeByName = "m_flSimulationTime"
// MNetworkExcludeByName = "m_flexWeight"
// MNetworkExcludeByName = "m_nForceBone"
// MNetworkExcludeByName = "m_nHitboxSet"
// MNetworkExcludeByName = "m_baseLayer.m_hSequence"
// MNetworkExcludeByName = "m_vecForce"
// MNetworkExcludeByName = "m_vecMaxs"
// MNetworkExcludeByName = "m_vecMins"
// MNetworkExcludeByName = "m_vecOrigin"
// MNetworkExcludeByName = "m_vecSpecifiedSurroundingMaxs"
// MNetworkExcludeByName = "m_vecSpecifiedSurroundingMins"
// MNetworkExcludeByName = "m_vLookTargetPosition"
// MNetworkExcludeByName = "m_MoveCollide"
// MNetworkExcludeByName = "m_MoveType"
// MNetworkExcludeByName = "m_Gender"
// MNetworkExcludeByName = "m_flElasticity"
// MNetworkExcludeByName = "m_nMinCPULevel"
// MNetworkExcludeByName = "m_nMinGPULevel"
// MNetworkExcludeByName = "m_nMaxCPULevel"
// MNetworkExcludeByName = "m_nMaxGPULevel"
// MNetworkExcludeByName = "m_flNavIgnoreUntilTime"
// MNetworkExcludeByName = "m_ubInterpolationFrame"
// MNetworkExcludeByName = "m_flScale"
// MNetworkExcludeByUserGroup = "overlay_vars"
// MNetworkUserGroupProxy = "CCitadelBaseAbility"
// MNetworkUserGroupProxy = "CCitadelBaseAbility"
// MNetworkOverride = "m_flTimeScale"
// MNetworkVarNames = "bool m_bChanneling"
// MNetworkVarNames = "bool m_bInCastDelay"
// MNetworkVarNames = "bool m_bShouldBeExecuted"
// MNetworkVarNames = "bool m_bCanBeUpgraded"
// MNetworkVarNames = "CitadelStolenAbilitySlot_t m_eStolenInSlot"
// MNetworkVarNames = "int m_nUpgradeBits"
// MNetworkVarNames = "EAbilityBucketType m_iBucketID"
// MNetworkVarNames = "bool m_bToggleState"
// MNetworkVarNames = "GameTime_t m_flCooldownStart"
// MNetworkVarNames = "GameTime_t m_flCooldownEnd"
// MNetworkVarNames = "GameTime_t m_flCastCompletedTime"
// MNetworkVarNames = "GameTime_t m_flChannelStartTime"
// MNetworkVarNames = "GameTime_t m_flCastDelayStartTime"
// MNetworkVarNames = "EAbilitySlots_t m_eAbilitySlot"
// MNetworkVarNames = "GameTime_t m_flPostCastDelayEndTime"
// MNetworkVarNames = "int m_iRemainingCharges"
// MNetworkVarNames = "GameTime_t m_flChargeRechargeStart"
// MNetworkVarNames = "GameTime_t m_flChargeRechargeEnd"
// MNetworkVarNames = "GameTime_t m_flMovementControlActiveTime"
// MNetworkVarNames = "GameTime_t m_flSelectedChangedTime"
// MNetworkVarNames = "GameTime_t m_flAltCastHoldStartTime"
// MNetworkVarNames = "GameTime_t m_flAltCastDoubleTapStartTime"
// MNetworkVarNames = "bool m_bCanBeImbued"
// MNetworkVarNames = "EntitySubclassID_t m_vecImbuedAbilities"
// MNetworkVarNames = "bool m_bSelectionModeIsAltMode"
class CCitadelBaseAbility : public CBaseEntity
{
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers;
	CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier;
	CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier;
	CGlobalSymbol m_strUsedCastGraphParam;
	int32 m_nCastParamNeedsResetTick;
	bool m_bIsCoolingDownInternal;
	GameTime_t m_flCancelMashProtectionEndTime;
	GameTime_t m_flCancelLockoutEndTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnChannelingChanged"
	bool m_bChanneling;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnInCastDelayChanged"
	bool m_bInCastDelay;
	// MNetworkEnable
	bool m_bShouldBeExecuted;
	// MNetworkEnable
	bool m_bCanBeUpgraded;
	// MNetworkEnable
	CitadelStolenAbilitySlot_t m_eStolenInSlot;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnUpgradeBitsChanged"
	// MNetworkPriority = 32
	int32 m_nUpgradeBits;
	// MNetworkEnable
	EAbilityBucketType m_iBucketID;
	// MNetworkEnable
	bool m_bToggleState;
	// MNetworkEnable
	// MNetworkPriority = 32
	GameTime_t m_flCooldownStart;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNetworkChangeCallback = "OnAbilityCooldownEndChanged"
	GameTime_t m_flCooldownEnd;
	// MNetworkEnable
	GameTime_t m_flCastCompletedTime;
	// MNetworkEnable
	GameTime_t m_flChannelStartTime;
	// MNetworkEnable
	GameTime_t m_flCastDelayStartTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnAbilitySlotChanged"
	EAbilitySlots_t m_eAbilitySlot;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flPostCastDelayEndTime;
	// MNetworkEnable
	// MNetworkPriority = 32
	int32 m_iRemainingCharges;
	// MNetworkEnable
	// MNetworkPriority = 32
	GameTime_t m_flChargeRechargeStart;
	// MNetworkEnable
	// MNetworkPriority = 32
	GameTime_t m_flChargeRechargeEnd;
	// MNetworkEnable
	GameTime_t m_flMovementControlActiveTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSelectedChangedTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastHoldStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastDoubleTapStartTime;
	// MNetworkEnable
	bool m_bCanBeImbued;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnAbilityImbuedChanged"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSelectionModeIsAltMode;
	CUtlVector< CHandle< CBaseEntity > > m_vecEnemyHeroesDamaged;
	float32 m_flPreviousEffectiveCooldown;
};
