// MNetworkVarNames = "EHANDLE m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public C_CitadelBaseAbility
{
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecPuddleModifiers;
	GameTime_t m_LastDetonateTime;
};
