// MNetworkVarNames = "bool m_bActive"
// MNetworkVarNames = "EHANDLE m_hCurrentTarget"
// MNetworkVarNames = "EHANDLE m_hLastCastTarget"
// MNetworkVarNames = "Vector m_vStartPosition"
// MNetworkVarNames = "Vector m_vDeparturePosition"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames = "bool m_bIsFirstCastCompleted"
// MNetworkVarNames = "GameTime_t m_tDoubleCastWindow"
class CCitadel_Ability_Nano_Pounce_Instant : public CCitadelBaseAbility
{
	// MNetworkEnable
	bool m_bActive;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLastCastTarget;
	// MNetworkEnable
	Vector m_vStartPosition;
	// MNetworkEnable
	Vector m_vDeparturePosition;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime;
	Vector m_vLastKnownSafePos;
	// MNetworkEnable
	bool m_bIsFirstCastCompleted;
	// MNetworkEnable
	GameTime_t m_tDoubleCastWindow;
	ParticleIndex_t m_CastStartParticle;
};
