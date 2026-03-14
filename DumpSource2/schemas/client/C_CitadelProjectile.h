// MNetworkIncludeByName = "m_flTimeScale"
// MNetworkOverride = "m_flTimeScale"
// MNetworkOverride = "m_flTimeScale"
// MNetworkVarNames = "Vector m_vInitialVelocity"
// MNetworkVarNames = "VectorWS m_vInitialPosition"
// MNetworkVarNames = "AbilityID_t m_abilityID"
// MNetworkVarNames = "string_t m_sParticleName"
// MNetworkVarNames = "Vector m_vecSpawnPosition"
// MNetworkVarNames = "float m_flProjectileSpeed"
// MNetworkVarNames = "float m_flMaxLifetime"
class C_CitadelProjectile : public C_BaseModelEntity
{
	float32 m_flMaxDistance;
	uint64 m_nCachedExcludeFlags;
	bool m_bInPortalEnvironment;
	bool m_bHandlingPortalResult;
	float32 m_flArmingTime;
	float32 m_flChargeAmount;
	bool m_bCollideWithThrower;
	bool m_bNewCollideWithThrower;
	float32 m_flTickSoundInterval;
	// MNetworkEnable
	Vector m_vInitialVelocity;
	// MNetworkEnable
	VectorWS m_vInitialPosition;
	// MNetworkEnable
	CUtlStringToken m_abilityID;
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName;
	// MNetworkEnable
	Vector m_vecSpawnPosition;
	// MNetworkEnable
	float32 m_flProjectileSpeed;
	// MNetworkEnable
	float32 m_flMaxLifetime;
	// MNetworkEnable
	// MNetworkChangeCallback = "ParticleRadiusChanged"
	float32 m_flParticleRadius;
	float32 m_flPreviousTimeScale;
};
