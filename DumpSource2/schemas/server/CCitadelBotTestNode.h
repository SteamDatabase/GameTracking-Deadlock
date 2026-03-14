class CCitadelBotTestNode : public CServerOnlyPointEntity
{
	EBotTestNodeType m_eNodeType;
	CUtlSymbolLarge m_sNextNode;
	CUtlSymbolLarge m_sShootTarget;
	// MNotSaved
	CHandle< CCitadelBotTestNode > m_hNextNode;
	// MNotSaved
	CHandle< CCitadelBotTestNode > m_hShootTarget;
	// MNotSaved
	CHandle< CCitadelPlayerPawn > m_hLockingEntity;
};
