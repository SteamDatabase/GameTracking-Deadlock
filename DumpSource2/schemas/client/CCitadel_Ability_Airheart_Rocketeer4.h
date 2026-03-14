// MNetworkVarNames = "Vector m_vImpulseDirection"
// MNetworkVarNames = "Vector m_vVelocity"
// MNetworkVarNames = "Vector m_vThrustingVelocity"
// MNetworkVarNames = "GameTime_t m_tStateEnterTime"
// MNetworkVarNames = "ERocketeerState m_eState"
class CCitadel_Ability_Airheart_Rocketeer4 : public C_CitadelBaseAbility
{
	// MNetworkEnable
	Vector m_vImpulseDirection;
	// MNetworkEnable
	Vector m_vVelocity;
	// MNetworkEnable
	Vector m_vThrustingVelocity;
	// MNetworkEnable
	GameTime_t m_tStateEnterTime;
	// MNetworkEnable
	ERocketeerState m_eState;
};
