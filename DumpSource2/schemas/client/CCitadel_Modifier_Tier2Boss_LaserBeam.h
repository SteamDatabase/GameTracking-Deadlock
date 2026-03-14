class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier
{
	bool m_bPreview;
	float32 m_flYaw;
	int32 m_iEnemy;
	CHandle< C_BaseEntity > m_hCurrentEnemy;
	AttachmentHandle_t m_hLaserAttachPoint;
	AttachmentHandle_t m_hLaserAttachPoint02;
	AttachmentHandle_t m_hLaserSearchStartPos;
	GameTime_t m_flSoundStartTime;
	VectorWS m_vStart;
	VectorWS m_vEnd;
	VectorWS m_vPrevEnd;
	float32 m_flAngleBetweenTrace;
	float32 m_flDamagePerTick;
	float32 m_flCreepDamagePerTick;
	GameTime_t m_flNextDamageTick;
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit;
	float32 m_flDamageTickRate;
	GameTime_t m_flLastShakeTime;
	bool m_bSweepRightFirst;
	QAngle m_angBeamAim;
	VectorWS m_vecBeamTarget;
	GameTime_t m_flLastBeamUpdateTime;
	GameTime_t m_flTargetingTaskStartTime;
	float32 m_flTrackVel;
};
