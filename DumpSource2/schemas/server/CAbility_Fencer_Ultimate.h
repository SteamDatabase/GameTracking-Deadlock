// MNetworkVarNames = "Vector m_vStartPosition"
// MNetworkVarNames = "Vector m_vDashDirection"
// MNetworkVarNames = "Vector m_vecLastPosition"
// MNetworkVarNames = "EFencerUltState_t m_eUltState"
// MNetworkVarNames = "GameTime_t m_flStateStartTime"
class CAbility_Fencer_Ultimate : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashDirection;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecLastPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	EFencerUltState_t m_eUltState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStateStartTime;
	bool m_bHitSomeone;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes;
	GameTime_t m_flStuckTime;
	ParticleIndex_t m_UltHoldVFX;
	ParticleIndex_t m_DirPreviewVFX;
};
