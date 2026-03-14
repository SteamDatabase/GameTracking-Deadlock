// MNetworkVarNames = "bool m_bBraceParamTriggered"
// MNetworkVarNames = "float m_flBoostYaw"
// MNetworkVarNames = "Vector m_vecCrashPosition"
// MNetworkVarNames = "Vector m_vecCrashDirection"
// MNetworkVarNames = "ELeapState_t m_eLeapState"
// MNetworkVarNames = "GameTime_t m_flStateEnterTime"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Bull_Leap : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bBraceParamTriggered;
	// MNetworkEnable
	float32 m_flBoostYaw;
	// MNetworkEnable
	Vector m_vecCrashPosition;
	// MNetworkEnable
	Vector m_vecCrashDirection;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnLeapStateChanged"
	ELeapState_t m_eLeapState;
	// MNetworkEnable
	GameTime_t m_flStateEnterTime;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime;
	Vector m_vPrevPos;
	CUtlVector< CHandle< CBaseEntity > > m_vecDraggedEntities;
	Vector m_vecLastVel;
	Vector m_vecCrashDownLastPos;
	bool m_bInputBufferCrash;
};
