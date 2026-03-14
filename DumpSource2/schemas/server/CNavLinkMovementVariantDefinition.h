// MGetKV3ClassDefaults = {
//	"m_sExternalGraphName": "",
//	"m_nBodySectionAuthority": "eLowerBody",
//	"m_bSupportsExit": false,
//	"m_flMinimalPathLengthForMovingExit": 100.000000,
//	"m_flSnapDestinationToPathGoalThreshold": 0.000000,
//	"m_vecApproachConditions":
//	[
//	]
//}
class CNavLinkMovementVariantDefinition
{
	// MPropertyDescription = "External nav link animgraph to connect to the NPC when using the navlink"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphDefinition > > m_sExternalGraphName;
	// MPropertyDescription = "What part of the body is does this navlink directly control?"
	BodySectionAuthority_t m_nBodySectionAuthority;
	// MPropertyDescription = "Does the external graph support off path exits from the navlink performance?"
	bool m_bSupportsExit;
	// MPropertyDescription = "How much normal ( e.g. ground ) path we have to have after the navlink to trigger exit to movement."
	float32 m_flMinimalPathLengthForMovingExit;
	// MPropertyDescription = "If the navlink destination and the path goal are less than this distance from each other snap the navlink destination to the goal"
	float32 m_flSnapDestinationToPathGoalThreshold;
	CUtlVector< CNavLinkApproachConditions > m_vecApproachConditions;
};
