class CAI_Scheduler : public CAI_Component
{
	AIScheduleState_t m_ScheduleState;
	// MNotSaved
	CUtlSymbolLarge m_failSchedule;
	// MNotSaved
	CUtlSymbolLarge m_translatedSchedule;
	// MNotSaved
	CUtlSymbolLarge m_untranslatedSchedule;
	// MNotSaved
	CUtlString m_sInterruptText;
};
