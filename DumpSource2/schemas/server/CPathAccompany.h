class CPathAccompany : public CBaseEntity
{
	float32 m_flPathLength;
	CUtlVector< PathAccompanyNode_t > m_vecNodes;
	GameTime_t m_flLastPathRecalc;
	CTransform m_xLastParentTransform;
	PathAccompanyProperties_t m_properties;
	CEntityIOOutput m_OnNpcStartedPath;
	CEntityIOOutput m_OnNpcCompletedPath;
	CEntityIOOutput m_OnNpcBreakFromPath;
};
