// MGetKV3ClassDefaults = {
//	"m_bRequiresUpNormal": false,
//	"m_bGroundCheck": false,
//	"m_bPlaceFlat": false,
//	"m_flFlatYawOffset": 0.000000,
//	"m_bPlaceNormalToSurface": false,
//	"m_bPointTrace": false,
//	"m_bCheckPlayerFit": false,
//	"m_flModelVerticalPlacementScaleOffset": 0.000000,
//	"m_bDownCheckIgnoreLos": false,
//	"m_previewModel": "",
//	"m_previewParticle": "",
//	"m_strPreviewParticleEffectConfig": "",
//	"m_strExraBodygroup": "",
//	"m_strPreviewClass": "citadel_deployable_preview",
//	"m_flPreviewModelScale": 1.000000,
//	"m_flGroundCheckHeightOffset": -1.000000,
//	"m_flGroundCheckHeightOffsetDown": -1.000000
//}
class DeploymentInfo_t
{
	// MPropertyDescription = "If set, deployment will do a cast from above the cast point to see if there's a valid up surface to deploy to.  Will reject any non up facing surfaces."
	bool m_bRequiresUpNormal;
	// MPropertyDescription = "If set, deployment will trace up and down to search for valid ground position."
	bool m_bGroundCheck;
	// MPropertyDescription = "If set, deployment will always have a pitch and roll of 0."
	bool m_bPlaceFlat;
	// MPropertyDescription = "If being placed flat, apply this yaw offset."
	float32 m_flFlatYawOffset;
	// MPropertyDescription = "If set, deployment will always be normal to surface."
	bool m_bPlaceNormalToSurface;
	// MPropertyDescription = "If set, always use a line trace, instead of tracing the size of the object."
	bool m_bPointTrace;
	// MPropertyDescription = "If set, make sure the casting player will fit at the target spot, instead of the deployment model."
	bool m_bCheckPlayerFit;
	// MPropertyDescription = "Offset the deployment position by this amount of the deployment model's height.  Useful for making something be centered on the crosshair when placed on a wall"
	float32 m_flModelVerticalPlacementScaleOffset;
	// MPropertyDescription = "If set, ignore LOS check if deploy target is below caster"
	bool m_bDownCheckIgnoreLos;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_previewModel;
	// MPropertyDescription = "CP0=caster origin, CP1=deploy target position, CP2=caster's ability_cast"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle;
	CUtlString m_strPreviewParticleEffectConfig;
	CUtlString m_strExraBodygroup;
	CUtlString m_strPreviewClass;
	float32 m_flPreviewModelScale;
	// MPropertyDescription = "If set, use the height offset instead of citadel_deployment_max_height_offset_up"
	float32 m_flGroundCheckHeightOffset;
	// MPropertyDescription = "If set, max the distance below caster for valid ground (positive value) default - citadel_deployment_max_height_offset_down"
	float32 m_flGroundCheckHeightOffsetDown;
};
