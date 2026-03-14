// MNetworkVarNames = "bool m_bLeaping"
// MNetworkVarNames = "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility
{
	// MNetworkEnable
	bool m_bLeaping;
	// MNetworkEnable
	GameTime_t m_flLeapStartTime;
	ParticleIndex_t m_nFXIndex;
};
