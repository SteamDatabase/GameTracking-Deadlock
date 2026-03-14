class CCitadelTrackedProjectile : public CCitadelProjectile
{
	ETrackedProjectileTarget_t m_eTrackedTargetType;
	CHandle< CBaseEntity > m_hTarget;
	GameTime_t m_flTrackingStartTime;
	float32 m_flTrackingDampingCoefficient;
	float32 m_flTrackingSpeed;
	float32 m_flTrackingDuration;
	GameTime_t m_flTrackingWindowStart;
	GameTime_t m_flTrackingWindowEnd;
	Vector m_vLastValidPosition;
};
