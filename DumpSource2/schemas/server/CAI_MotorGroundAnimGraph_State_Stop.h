class CAI_MotorGroundAnimGraph_State_Stop : public CAI_MotorGroundAnimGraph_State
{
	CRelativeTransform m_target;
	bool m_bPathChanged;
	bool m_bStoppingAtEntry;
};
