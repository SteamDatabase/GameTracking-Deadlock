// MNetworkVarNames = "EHANDLE m_vecHelpers"
// MNetworkVarNames = "GameTime_t m_tChoreUseCooldownEndTime"
// MNetworkVarNames = "GameTime_t m_tSoonestHelperCooldownEndTime"
// MNetworkVarNames = "char m_nAvailableHelperCount"
class CCitadel_Ability_Familiar_HelpingHands : public CCitadelBaseAbility
{
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecHelpers;
	// MNetworkEnable
	GameTime_t m_tChoreUseCooldownEndTime;
	// MNetworkEnable
	GameTime_t m_tSoonestHelperCooldownEndTime;
	// MNetworkEnable
	char m_nAvailableHelperCount;
};
