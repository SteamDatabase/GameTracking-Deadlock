class CCitadel_Modifier_Warden_RiotProtocol : public CCitadelModifier
{
	CUtlOrderedMap< CHandle< CBaseEntity >, GameTime_t > m_mapEntToTimeHit;
	int32 m_nNumPlayersAffected;
	int32 m_nNumPlayersKilled;
	QAngle m_playerAngles;
	ParticleIndex_t m_ConeParticle;
};
