class CCitadel_Modifier_DazzlingOrbWatcher : public CCitadelModifier
{
	ShotID_t m_nAssociatedShotID;
	CHandle< CBaseEntity > m_hAssociatedProjectile;
	GameTime_t m_flLastHitTime;
	CHandle< CBaseEntity > m_hLastHitTarget;
	Vector m_vLastHitLocation;
	int32 m_nBouncesRemaining;
	GameTime_t m_flLingerEndTime;
	ParticleIndex_t m_nGraceParticleIndex;
};
