// MNetworkVarNames = "PG_RisingRamState m_eState"
// MNetworkVarNames = "GameTime_t m_tStateStartTime"
// MNetworkVarNames = "float m_flGoingUpTargetElevation"
// MNetworkVarNames = "float m_flGoingUpStartElevation"
class CCitadel_Ability_PunkGoat_GoatFlip : public CCitadelBaseAbility
{
	// MNetworkEnable
	PG_RisingRamState m_eState;
	// MNetworkEnable
	GameTime_t m_tStateStartTime;
	// MNetworkEnable
	float32 m_flGoingUpTargetElevation;
	// MNetworkEnable
	float32 m_flGoingUpStartElevation;
};
