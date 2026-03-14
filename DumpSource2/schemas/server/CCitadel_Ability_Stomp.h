class CCitadel_Ability_Stomp : public CCitadelBaseAbility
{
	Vector m_vStompPos;
	Vector m_vStompDir;
	CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies;
};
