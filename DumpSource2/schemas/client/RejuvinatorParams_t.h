// MGetKV3ClassDefaults = {
//	"m_flRejuvinatorExpirationWarningTiming": 30.000000,
//	"m_flRejuvinatorBuffDuration": 240.000000,
//	"m_flRejuvinatorDropHeight": 500.000000,
//	"m_flRejuvinatorDropDuration": 7.000000,
//	"m_flRejuvinatorRebirthDuration":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_TrooperHealthMult":
//	[
//	],
//	"m_PlayerRespawnMult":
//	[
//	],
//	"m_strRejuvPickupSound": ""
//}
class RejuvinatorParams_t
{
	float32 m_flRejuvinatorExpirationWarningTiming;
	float32 m_flRejuvinatorBuffDuration;
	float32 m_flRejuvinatorDropHeight;
	float32 m_flRejuvinatorDropDuration;
	float32[3] m_flRejuvinatorRebirthDuration;
	CUtlVector< float32 > m_TrooperHealthMult;
	CUtlVector< float32 > m_PlayerRespawnMult;
	CSoundEventName m_strRejuvPickupSound;
};
