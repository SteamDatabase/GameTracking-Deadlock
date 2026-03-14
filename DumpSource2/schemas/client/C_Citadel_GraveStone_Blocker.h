// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames = "int m_iGravestoneState"
class C_Citadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity
{
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility;
	// MNetworkEnable
	int32 m_iGravestoneState;
	float32 m_flLifetime;
};
