// MNetworkVarNames = "GameTime_t m_tTetherAttachTime"
// MNetworkVarNames = "GameTime_t m_tTetherBreakTime"
// MNetworkVarNames = "bool m_bHasTetherTarget"
class CCitadel_Ability_Necro_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon
{
	// MNetworkEnable
	GameTime_t m_tTetherAttachTime;
	// MNetworkEnable
	GameTime_t m_tTetherBreakTime;
	// MNetworkEnable
	bool m_bHasTetherTarget;
};
