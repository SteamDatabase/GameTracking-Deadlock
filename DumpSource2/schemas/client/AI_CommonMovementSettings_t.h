// MGetKV3ClassDefaults = {
//	"m_flSpringConstant": 10.000000,
//	"m_flMaxSpringTension": 100.000000,
//	"m_flSharpStartAngle": 180.000000,
//	"m_flMinIdleTurnAngle": 10.000000,
//	"m_bUseSmoothPaths": true,
//	"m_flMovementMaxPathEndDirectionAngleDifferenceForStop": 180.000000,
//	"m_flMaxHopFacingDelta": 45.000000,
//	"m_flNavLinkSmoothMaxEntryAngle": 90.000000,
//	"m_flNavLinkSmoothMinSegmentLength": 200.000000
//}
class AI_CommonMovementSettings_t
{
	float32 m_flSpringConstant;
	// MPropertyFriendlyName = "Max Tension"
	float32 m_flMaxSpringTension;
	float32 m_flSharpStartAngle;
	float32 m_flMinIdleTurnAngle;
	bool m_bUseSmoothPaths;
	float32 m_flMovementMaxPathEndDirectionAngleDifferenceForStop;
	float32 m_flMaxHopFacingDelta;
	float32 m_flNavLinkSmoothMaxEntryAngle;
	float32 m_flNavLinkSmoothMinSegmentLength;
};
