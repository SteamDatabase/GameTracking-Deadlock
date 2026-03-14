// MGetKV3ClassDefaults = {
//	"m_unStatID": 0,
//	"m_eStatImpl": "k_ePlayerTrackedStatImpl_Invalid",
//	"m_expressionData":
//	{
//		"strExpression": ""
//	},
//	"m_heroAdjectiveData":
//	{
//		"m_strAdjective": ""
//	}
//}
// MVDataRoot
class CPlayerTrackedStatDefinition
{
	// MPropertyDescription = "unique integer ID of this stat"
	// MVDataUniqueMonotonicInt = "_editor/next_player_stat_id"
	// MPropertyAttributeEditor = "locked_int()"
	TrackedStatID_t m_unStatID;
	// MPropertyDescription = "how this stat is implemented"
	EPlayerTrackedStatImpl m_eStatImpl;
	// MPropertyDescription = "For k_ePlayerTrackedStatImpl_Expression, what is the expression information."
	// MPropertySuppressExpr = "m_eStatImpl != k_ePlayerTrackedStatImpl_Expression"
	TrackedStatExpressionData_t m_expressionData;
	// MPropertyDescription = "For k_ePlayerTrackedStatImpl_HeroAdjective, what is the adjective information."
	// MPropertySuppressExpr = "m_eStatImpl != k_ePlayerTrackedStatImpl_HeroAdjective"
	TrackedStatHeroAdjectiveData_t m_heroAdjectiveData;
};
