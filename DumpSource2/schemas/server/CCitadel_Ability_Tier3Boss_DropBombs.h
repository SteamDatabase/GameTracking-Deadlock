class CCitadel_Ability_Tier3Boss_DropBombs : public CTier3BossAbility
{
	GameTime_t m_tNextBombTime;
	CUtlVector< CHandle< CBaseEntity > > m_vHitTargets;
	AttachmentHandle_t m_hShootPos;
	float32 m_flDetonationTime;
};
