// MNetworkVarNames = "bool m_bAirCast"
// MNetworkVarNames = "CCitadelAbilityBeam_t m_beam"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
	bool m_bZoomed;
	// MNetworkEnable
	bool m_bAirCast;
	// MNetworkEnable
	CCitadelAbilityBeam_t m_beam;
	float32 m_flAngleBetweenTrace;
	int32 m_nTotalDamage;
	GameTime_t m_flNextDamageTime;
};
