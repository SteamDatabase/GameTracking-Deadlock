class CAI_MotorGroundAnimGraph
{
	CAI_MotorGroundAnimGraph_State_Idle m_stateIdle;
	CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn;
	CAI_MotorGroundAnimGraph_State_Loop m_stateLoop;
	CAI_MotorGroundAnimGraph_State_Start m_stateStart;
	CAI_MotorGroundAnimGraph_State_Stop m_stateStop;
	CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop;
	CAI_MotorGroundAnimGraph_State_Hop m_stateHop;
	CAI_MotorGroundAnimGraph_State_Custom m_stateCustom;
	CAI_MotorGroundAnimGraph_State_CustomMantle m_stateCustomMantle;
	CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn;
	CAI_MotorGroundAnimGraph_State_Other m_stateOther;
	int32 m_nCurrentState;
	float32 m_flDistanceCoveredInCurrentState;
	bool m_bEnableStop;
	bool m_bEnableStart;
	bool m_bHadPath;
	bool m_bEnableAdvancedFeatures;
	bool m_bTeleported;
	bool m_bAllTransitionsBlocked;
	bool m_bIsAG2;
	AI_MotorGroundAnimGraph_Flags_t m_eFlags;
	VectorWS m_vPreviousPosition;
	Vector m_vPreviousMoveDirection;
	float32 m_flCurrentLean;
	float32 m_flCurrentSpeed;
	float32 m_flMovementDesiredHeading;
	RotationVector m_vDesiredMovementHeadingChangeVelocity;
	CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading;
	CMotionTransform m_proceduralRootMotion;
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CAI_GroundLocomotion_GraphController* m_pGraphController;
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CAI_GroundLocomotion_AG1_GraphController* m_pAG1GraphController;
};
