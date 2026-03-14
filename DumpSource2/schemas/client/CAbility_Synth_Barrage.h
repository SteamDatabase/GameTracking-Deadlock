// MNetworkVarNames = "GameTime_t m_flNextShootTime"
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
	int32 m_nProjectilesScheduled;
	ParticleIndex_t m_ChannelParticle;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextShootTime;
};
