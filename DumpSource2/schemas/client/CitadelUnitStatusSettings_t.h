// MModelGameData
// MGetKV3ClassDefaults = {
//	"m_vUnitStatusOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vHealthbarOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vDamageNumbersOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vStatusEffectsOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
class CitadelUnitStatusSettings_t
{
	// MPropertyStartGroup = "Unit Status Overlay"
	// MPropertyFriendlyName = "Unit Status Offset (from abs origin)"
	Vector m_vUnitStatusOffset;
	// MPropertyStartGroup = "Healthbar"
	// MPropertyFriendlyName = "Health Bar Offset (from abs origin)"
	Vector m_vHealthbarOffset;
	// MPropertyStartGroup = "Damage Numbers"
	// MPropertyFriendlyName = "Damage Numbers Offset (from abs origin)"
	Vector m_vDamageNumbersOffset;
	// MPropertyStartGroup = "Status Effects"
	// MPropertyFriendlyName = "Status Effects Offset (from abs origin)"
	Vector m_vStatusEffectsOffset;
};
