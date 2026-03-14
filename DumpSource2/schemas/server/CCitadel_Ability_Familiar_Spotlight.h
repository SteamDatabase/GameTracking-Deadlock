// MNetworkVarNames = "EHANDLE m_hWasAttachedTo"
// MNetworkVarNames = "VectorWS m_vAuraPosition"
class CCitadel_Ability_Familiar_Spotlight : public CCitadelBaseAbility
{
	CHandle< CPointModifierThinker > m_hAuraThinker;
	ParticleIndex_t m_nEyeGlowFX;
	VectorWS m_vLastValidAuraPosition;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hWasAttachedTo;
	// MNetworkEnable
	VectorWS m_vAuraPosition;
};
