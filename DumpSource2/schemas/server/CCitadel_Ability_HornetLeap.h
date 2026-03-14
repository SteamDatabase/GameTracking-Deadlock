// MNetworkVarNames = "bool m_bLeaping"
// MNetworkVarNames = "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility
{
	// MNetworkEnable
	bool m_bLeaping;
	// MNetworkEnable
	GameTime_t m_flLeapStartTime;
	ParticleIndex_t m_nFXIndex;
	ParticleIndex_t m_TrailFX;
};
