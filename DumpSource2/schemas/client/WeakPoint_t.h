// MNetworkVarNames = "EHANDLE m_hOuter"
// MNetworkVarNames = "HitGroup_t m_nCritHitGroup"
// MNetworkVarNames = "int m_nBodyGroup"
// MNetworkVarNames = "bool m_bPermanentlyBroken"
// MNetworkVarNames = "int m_nBrokenBodygroupIndex"
class WeakPoint_t
{
	// MNotSaved
	bool m_bRegistered;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnOuterChanged"
	// MNotSaved
	CHandle< C_BaseEntity > m_hOuter;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnFlashDataChanged"
	// MNotSaved
	HitGroup_t m_nCritHitGroup;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnFlashDataChanged"
	// MNotSaved
	int32 m_nBodyGroup;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnPermanentlyBroken"
	// MNotSaved
	bool m_bPermanentlyBroken;
	// MNetworkEnable
	// MNotSaved
	int32 m_nBrokenBodygroupIndex;
};
