// MGetKV3ClassDefaults = {
//	"_class": "CNavLinkMovementVData",
//	"m_sToolsOnlyOwnerModelName": "",
//	"m_vecAnimgraphVars":
//	[
//	],
//	"m_vecVariants":
//	[
//	]
//}
// MVDataRoot
// MVDataNodeType = 1
// MVDataOverlayType = 1
class CNavLinkMovementVData
{
	// MPropertyDescription = "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
	// MPropertyProvidesEditContextString = "ToolEditContext_ID_VMDL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName;
	// MPropertyFriendlyName = "Animgraph Variables"
	// MPropertyDescription = "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
	// MPropertyAutoExpandSelf
	CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars;
	CUtlVector< CNavLinkMovementVariantDefinition > m_vecVariants;
};
