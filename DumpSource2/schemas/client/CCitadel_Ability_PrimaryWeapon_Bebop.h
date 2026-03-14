// MNetworkVarNames = "GameTime_t m_flStartWindUpTime"
// MNetworkVarNames = "GameTime_t m_flStartFiringTime"
// MNetworkVarNames = "bool m_bFiring"
class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon
{
	// MNetworkEnable
	GameTime_t m_flStartWindUpTime;
	// MNetworkEnable
	GameTime_t m_flStartFiringTime;
	// MNetworkEnable
	bool m_bFiring;
};
