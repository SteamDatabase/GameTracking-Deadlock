// MGetKV3ClassDefaults = {
//	"m_strName": "",
//	"m_nHitGroup": "HITGROUP_GENERIC",
//	"m_nHealth": 0,
//	"m_nMaxHealth": 0,
//	"m_nOnBreakBonusDamage": 0,
//	"m_eBreakBehavior": "EBreakOnceBecomeInvuln",
//	"m_strOnBreakAnimGraphParam": ""
//}
class WeakPointParams_t
{
	CUtlString m_strName;
	HitGroup_t m_nHitGroup;
	int32 m_nHealth;
	int32 m_nMaxHealth;
	int32 m_nOnBreakBonusDamage;
	EWeakPointBreakBehavior m_eBreakBehavior;
	CGlobalSymbol m_strOnBreakAnimGraphParam;
};
