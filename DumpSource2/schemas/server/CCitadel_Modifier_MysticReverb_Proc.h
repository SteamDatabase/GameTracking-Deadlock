class CCitadel_Modifier_MysticReverb_Proc : public CCitadel_Modifier_BaseEventProc
{
	bool m_bNoDeath;
	float32 m_flDamage;
	int32 m_nDamageTick;
	CHandle< CBaseEntity > m_hTarget;
};
