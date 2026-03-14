// MNetworkVarNames = "uint8 m_nState"
// MNetworkVarNames = "AirheartLockOnTarget_t m_vecMarks"
class CCitadel_Ability_Airheart_ChargeBlast : public CCitadelBaseAbility
{
	// MNetworkEnable
	uint8 m_nState;
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< AirheartLockOnTarget_t > m_vecMarks;
};
