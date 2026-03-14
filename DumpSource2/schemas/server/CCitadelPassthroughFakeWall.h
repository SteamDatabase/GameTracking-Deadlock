class CCitadelPassthroughFakeWall : public CBaseModelEntity
{
	bool m_bAllowAnyone;
	bool m_bAllowTinyCharacters;
	float32 m_flTriggerDistanceMeters;
	CHandle< CBaseEntity > m_hTrigger;
	CEntityIOOutput m_eventOnOpen;
	CEntityIOOutput m_eventOnClose;
};
