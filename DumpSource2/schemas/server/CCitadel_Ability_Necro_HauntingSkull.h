// MNetworkVarNames = "bool m_bIsFullyCharged"
class CCitadel_Ability_Necro_HauntingSkull : public CCitadelBaseAbility
{
	GameTime_t m_tPriorityTargetTime;
	CHandle< CBaseEntity > m_eSkullPriorityTarget;
	VectorWS m_vLaunchPosition;
	QAngle m_qLaunchAngle;
	// MNetworkEnable
	bool m_bIsFullyCharged;
};
