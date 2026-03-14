// MNetworkVarNames = "StanceType_t m_nCurrentStance"
class CAI_Motor : public CAI_Component
{
	// MNotSaved
	float32 m_flMoveInterval;
	float32 m_flYawSpeed;
	Vector m_vMoveVel;
	Vector m_vMoveVelNavigation;
	Vector m_vecAngularVelocity;
	CSimpleSimTimer m_timerFloorPointCached;
	VectorWS m_vFloorPointCached;
	bool m_bFloorPointCachingEnabled;
	bool m_bAllowFlyingAnimMovement;
	float32 m_flSpeed;
	bool m_bMovementActive;
	// MNotSaved
	Vector m_vBoundaryDistCachedPos;
	// MNotSaved
	float32 m_flBoundaryDistCached;
	CAI_MotorGroundAnimGraph m_motorGroundAnimgraph;
	// MNotSaved
	bool m_bIsExecutingMoveSolve;
	CGlobalSymbol[3] m_pMovementGaitSetRequests;
	CGlobalSymbol[4] m_pMovementGaitRequests;
	CGlobalSymbol m_sDesiredMovementGaitSetId;
	CGlobalSymbol m_sDesiredMovementSettingsId;
	MovementGaitId_t m_sDesiredMovementGaitId;
	CGlobalSymbol m_sCurrentMovementGaitSetId;
	CGlobalSymbol m_sCurrentMovementSettingsId;
	MovementGaitId_t m_sCurrentMovementGaitId;
	StanceType_t[3] m_pStanceRequests;
	bool[3] m_bStanceCapabilities;
	bool[3] m_bTemporaryDisabledStances;
	StanceType_t m_nDesiredStance;
	// MNetworkEnable
	StanceType_t m_nCurrentStance;
};
