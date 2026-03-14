class CCitadelPassthroughFakeWall : public C_BaseModelEntity
{
	bool m_bAllowAnyone;
	bool m_bAllowTinyCharacters;
	float32 m_flTriggerDistanceMeters;
	CHandle< C_BaseEntity > m_hTrigger;
	CEntityIOOutput m_eventOnOpen;
	CEntityIOOutput m_eventOnClose;
};
