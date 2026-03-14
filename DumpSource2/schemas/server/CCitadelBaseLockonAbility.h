// MNetworkVarNames = "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames = "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CUtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets;
	// MNetworkEnable
	GameTime_t m_LockOnStartTime;
};
