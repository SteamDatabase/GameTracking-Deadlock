// MNetworkVarNames = "int m_iBonusHealth"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility
{
	GameTime_t m_flLastAttackTime;
	int32 m_nAttackNum;
	// MNetworkEnable
	int32 m_iBonusHealth;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget;
};
