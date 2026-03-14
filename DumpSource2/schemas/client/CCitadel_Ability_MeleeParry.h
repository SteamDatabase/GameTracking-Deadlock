// MNetworkVarNames = "GameTime_t m_flParryStartTime"
// MNetworkVarNames = "bool m_bAttackParried"
// MNetworkVarNames = "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility
{
	ParticleIndex_t m_nActiveFX;
	// MNetworkEnable
	GameTime_t m_flParryStartTime;
	// MNetworkEnable
	bool m_bAttackParried;
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime;
};
