// MGetKV3ClassDefaults = {
//	"m_strToken": "",
//	"m_bIsEmpty": false,
//	"m_nPriority": 1,
//	"m_vecDistanceOperations":
//	[
//	],
//	"m_vecFOVOperations":
//	[
//	],
//	"m_vecTargetPosOperations":
//	[
//	],
//	"m_vecVertOffsetOperations":
//	[
//	],
//	"m_vecHorizOffsetOperations":
//	[
//	]
//}
class CitadelCameraOperationsSequence_t
{
	// MPropertySuppressField
	CUtlStringToken m_strToken;
	// MPropertySuppressField
	bool m_bIsEmpty;
	// MPropertyDescription = "Priority is the first test when seeing which camera context is currently being used. Higher priorty wins."
	int32 m_nPriority;
	CUtlVector< CitadelCameraDistanceOperationDef_t > m_vecDistanceOperations;
	CUtlVector< CitadelCameraFOVOperationDef_t > m_vecFOVOperations;
	CUtlVector< CitadelCameraTargetPosOperationDef_t > m_vecTargetPosOperations;
	CUtlVector< CitadelCameraVertOffsetOperationDef_t > m_vecVertOffsetOperations;
	CUtlVector< CitadelCameraHorizOffsetOperationDef_t > m_vecHorizOffsetOperations;
};
