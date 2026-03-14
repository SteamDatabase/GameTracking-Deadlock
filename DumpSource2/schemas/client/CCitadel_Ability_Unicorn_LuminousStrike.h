// MNetworkVarNames = "GameTime_t m_vecNextExplosionTime"
// MNetworkVarNames = "Vector m_vecNextExplosionLocation"
class CCitadel_Ability_Unicorn_LuminousStrike : public C_CitadelBaseAbility
{
	GameTime_t m_flLastStackChangeTime;
	int32 m_nLastStackCount;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	C_NetworkUtlVectorBase< GameTime_t > m_vecNextExplosionTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	C_NetworkUtlVectorBase< Vector > m_vecNextExplosionLocation;
	int32 m_nStackCount;
	bool m_bPendingStackUpdate;
};
