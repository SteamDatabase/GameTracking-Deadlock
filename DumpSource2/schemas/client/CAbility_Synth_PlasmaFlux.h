// MNetworkVarNames = "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
	bool m_bTeleported;
	GameTime_t m_flProjectileLaunchTime;
	GameTime_t m_flProjectileExpireTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile;
};
