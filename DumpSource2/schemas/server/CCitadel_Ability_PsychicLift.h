// MNetworkVarNames = "Vector m_vLiftPosition"
// MNetworkVarNames = "Vector m_vCrashPosition"
class CCitadel_Ability_PsychicLift : public CCitadelBaseAbility
{
	// MNetworkEnable
	Vector m_vLiftPosition;
	// MNetworkEnable
	Vector m_vCrashPosition;
	CUtlVector< CHandle< CBaseEntity > > m_vecLiftTargets;
};
