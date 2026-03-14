// MNetworkVarNames = "GameTime_t m_timeLastUpdate"
// MNetworkVarNames = "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public C_BaseEntity
{
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNotSaved
	GameTime_t m_timeLastUpdate;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNotSaved
	C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities;
};
