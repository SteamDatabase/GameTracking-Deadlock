class CNavLinkAreaEntity : public CPointEntity
{
	float32 m_flWidth;
	Vector m_vLocatorOffset;
	QAngle m_qLocatorAnglesOffset;
	CUtlSymbolLarge m_strEndLocatorParentName;
	CHandle< CBaseEntity > m_hEndLocatorParent;
	CRelativeTransform m_endLocator;
	CUtlSymbolLarge m_strMovementForward;
	CUtlSymbolLarge m_strMovementReverse;
	bool m_bEnabled;
	bool m_bAllowCrossMovableConnections;
	CUtlSymbolLarge m_strFilterName;
	CHandle< CBaseFilter > m_hFilter;
	CEntityIOOutput m_OnNavLinkStart;
	CEntityIOOutput m_OnNavLinkFinish;
	bool m_bIsTerminus;
	CUtlVector< CNavLinkConnectionSave > m_vecSavedConnections;
	CUtlVector< CNavLinkAreaEntity::NpcUserList_t > m_vecNpcUsersByNavLink;
	CUtlSymbolLarge m_szListenForAnimTag;
	bool m_bIsListeningForAnimTag;
	CEntityIOOutput m_OnAnimTagFired;
	CEntityIOOutput m_OnAnimTagStart;
	CEntityIOOutput m_OnAnimTagEnd;
	int32 m_nProcessOrder;
	int32 m_nSplits;
};
