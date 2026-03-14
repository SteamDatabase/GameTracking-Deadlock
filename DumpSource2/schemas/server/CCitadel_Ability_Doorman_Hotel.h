// MNetworkVarNames = "Vector m_vLookTarget"
class CCitadel_Ability_Doorman_Hotel : public CCitadelBaseAbility
{
	CHandle< CBaseEntity > m_hHotelStart;
	CHandle< CBaseEntity > m_hStartRelay;
	bool m_bSpendCooldown;
	// MNetworkEnable
	Vector m_vLookTarget;
};
