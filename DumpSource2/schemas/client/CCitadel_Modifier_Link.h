class CCitadel_Modifier_Link : public CCitadelModifier
{
	CHandle< CCitadelPortalTrigger > m_hPortalToCaster;
	GameTime_t m_flPortalStartTime;
	GameTime_t m_flPortalEndTime;
	CUtlString m_sCasterAttachment;
	CUtlString m_sParentAttachment;
};
