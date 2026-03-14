class CNPCSpawnDestination : public CPointEntity
{
	float32 m_ReuseDelay;
	CUtlSymbolLarge m_RenameNPC;
	GameTime_t m_TimeNextAvailable;
	CEntityIOOutput m_OnSpawnNPC;
};
