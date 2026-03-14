// MNetworkVarNames = "bool m_bSprinting"
// MNetworkVarNames = "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public C_CitadelBaseAbility
{
	ParticleIndex_t m_nSprintParticle;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnSprintingChanged"
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSprinting;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSprintStartTime;
	bool m_bInCombat;
};
