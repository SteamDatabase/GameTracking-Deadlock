// MNetworkVarNames = "Vector m_vLiftPosition"
// MNetworkVarNames = "Vector m_vCrashPosition"
class CCitadel_Ability_PsychicLift : public C_CitadelBaseAbility
{
	// MNetworkEnable
	Vector m_vLiftPosition;
	// MNetworkEnable
	Vector m_vCrashPosition;
	CUtlVector< CHandle< C_BaseEntity > > m_vecLiftTargets;
};
