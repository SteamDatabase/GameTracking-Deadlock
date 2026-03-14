// MNetworkVarNames = "CUtlString m_strInteractLocString"
// MNetworkVarNames = "EHideoutButtonAction m_eHideoutAction"
class CCitadelHideoutInteractableTrigger : public CBaseTrigger, public IHideoutInteractable
{
	CEntityIOOutput m_OnInteracted;
	// MNetworkEnable
	CUtlString m_strInteractLocString;
	// MNetworkEnable
	EHideoutButtonAction m_eHideoutAction;
};
