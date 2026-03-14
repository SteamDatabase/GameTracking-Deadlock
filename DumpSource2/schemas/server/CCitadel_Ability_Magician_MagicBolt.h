class CCitadel_Ability_Magician_MagicBolt : public CCitadelBaseAbility
{
	CUtlVector< CHandle< CCitadelProjectile > > m_vecDeployedProjectiles;
	int32 m_iCurrentRedirects;
};
