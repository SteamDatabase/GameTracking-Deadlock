class CCitadel_Ability_Magician_MagicBolt : public C_CitadelBaseAbility
{
	CUtlVector< CHandle< C_CitadelProjectile > > m_vecDeployedProjectiles;
	int32 m_iCurrentRedirects;
};
