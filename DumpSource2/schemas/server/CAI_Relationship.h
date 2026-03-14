class CAI_Relationship : public CBaseEntity
{
	CUtlSymbolLarge m_iszSubject;
	CUtlSymbolLarge m_iszSubjectClass;
	Class_T m_nSubjectClassifyAs;
	CUtlSymbolLarge m_iszTargetClass;
	Class_T m_nTargetClassifyAs;
	int32 m_iDisposition;
	int32 m_iRank;
	bool m_fStartActive;
	bool m_bIsActive;
	int32 m_iPreviousDisposition;
	float32 m_flRadius;
	int32 m_iPreviousRank;
	bool m_bReciprocal;
};
