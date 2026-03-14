class CAI_BehaviorHost
{
	// MNotSaved
	CAI_Behavior* m_pActiveBehavior;
	// MNotSaved
	CUtlVector< CAI_Behavior* > m_Behaviors;
	// MNotSaved
	CAI_BaseNPC* m_pOuter;
	// MNotSaved
	bool m_bCalledBehaviorSelectSchedule;
};
