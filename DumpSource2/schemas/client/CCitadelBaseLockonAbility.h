// MNetworkVarNames = "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames = "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets;
	// MNetworkEnable
	GameTime_t m_LockOnStartTime;
	ParticleIndex_t m_nTargetingLightEffect;
};
