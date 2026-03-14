// MGetKV3ClassDefaults = {
//	"_class": "CCitadelItemPunchableNeutralGoldVData",
//	"m_flGroundOffset": 40.000000,
//	"m_flSpinRate": 10.000000,
//	"m_flBobHeight": 40.000000,
//	"m_flBobFrequency": 10.000000,
//	"m_flSpinSpeed": 1.000000,
//	"m_PunchPickupModifier":
//	{
//	}
//}
class CCitadelItemPunchableNeutralGoldVData : public CEntitySubclassVDataBase
{
	float32 m_flGroundOffset;
	float32 m_flSpinRate;
	float32 m_flBobHeight;
	float32 m_flBobFrequency;
	float32 m_flSpinSpeed;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier;
};
