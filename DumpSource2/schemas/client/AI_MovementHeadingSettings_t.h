// MGetKV3ClassDefaults = {
//	"m_eMode": "eContinuous",
//	"m_bUseBadZones": true,
//	"m_badZones":
//	[
//	],
//	"m_flPredictionLookAhead": 0.000000
//}
class AI_MovementHeadingSettings_t
{
	AI_MovementHeadingMode_t m_eMode;
	bool m_bUseBadZones;
	CUtlVector< AI_MovementHeadingBadZone_t > m_badZones;
	float32 m_flPredictionLookAhead;
};
