// MNetworkVarNames = "uint8 m_nState"
// MNetworkVarNames = "AirheartLockOnTarget_t m_vecMarks"
class CCitadel_Ability_Airheart_ChargeBlast : public C_CitadelBaseAbility
{
	// MNetworkEnable
	uint8 m_nState;
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< AirheartLockOnTarget_t > m_vecMarks;
};
