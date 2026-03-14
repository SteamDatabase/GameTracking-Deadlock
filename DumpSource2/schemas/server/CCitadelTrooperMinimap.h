// MNetworkVarNames = "GameTime_t m_timeLastUpdate"
// MNetworkVarNames = "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public CBaseEntity
{
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNotSaved
	GameTime_t m_timeLastUpdate;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNotSaved
	CUtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities;
};
