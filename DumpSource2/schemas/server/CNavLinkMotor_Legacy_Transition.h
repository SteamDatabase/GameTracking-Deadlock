class CNavLinkMotor_Legacy_Transition
{
	AIMotorTransitionState_t m_nTransitionState;
	VectorWS m_vNavLinkStartPos;
	GameTime_t m_flNavLinkFaceStartTime;
	bool m_bTransitionAnimgraphHasTicked;
	bool m_bIsTurning;
	bool m_bIsFromMovement;
	CGlobalSymbol m_strMovementName;
	CHandle< CAI_BaseNPC > m_hNPC;
};
