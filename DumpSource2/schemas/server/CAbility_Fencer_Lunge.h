// MNetworkVarNames = "uint8 m_nCurrentLungeState"
// MNetworkVarNames = "GameTime_t m_flStateStartTime"
// MNetworkVarNames = "Vector m_vDashStartPos"
// MNetworkVarNames = "Vector m_vDashDirection"
// MNetworkVarNames = "Vector m_vLookDirection"
// MNetworkVarNames = "Vector m_vStrikeDirection"
// MNetworkVarNames = "bool m_bStartedInAir"
// MNetworkVarNames = "uint8 m_iRemainingCasts"
// MNetworkVarNames = "GameTime_t m_RecastEndTime"
// MNetworkVarNames = "uint8 m_eLungeDirection"
// MNetworkVarNames = "int m_nPowerLevel"
class CAbility_Fencer_Lunge : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	uint8 m_nCurrentLungeState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStateStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashStartPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashDirection;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vLookDirection;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStrikeDirection;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bStartedInAir;
	// MNetworkEnable
	uint8 m_iRemainingCasts;
	// MNetworkEnable
	GameTime_t m_RecastEndTime;
	// MNetworkEnable
	uint8 m_eLungeDirection;
	float32 m_flHeldTime;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies;
	Vector m_vLastPosition;
	GameTime_t m_flStuckTime;
	ParticleIndex_t m_nGlintParticleIndex;
	float32 m_flLastOuterCircleProgress;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nPowerLevel;
};
