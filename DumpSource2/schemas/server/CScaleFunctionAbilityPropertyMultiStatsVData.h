// MGetKV3ClassDefaults = {
//	"_class": "CScaleFunctionAbilityPropertyMultiStatsVData",
//	"m_eSpecificStatScaleType": "EStatsCount",
//	"m_bFunctionDisabled": false,
//	"m_flStatScale": 1.000000,
//	"m_flStreetBrawlStatScale": 340282346638528859811704183484516925440.000000,
//	"m_vecScalingStats":
//	[
//	]
//}
class CScaleFunctionAbilityPropertyMultiStatsVData : public CScaleFunctionVData
{
	CUtlVector< EStatsType > m_vecScalingStats;
};
