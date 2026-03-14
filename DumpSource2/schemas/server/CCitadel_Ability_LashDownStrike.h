// MNetworkVarNames = "Vector m_vStrikeVel"
// MNetworkVarNames = "float m_flInitialYaw"
// MNetworkVarNames = "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility
{
	GameTime_t m_ImpactTime;
	Vector m_vDamagePos;
	Vector m_vDamageDir;
	CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities;
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
