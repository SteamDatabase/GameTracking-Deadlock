// MNetworkVarNames = "GameTime_t m_flCastTime"
// MNetworkVarNames = "bool m_bCrashingDown"
// MNetworkVarNames = "bool m_bImpulseApplied"
// MNetworkVarNames = "bool m_bCanCrash"
// MNetworkVarNames = "Vector m_vecCrashPosition"
// MNetworkVarNames = "Vector m_vecCrashDirection"
class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots
{
	ParticleIndex_t m_nTargetingParticleIndex;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnCanSlamDownChanged"
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCrashingDown;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bImpulseApplied;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanCrash;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashDirection;
};
