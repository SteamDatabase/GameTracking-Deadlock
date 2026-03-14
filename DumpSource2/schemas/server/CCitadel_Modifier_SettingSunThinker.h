class CCitadel_Modifier_SettingSunThinker : public CCitadelModifier
{
	float32 m_flTickInterval;
	float32 m_flRadius;
	float32 m_CenterRadius;
	float32 m_CenterDamage;
	float32 m_OuterDamage;
	float32 m_StunDuration;
	float32 m_TargetingDuration;
	float32 m_ShootDuration;
	bool m_bTargetingCompleted;
	bool m_bSecondHit;
	bool m_bTwoHits;
};
