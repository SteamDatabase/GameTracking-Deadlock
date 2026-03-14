// MGetKV3ClassDefaults = {
//	"_class": "CNavLinkMovementVData_JumpDown",
//	"m_sToolsOnlyOwnerModelName": "",
//	"m_vecAnimgraphVars":
//	[
//	],
//	"m_vecVariants":
//	[
//	],
//	"m_metrics":
//	{
//		"m_flEntryDistance": 0.000000,
//		"m_horizontalRange": 0.000000,
//		"m_verticalRange": 0.000000
//	},
//	"m_bAlignWithExitDirectionDuringFall": true
//}
class CNavLinkMovementVData_JumpDown : public CNavLinkMovementVData
{
	CNavLinkMetrics_JumpDown m_metrics;
	bool m_bAlignWithExitDirectionDuringFall;
};
