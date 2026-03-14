// MNetworkVarNames = "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility
{
	CHandle< CCitadelBulletTimeWarp > m_hWall;
	Vector vecDir;
	ParticleIndex_t m_hChargingParticle;
	VectorWS m_vSpawnPos;
	QAngle m_qAngles;
	// MNetworkEnable
	bool m_bAirCast;
};
