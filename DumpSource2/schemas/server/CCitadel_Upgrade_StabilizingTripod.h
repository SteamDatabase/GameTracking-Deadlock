class CCitadel_Upgrade_StabilizingTripod : public CCitadel_Item
{
	CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSentries;
	Vector m_vDeployPosition;
	QAngle m_vDeployAngles;
};
