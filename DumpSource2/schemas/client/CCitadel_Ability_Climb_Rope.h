// MNetworkVarNames = "CNetworkOriginQuantizedVector m_vTop"
// MNetworkVarNames = "CNetworkOriginQuantizedVector m_vBottom"
// MNetworkVarNames = "bool m_bRequestStopClimbing"
// MNetworkVarNames = "bool m_bRequestJumpToRoof"
// MNetworkVarNames = "GameTime_t m_flMoveDownStartTime"
// MNetworkVarNames = "EClimbRopeState_t m_eClimbState"
class CCitadel_Ability_Climb_Rope : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vTop;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vBottom;
	GameTime_t m_flActivatePressTime;
	GameTime_t m_flDisconnectTime;
	GameTime_t m_flClimbStartTime;
	Vector m_vLastPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestStopClimbing;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestJumpToRoof;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flMoveDownStartTime;
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState;
};
