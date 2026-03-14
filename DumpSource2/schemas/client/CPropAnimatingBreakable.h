// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkIncludeByName = "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
	CBreakableStageHelper m_stages;
	CEntityIOOutput m_OnTakeDamage;
	CEntityIOOutput m_OnFinalBreak;
	CEntityIOOutput m_OnStageAdvanced;
};
