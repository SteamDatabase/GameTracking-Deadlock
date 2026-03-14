class CCitadel_Modifier_CP_Capturer : public CCitadelModifier, public ICitadelModifierCustomHudDisplay
{
	CHandle< CCitadelTriggerCapturePoint > m_hCP;
	CHandle< C_BaseEntity > m_hEscort;
};
