class CAI_MotorGroundAnimGraph_State_Custom : public CAI_MotorGroundAnimGraph_State
{
	bool m_bFromMovement;
	bool m_bWasMovingOffPath;
	bool m_bRepathed;
	AI_CustomMoveRequest m_request;
};
