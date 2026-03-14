class CNpcFootSweep : public CBaseTrigger
{
	CUtlVector< FootSweepPusher_t > m_vecPushers;
	bool m_bUseCenterPusher;
	bool m_bUseForwardPusher;
};
