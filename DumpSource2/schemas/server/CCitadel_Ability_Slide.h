// MNetworkVarNames = "CCitadelAutoScaledTime m_flGroundDashSlideTime"
// MNetworkVarNames = "GameTime_t m_flSlowGetupStartTime"
// MNetworkVarNames = "bool m_bShouldTriggerSlowGetup"
// MNetworkVarNames = "bool m_bWantsSlide"
// MNetworkVarNames = "bool m_bAirborneWhenDuckPressed"
// MNetworkVarNames = "bool m_bIsSliding"
// MNetworkVarNames = "bool m_bSlideIsSticky"
// MNetworkVarNames = "float m_flSpeedAdjust"
// MNetworkVarNames = "GameTime_t m_flDuckPressedTime"
// MNetworkVarNames = "GameTime_t m_flSlideChangeTime"
// MNetworkVarNames = "GameTime_t m_flSlidingOnFlatStartTime"
// MNetworkVarNames = "int m_nJumpsThisSlideSession"
// MNetworkVarNames = "GameTime_t m_flOnGroundStartTime"
// MNetworkVarNames = "GameTime_t m_flDashSlideStartTime"
class CCitadel_Ability_Slide : public CCitadelBaseAbility
{
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashSlideTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlowGetupStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShouldTriggerSlowGetup;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlide;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAirborneWhenDuckPressed;
	// MNetworkEnable
	bool m_bIsSliding;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSlideIsSticky;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flSpeedAdjust;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDuckPressedTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlideChangeTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlidingOnFlatStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nJumpsThisSlideSession;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOnGroundStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashSlideStartTime;
	bool m_bStartedSlideViaProbeSlope;
	ParticleIndex_t m_nSlideEffectIndex;
};
