class CAI_Path
{
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CAI_WaypointList m_Waypoints;
	VectorWS m_vPrevWaypoint;
	VectorWS m_vPrevWaypointBase;
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CAI_WaypointList m_WaypointsLocal;
	uint32 m_nLocalPathHash;
	CHandle< CBaseEntity > m_hTarget;
	Vector m_vTargetOffset;
	bool m_bGoalPosSet;
	VectorWS m_vGoalActualPos;
	VectorWS m_vGoalBasePos;
	VectorWS m_vGoalActualPos_Initial;
	VectorWS m_vGoalBasePos_Initial;
	VectorWS m_vGoalPosBlocked;
	NavGravity_t m_GravityAtGoalPos;
	bool m_bGoalTypeSet;
	NavGoalType_t m_goalType;
	AI_NavGoalFlags_t m_goalFlags;
	GameTime_t m_flGoalChangeTime;
	GameTime_t m_flPathChangeTime;
	float32 m_flDistAdvancedToCurWaypoint;
	bool m_bOnMovableNavMesh;
	uint32 m_unGoalActualMovableMeshId;
	uint32 m_unGoalBaseMovableMeshId;
	uint32 m_unPrevWaypointMovableMeshId;
	uint32 m_unPrevWaypointBaseMovableMeshId;
	uint32 m_unGoalActualMovableMeshId_Initial;
	uint32 m_unGoalBaseMovableMeshId_Initial;
	uint32 m_unGoalPosBlockedMovableMeshId;
};
