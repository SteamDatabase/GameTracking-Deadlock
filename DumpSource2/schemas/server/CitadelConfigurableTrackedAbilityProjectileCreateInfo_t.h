class CitadelConfigurableTrackedAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t
{
	CCitadelProjectileTrackingParams m_TrackingParams;
	CHandle< CBaseEntity > m_hTrackedTarget;
};
