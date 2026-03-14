// MNetworkVarNames = "CCitadelAutoScaledTime m_flFlurryEndTime"
// MNetworkVarNames = "GameTime_t m_flNextAttackTime"
class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility
{
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime;
	// MNetworkEnable
	GameTime_t m_flNextAttackTime;
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets;
	int32 m_nNumPlayersKilled;
	int32 m_nShootIndex;
	int32 m_nShootIndexNPC;
	int32 m_nBurstShots;
	SatVolumeIndex_t m_nSatVolumeIndex;
	bool m_bHasCameraOverride;
};
