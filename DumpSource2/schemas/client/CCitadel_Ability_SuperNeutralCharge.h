// MNetworkVarNames = "bool m_bPreparing"
// MNetworkVarNames = "bool m_bTackling"
// MNetworkVarNames = "GameTime_t m_flTackleStartTime"
// MNetworkVarNames = "float m_flTackleDuration"
// MNetworkVarNames = "Vector m_vecTackleDir"
class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility
{
	// MNetworkEnable
	bool m_bPreparing;
	// MNetworkEnable
	bool m_bTackling;
	// MNetworkEnable
	GameTime_t m_flTackleStartTime;
	// MNetworkEnable
	float32 m_flTackleDuration;
	// MNetworkEnable
	Vector m_vecTackleDir;
	Vector m_vecLastPosition;
	int32 m_nStuckFramesCount;
	CUtlVector< CEntityIndex > m_vecHitEnemies;
	GameTime_t m_flPrepareStartTime;
	ParticleIndex_t m_nDistancePreview;
};
