class AI_NavGoal_t
{
	NavGoalType_t m_type;
	CRelativeLocation m_navLocation;
	float32 m_flGoalBlockedTolerance;
	float32 m_flPathEndGoalRange;
	float32 m_flPathEndGoalRange_Repathing;
	AI_NavGoalFlags_t m_goalFlags;
	CHandle< CBaseEntity > m_pTarget;
	VectorWS m_vThreatPos;
	float32 m_flMaxPathLength;
	float32 m_flMaxTravelDist;
	float32 m_flMaxTravelDistAdditionalFromRepath;
	CUtlString m_markupTagRequired;
	float32 m_flGoalArrivalTolerance;
	StanceType_t m_eMoveStance;
	StanceType_t m_eArrivalStance;
	float32 m_flArrivalFlyingSpeedScale;
	float32 m_flArrivalDirectionToleranceDot;
	Vector m_vArrivalDirection;
	CGlobalSymbol m_sArrivalMovementGaitSet;
};
