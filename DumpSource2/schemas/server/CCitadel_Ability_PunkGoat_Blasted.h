// MNetworkVarNames = "float m_flBlastedCurrentDuration"
class CCitadel_Ability_PunkGoat_Blasted : public CCitadelBaseAbility
{
	GameTime_t m_tTimeOfLastBulletHit;
	float32 m_flPendingBlastedTimeToAdd;
	float32 m_flDeferredHealingFromBlasted;
	// MNetworkEnable
	float32 m_flBlastedCurrentDuration;
};
