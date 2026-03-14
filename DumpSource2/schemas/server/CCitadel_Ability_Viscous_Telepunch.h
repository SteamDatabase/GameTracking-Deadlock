// MNetworkVarNames = "Vector m_vecTeleportPosition"
// MNetworkVarNames = "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames = "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames = "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
	// MNetworkEnable
	Vector m_vecTeleportPosition;
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal;
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState;
	// MNetworkEnable
	GameTime_t m_flNextStateTime;
};
