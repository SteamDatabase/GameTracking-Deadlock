// MNetworkVarNames = "bool m_bIsTransformed"
// MNetworkVarNames = "GameTime_t m_flWerewolfStartTime"
class CCitadel_Werewolf_Transformation : public CCitadelBaseAbility
{
	// MNetworkEnable
	bool m_bIsTransformed;
	bool m_bIsTransformingBack;
	GameTime_t m_tLastRegenComponentThinkTime;
	GameTime_t m_tForceTransformTime;
	// MNetworkEnable
	GameTime_t m_flWerewolfStartTime;
	CCitadelModifier* m_pWerewolfModifier;
};
