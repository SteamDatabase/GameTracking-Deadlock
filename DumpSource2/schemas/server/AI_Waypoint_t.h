// MGetKV3ClassDefaults = null
class AI_Waypoint_t
{
	VectorWS m_vPos;
	WaypointFlags_t m_fWaypointFlags;
	Navigation_t m_nWpType;
	float32 m_flYaw;
	float32 m_flBoundaryDist;
	float32 m_flPathDistGoal;
	CHandle< CBaseEntity > m_hPathCorner;
	CHandle< CBaseEntity > m_hData;
	uint32 m_nGroundNavAreaId;
	uint32 m_nNavLinkAreaId;
	uint32 m_nNavBlockId;
	NavGravity_t m_gravityOverride;
	bool m_bGravityOverrideSet;
	uint32 m_nConstrainedToMovableMeshId;
};
