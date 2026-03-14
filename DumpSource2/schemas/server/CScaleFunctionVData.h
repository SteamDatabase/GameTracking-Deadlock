// MGetKV3ClassDefaults = {
//	"_class": "CScaleFunctionVData",
//	"m_eSpecificStatScaleType": "EStatsCount",
//	"m_bFunctionDisabled": false,
//	"m_flStatScale": 1.000000,
//	"m_flStreetBrawlStatScale": 340282346638528859811704183484516925440.000000
//}
// MVDataRoot
// MVDataNodeType = 1
// MVDataOverlayType = 1
class CScaleFunctionVData : public CEntitySubclassVDataBase
{
	EStatsType m_eSpecificStatScaleType;
	bool m_bFunctionDisabled;
	float32 m_flStatScale;
	float32 m_flStreetBrawlStatScale;
};
