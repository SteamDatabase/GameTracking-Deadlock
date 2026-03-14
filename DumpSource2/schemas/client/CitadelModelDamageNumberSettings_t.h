// MModelGameData
// MGetKV3ClassDefaults = {
//	"m_flSideOffsetNear": 40.000000,
//	"m_flSideOffsetFar": 80.000000,
//	"m_flHeightOffsetNear": 90.000000,
//	"m_flHeightOffsetFar": 90.000000
//}
class CitadelModelDamageNumberSettings_t
{
	// MPropertyDescription = "How far offset to the left and right will damage numbers be when this model takes damage and is near the camera"
	// MPropertyFriendlyName = "Side Offset (near)"
	float32 m_flSideOffsetNear;
	// MPropertyDescription = "How far offset to the left and right will damage numbers be when this model takes damage and is far from the camera"
	// MPropertyFriendlyName = "Side Offset (far)"
	float32 m_flSideOffsetFar;
	// MPropertyDescription = "How far vertically will damage numbers be when this model takes damage when the model is near"
	// MPropertyFriendlyName = "Height Offset (near)"
	float32 m_flHeightOffsetNear;
	// MPropertyDescription = "How far vertically will damage numbers be when this model takes damage when the model is far"
	// MPropertyFriendlyName = "Height Offset (far)"
	float32 m_flHeightOffsetFar;
};
