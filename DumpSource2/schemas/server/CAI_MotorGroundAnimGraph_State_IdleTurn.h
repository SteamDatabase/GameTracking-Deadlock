class CAI_MotorGroundAnimGraph_State_IdleTurn : public CAI_MotorGroundAnimGraph_State
{
	int32 m_eType;
	VectorWS m_vOriginalTargetFacingPosition;
	VectorWS m_vTargetFacingPosition;
	float32 m_flOriginalAngleDelta;
	float32 m_flTurnSpeed;
	bool m_bWasBlockIdleTurnTagActive;
	bool m_bWasBlockIdleTagActive;
};
