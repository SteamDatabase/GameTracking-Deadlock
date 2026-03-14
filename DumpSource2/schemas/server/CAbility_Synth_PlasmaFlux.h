// MNetworkVarNames = "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility
{
	bool m_bTeleported;
	CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList;
	Vector m_vLastValidTeleportPosition;
	GameTime_t m_flProjectileLaunchTime;
	GameTime_t m_flProjectileExpireTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile;
};
