// MNetworkVarNames = "bool m_bHasTurretReady"
// MNetworkVarNames = "int m_iCurrentSwapCount"
// MNetworkVarNames = "GameTime_t m_flTurretExpireTime"
// MNetworkVarNames = "EHANDLE m_pActiveTurret"
class CCitadel_Ability_TurretClone : public CCitadelBaseAbility
{
	// MNetworkEnable
	bool m_bHasTurretReady;
	// MNetworkEnable
	int32 m_iCurrentSwapCount;
	// MNetworkEnable
	GameTime_t m_flTurretExpireTime;
	ShotID_t m_nLastBulletShotID;
	// MNetworkEnable
	CHandle< CBaseEntity > m_pActiveTurret;
	ParticleIndex_t m_nTurretFXIndex;
};
