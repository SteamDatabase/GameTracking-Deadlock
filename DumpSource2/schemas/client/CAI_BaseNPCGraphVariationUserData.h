// MGetKV3ClassDefaults = {
//	"_class": "CAI_BaseNPCGraphVariationUserData",
//	"m_sActionHandshakesSupported":
//	[
//	],
//	"m_sMovementHandshakesSupported":
//	[
//	]
//}
class CAI_BaseNPCGraphVariationUserData : public CBaseAnimGraphVariationUserData
{
	CUtlVector< CGlobalSymbol > m_sActionHandshakesSupported;
	CUtlVector< CGlobalSymbol > m_sMovementHandshakesSupported;
};
