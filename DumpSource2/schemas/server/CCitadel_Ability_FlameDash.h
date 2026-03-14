// MNetworkVarNames = "CCitadelAutoScaledTime m_flDashEndTime"
// MNetworkVarNames = "bool m_bIsSpeedBursting"
class CCitadel_Ability_FlameDash : public CCitadelBaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDashEndTime;
	// MNetworkEnable
	bool m_bIsSpeedBursting;
};
