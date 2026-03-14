// MNetworkVarNames = "EHANDLE m_hWasAttachedTo"
// MNetworkVarNames = "VectorWS m_vAuraPosition"
class CCitadel_Ability_Familiar_Spotlight : public C_CitadelBaseAbility
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hWasAttachedTo;
	// MNetworkEnable
	VectorWS m_vAuraPosition;
};
