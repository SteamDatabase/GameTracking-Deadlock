// MGetKV3ClassDefaults = {
//	"m_flDofNearBlurry": 0.000000,
//	"m_flDofNearCrisp": 0.000000,
//	"m_flDofFarCrisp": 0.000000,
//	"m_flDofFarBlurry": 0.000000
//}
class DOFDesc_t
{
	// MPropertyDescription = "Blurry up through this distance."
	float32 m_flDofNearBlurry;
	// MPropertyDescription = "Progress to crisp at this distance."
	float32 m_flDofNearCrisp;
	// MPropertyDescription = "Stay crisp up through this distance."
	float32 m_flDofFarCrisp;
	// MPropertyDescription = "Progress blurry at this distance."
	float32 m_flDofFarBlurry;
};
