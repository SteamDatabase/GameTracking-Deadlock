// MNetworkIncludeByName = "m_iHealth"
// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames = "int m_eSkullState"
class CNecro_HauntingSkullEntity : public CBaseModelEntity
{
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility;
	// MNetworkEnable
	int32 m_eSkullState;
};
