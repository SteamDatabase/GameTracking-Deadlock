// MNetworkVarNames = "float m_flFloat"
// MNetworkVarNames = "int m_nLightningStrikesRemaining"
class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility
{
	ParticleIndex_t m_nTargetingParticleIndex;
	// MNetworkEnable
	float32 m_flFloat;
	// MNetworkEnable
	int32 m_nLightningStrikesRemaining;
};
