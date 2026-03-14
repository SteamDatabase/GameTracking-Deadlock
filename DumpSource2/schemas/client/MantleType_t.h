// MGetKV3ClassDefaults = {
//	"_class": "MantleType_t",
//	"m_flMinHeight": 0.000000,
//	"m_flAnimHeight": 0.000000,
//	"m_flMaxHeight": 0.000000,
//	"m_flVerticalTime": 0.200000,
//	"m_flHorizontalTime": 0.200000,
//	"m_eMantleType": "EMantleNone",
//	"m_flSlideExitBoostOnGround": 400.000000
//}
class MantleType_t
{
	// MPropertyDescription = "The minimum height difference of the player origin from the ledge for this type to be selected"
	float32 m_flMinHeight;
	// MPropertyDescription = "How much vertical distance the anim of this type will appear to travel"
	float32 m_flAnimHeight;
	// MPropertyDescription = "The maximum height difference of the player origin from the ledge for this type to be selected"
	float32 m_flMaxHeight;
	// MPropertyDescription = "How long to apply all of the vertical movement of this mantle"
	float32 m_flVerticalTime;
	// MPropertyDescription = "How long to apply all of the horizontal movement of this mantle.  NOTE: Horizontal applies after the vertical"
	float32 m_flHorizontalTime;
	EMantleType m_eMantleType;
	// MPropertyDescription = "Sliding out of a mantle gives you this impulse. units/second"
	float32 m_flSlideExitBoostOnGround;
};
