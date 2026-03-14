class CAI_EnemyServices : public CAI_Component
{
	CHandle< CBaseEntity > m_hEnemy;
	CHandle< CBaseEntity > m_hLastEnemy;
	GameTime_t m_flTimeEnemyAcquired;
	bool m_bHasEnemyAcquired;
	GameTime_t m_flTimeLastHadEnemy;
	bool m_bHasLastHadEnemy;
	int32 m_nEnemiesSerialNumber;
	CHandle< CBaseEntity > m_hEnemyOccluder;
};
