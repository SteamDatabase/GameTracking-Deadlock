class CAI_FacingServices : public CAI_Component
{
	CAI_InterestTarget[10] m_pEntityFacingRequests;
	AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority;
	AI_Strafing_t[7] m_strafingRequests;
	bool[2] m_pEnableForceFacing;
	// MNotSaved
	uint8 m_nEntityFacingLockCount;
	// MNotSaved
	CUtlVector< ChoreoEntityFacing_t > m_vecChoreoEntityFacings;
	// MNotSaved
	bool m_bFailedTargetValidation;
};
