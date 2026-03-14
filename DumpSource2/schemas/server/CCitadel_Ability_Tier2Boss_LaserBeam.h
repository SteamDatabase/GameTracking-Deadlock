class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
	AttachmentHandle_t m_hAttackPosHigh;
	AttachmentHandle_t m_hAttackPosLow;
	AttachmentHandle_t m_hAttackPosLeft;
	AttachmentHandle_t m_hAttackPosRight;
	GameTime_t m_tCastCompleteTime;
	CModifierHandleTyped< CCitadelModifier > m_pBeamModifier;
};
