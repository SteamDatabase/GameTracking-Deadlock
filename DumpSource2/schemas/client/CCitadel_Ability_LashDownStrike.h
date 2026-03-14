// MNetworkVarNames = "Vector m_vStrikeVel"
// MNetworkVarNames = "float m_flInitialYaw"
// MNetworkVarNames = "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
	GameTime_t m_ImpactTime;
	Vector m_vDamagePos;
	ParticleIndex_t m_PreviewEffect;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStrikeVel;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flInitialYaw;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flStartHeight;
};
