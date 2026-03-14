// MNetworkVarNames = "bool m_bIsRolling"
// MNetworkVarNames = "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames = "EViscousBowlingBallState_t m_eRollingState"
// MNetworkVarNames = "GameTime_t m_flNextStateTime"
// MNetworkVarNames = "GameTime_t m_flNextWallCheck"
// MNetworkVarNames = "GameTime_t m_flRollStartTime"
// MNetworkVarNames = "GameTime_t m_flWallExitTime"
// MNetworkVarNames = "Vector m_vecWallExitVelocity"
class CCitadel_Ability_GooBowlingBall : public CCitadelBaseAbility
{
	int32 m_nAirJumpsLeft;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkChangeCallback = "OnIsRollingChanged"
	bool m_bIsRolling;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CCitadelViscousBall > m_hBall;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	EViscousBowlingBallState_t m_eRollingState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextStateTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextWallCheck;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flRollStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flWallExitTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecWallExitVelocity;
};
