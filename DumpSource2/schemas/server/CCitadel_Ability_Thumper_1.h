class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities;
	Vector m_vecAimPos;
	Vector m_vecAimNormal;
	float32 m_flPushForce;
};
