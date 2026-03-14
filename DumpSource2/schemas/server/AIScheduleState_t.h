class AIScheduleState_t
{
	int32 m_nCurTask;
	TaskStatus_t m_nTaskStatus;
	GameTime_t m_flTimeStarted;
	GameTime_t m_flTimeCurTaskStarted;
	AI_TaskFailureCode_t m_taskFailureCode;
	bool m_bScheduleWasInterrupted;
};
