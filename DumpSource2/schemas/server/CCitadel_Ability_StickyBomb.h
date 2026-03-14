// MNetworkVarNames = "EHANDLE m_hAutoTarget"
// MNetworkVarNames = "GameTime_t m_flHookEndTime"
// MNetworkVarNames = "float m_flBombBonusHits"
// MNetworkVarNames = "float m_flBombBonusKills"
class CCitadel_Ability_StickyBomb : public CCitadelBaseAbility
{
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAutoTarget;
	// MNetworkEnable
	GameTime_t m_flHookEndTime;
	// MNetworkEnable
	float32 m_flBombBonusHits;
	// MNetworkEnable
	float32 m_flBombBonusKills;
};
