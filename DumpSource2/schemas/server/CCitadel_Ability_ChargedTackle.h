// MNetworkVarNames = "bool m_bPreparing"
// MNetworkVarNames = "bool m_bTackling"
// MNetworkVarNames = "GameTime_t m_flTackleStartTime"
// MNetworkVarNames = "GameTime_t m_flPrepareStartTime"
// MNetworkVarNames = "Vector m_vecTackleDir"
class CCitadel_Ability_ChargedTackle : public CCitadelBaseAbility
{
	// MNetworkEnable
	bool m_bPreparing;
	// MNetworkEnable
	bool m_bTackling;
	// MNetworkEnable
	GameTime_t m_flTackleStartTime;
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime;
	// MNetworkEnable
	Vector m_vecTackleDir;
	Vector m_vecLastPosition;
	int32 m_nStuckFramesCount;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies;
	ParticleIndex_t m_nDistancePreview;
};
