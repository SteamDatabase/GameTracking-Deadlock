// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames = "int m_iGravestoneState"
class CCitadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility;
	// MNetworkEnable
	int32 m_iGravestoneState;
	float32 m_flLifetime;
};
