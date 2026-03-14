class CAI_GoalEntity : public CBaseEntity
{
	CUtlSymbolLarge m_iszActor;
	CUtlSymbolLarge m_iszGoal;
	bool m_fStartActive;
	CAI_GoalEntity::SearchType_t m_SearchType;
	CUtlSymbolLarge m_iszConceptModifiers;
	CUtlVector< CHandle< CAI_BaseNPC > > m_actors;
	CHandle< CBaseEntity > m_hGoalEntity;
	uint32 m_flags;
};
