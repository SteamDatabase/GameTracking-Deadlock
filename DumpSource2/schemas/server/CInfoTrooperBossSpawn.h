class CInfoTrooperBossSpawn : public CServerOnlyPointEntity
{
	CUtlSymbolLarge m_strBossEntityName;
	int32 m_iLane;
	int32 m_iCoverGroupID;
	bool m_bReinforcementsOnly;
	bool m_bTrooperTestSpawner;
	CEntityIOOutput m_eventOnTrooperKilled;
};
