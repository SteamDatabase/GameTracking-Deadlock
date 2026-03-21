// MGetKV3ClassDefaults = {
//	"_class": "CScaleFunctionAbilityPropertySingleStatCurveVData",
//	"m_eSpecificStatScaleType": "EStatsCount",
//	"m_bFunctionDisabled": false,
//	"m_flStatScale": 1.000000,
//	"m_flStreetBrawlStatScale": 340282346638528859811704183484516925440.000000,
//	"m_statCurve":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	}
//}
class CScaleFunctionAbilityPropertySingleStatCurveVData : public CScaleFunctionVData
{
	CPiecewiseCurve m_statCurve;
};
