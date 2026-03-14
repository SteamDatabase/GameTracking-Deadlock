class CCitadel_Modifier_Tier3Boss_LaserBeam : public CCitadel_Modifier_Tier3Boss_Base
{
	Vector m_vStart;
	Vector m_vEnd;
	Vector m_vPrevEnd;
	float32 m_flAngleBetweenTrace;
	GameTime_t m_flNextDamageTick;
	GameTime_t m_flNextAuraDropTick;
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit;
	GameTime_t m_flLastShakeTime;
	Vector m_vecBeamTarget;
	GameTime_t m_flLastBeamUpdateTime;
	Vector m_vecEnemyPosition;
	bool m_bPreviewMode;
	int32 m_iAttachmentIndex;
	AttachmentHandle_t m_hAttachment;
};
