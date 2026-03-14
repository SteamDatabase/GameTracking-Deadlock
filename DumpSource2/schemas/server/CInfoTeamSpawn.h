class CInfoTeamSpawn : public CServerOnlyPointEntity
{
	bool m_bIntroSpawn;
	int32 m_iLaneNum;
	CUtlSymbolLarge m_strGroupTag;
	// MNotSaved
	CHandle< CBaseEntity > m_hAssignedPlayer;
};
