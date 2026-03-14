class CCitadelConfigurableTrackedProjectile : public CCitadelProjectile
{
	ETrackedProjectileTarget_t m_eTrackedTargetType;
	CHandle< CBaseEntity > m_hTarget;
	GameTime_t m_flTrackingStartTime;
	Vector m_vLastValidPosition;
	float32 m_flTrackingDuration;
	CCitadelProjectileTrackingParams m_TrackingParams;
};
