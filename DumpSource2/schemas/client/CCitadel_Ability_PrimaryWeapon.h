// MNetworkVarNames = "GameTime_t m_flLastReloadStartTime"
// MNetworkVarNames = "GameTime_t m_flNextPrimaryAttack"
// MNetworkVarNames = "int32 m_iClip"
// MNetworkVarNames = "int32 m_iBonusClip"
// MNetworkVarNames = "int32 m_nNumContinuousShots"
// MNetworkVarNames = "GameTime_t m_flContinuousShotStartTime"
// MNetworkVarNames = "float m_flSpreadPenalty"
// MNetworkVarNames = "GameTime_t m_flZoomTime"
// MNetworkVarNames = "GameTime_t m_flZoomOutTime"
// MNetworkVarNames = "int8 m_iSpreadIndex"
// MNetworkVarNames = "int16 m_nShotRecoilIndex"
// MNetworkVarNames = "GameTime_t m_flNextShotRecoilRecoveryTime"
// MNetworkVarNames = "bool m_bIsZoomed"
// MNetworkVarNames = "uint8 m_nBurstShotsRemaining"
// MNetworkVarNames = "uint32 m_nShotNumber"
// MNetworkVarNames = "bool m_bInReload"
// MNetworkVarNames = "bool m_bSingleShotReloadFirstBullet"
// MNetworkVarNames = "GameTime_t m_reloadQueuedStartTime"
// MNetworkVarNames = "GameTime_t m_flReloadAvailableTime"
// MNetworkVarNames = "bool m_bCanActiveReload"
// MNetworkVarNames = "GameTime_t m_flLastAttackTime"
// MNetworkVarNames = "GameTime_t m_flNextAttackDelayStartTime"
// MNetworkVarNames = "GameTime_t m_flNextAttackDelayEndTime"
// MNetworkVarNames = "float m_flAttackDelayPauseTotalTime"
// MNetworkVarNames = "GameTime_t m_flAttackDelayPauseEndTime"
// MNetworkVarNames = "ENextAttackDelayReason_t m_eNextAttackDelayReason"
// MNetworkVarNames = "bool m_bInputPressedWhileSelected"
// MNetworkVarNames = "EFireMode_t m_eActiveFireMode"
// MNetworkVarNames = "bool m_bPassiveFXActive"
// MNetworkVarNames = "float m_flAmmoFrac"
// MNetworkVarNames = "bool m_bFiredRecently"
class CCitadel_Ability_PrimaryWeapon : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastReloadStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextPrimaryAttack;
	GameTime_t m_flDelayedShotCreateTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer = "minusone"
	// MNetworkPriority = 32
	int32 m_iClip;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer = "minusone"
	// MNetworkPriority = 32
	int32 m_iBonusClip;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkPriority = 32
	int32 m_nNumContinuousShots;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalWeaponExclusive"
	GameTime_t m_flContinuousShotStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flSpreadPenalty;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalWeaponExclusive"
	int8 m_iSpreadIndex;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalWeaponExclusive"
	int16 m_nShotRecoilIndex;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	uint8 m_nBurstShotsRemaining;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	uint32 m_nShotNumber;
	// MNetworkEnable
	bool m_bInReload;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSingleShotReloadFirstBullet;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flReloadAvailableTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanActiveReload;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flAttackDelayPauseTotalTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode;
	// MNetworkEnable
	// MNetworkChangeCallback = "PassiveFXChanged"
	bool m_bPassiveFXActive;
	// MNetworkEnable
	// MNetworkUserGroup = "RemotePlayersOnly"
	// MNetworkChangeCallback = "PassiveFXChanged"
	float32 m_flAmmoFrac;
	// MNetworkEnable
	// MNetworkUserGroup = "RemotePlayersOnly"
	// MNetworkChangeCallback = "PassiveFXChanged"
	bool m_bFiredRecently;
	QAngle m_angRecoilAngles;
	QAngle m_angRecoilToAdd;
	QAngle m_angRecoilRecovery;
	GameTime_t m_flRecoilStartTime;
	float32 m_flRecoilRecoverySpeed;
	float32 m_flAddApproachSpeed;
	float32 m_currentSpread;
	float32 m_currentMaxSpread;
	float32 m_currentFireSpread;
	float32 m_flCurrentSpinRate;
	float32 m_fFireDuration;
	bool m_bFireOnEmpty;
	bool m_bHasReleasedForSemiAuto;
	GameTime_t m_flNextDisarmSound;
	int32 m_nPrimaryMuzzleIndex;
	GameTime_t m_flPrimaryMuzzleResetTime;
	int32 m_nSecondaryMuzzleIndex;
	GameTime_t m_flSecondaryMuzzleResetTime;
	int32 m_nRandomStreak;
	int32 m_nLastUsedMuzzleIndex;
};
