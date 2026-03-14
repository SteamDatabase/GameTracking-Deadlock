// MNetworkVarNames = "bool m_bIsFullyCharged"
class CCitadel_Ability_Necro_HauntingSkull : public C_CitadelBaseAbility
{
	GameTime_t m_tPriorityTargetTime;
	CHandle< C_BaseEntity > m_eSkullPriorityTarget;
	VectorWS m_vLaunchPosition;
	QAngle m_qLaunchAngle;
	// MNetworkEnable
	bool m_bIsFullyCharged;
};
