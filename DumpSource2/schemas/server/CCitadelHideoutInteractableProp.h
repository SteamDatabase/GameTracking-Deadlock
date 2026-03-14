// MNetworkVarNames = "CUtlString m_strInteractLocString"
// MNetworkVarNames = "EHideoutButtonInteractStyle m_eInteractStyle"
// MNetworkVarNames = "EHideoutButtonAction m_eHideoutAction"
// MNetworkVarNames = "float m_flInteractDistance"
// MNetworkVarNames = "CUtlString m_strWorldPanelEntity"
// MNetworkVarNames = "CUtlString m_strOpacityCurveString"
class CCitadelHideoutInteractableProp : public CDynamicProp, public IHideoutInteractable
{
	CEntityIOOutput m_OnStartTouch;
	CEntityIOOutput m_OnStartTouchAll;
	CEntityIOOutput m_OnEndTouch;
	CEntityIOOutput m_OnEndTouchAll;
	CEntityIOOutput m_OnInteracted;
	// MNetworkEnable
	CUtlString m_strInteractLocString;
	// MNetworkEnable
	EHideoutButtonInteractStyle m_eInteractStyle;
	// MNetworkEnable
	EHideoutButtonAction m_eHideoutAction;
	// MNetworkEnable
	float32 m_flInteractDistance;
	// MNetworkEnable
	CUtlString m_strWorldPanelEntity;
	// MNetworkEnable
	CUtlString m_strOpacityCurveString;
};
