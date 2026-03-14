class CCitadel_Projectile_BloodBomb : public CCitadelProjectile
{
	bool m_bSecondBomb;
	int32 m_nBeepSoundBuildupCount;
	float32 m_flBeepSoundIntervalBias;
	float32 m_flBeepSoundMaxFrequency;
	float32 m_flArmingDuration;
	CUtlVector< float32 > m_vecBeepIntervals;
};
