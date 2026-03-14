// MNetworkVarNames = "GameTime_t m_flDomeStartTime"
// MNetworkVarNames = "GameTime_t m_flDomeEndTime"
class CCitadel_Ability_IceDome : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeEndTime;
};
