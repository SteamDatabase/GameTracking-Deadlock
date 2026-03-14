// MNetworkVarNames = "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames = "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility
{
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier;
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier;
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap;
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime;
	Vector m_vLastPos;
	float32 m_flDebuffDuration;
	GameTime_t m_flChannelTimeStarted;
	bool m_bWasLatchedWhenCast;
	ParticleIndex_t m_ChargeUpParticle;
};
