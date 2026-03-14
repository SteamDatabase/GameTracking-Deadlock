class CCitadel_Modifier_LurkersAmbush_Invis : public CCitadel_Modifier_Invis
{
	CUtlOrderedMap< C_CitadelPlayerPawn*, GameTime_t > m_mapStartLookTime;
	GameTime_t m_flStartSpotted;
};
