class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier
{
	int32 m_MaxHealth;
	GameTime_t m_flLastAttackedTime;
	ParticleIndex_t m_nActiveShieldEffect;
	bool m_bIsActive;
	GameTime_t m_tActivationTime;
};
