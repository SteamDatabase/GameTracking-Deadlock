// MNetworkVarNames = "CCitadelAutoScaledTime m_flFlurryEndTime"
// MNetworkVarNames = "GameTime_t m_flNextAttackTime"
class CCitadel_Ability_BulletFlurry : public CCitadelBaseAbility
{
	// MNetworkEnable
	CCitadelAutoScaledTime m_flFlurryEndTime;
	// MNetworkEnable
	GameTime_t m_flNextAttackTime;
	CUtlVector< CHandle< CBaseEntity > > m_vecShootTargets;
	int32 m_nNumPlayersKilled;
	int32 m_nShootIndex;
	int32 m_nShootIndexNPC;
	int32 m_nBurstShots;
	bool m_bHasCameraOverride;
};
