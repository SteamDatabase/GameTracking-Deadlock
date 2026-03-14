class CAI_LookTarget : public CPointEntity
{
	int32 m_iContext;
	int32 m_iPriority;
	bool m_bDisabled;
	GameTime_t m_flTimeNextAvailable;
	float32 m_flMaxDist;
};
