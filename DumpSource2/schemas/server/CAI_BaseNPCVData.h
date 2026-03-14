// MGetKV3ClassDefaults = {
//	"_class": "CAI_BaseNPCVData",
//	"m_sModelName": "",
//	"m_hFootstepSounds": "",
//	"m_vecNavLinkMovementNames":
//	[
//	],
//	"m_flAimConeAngle": 6.000000,
//	"m_nMaxHealth": 100,
//	"m_vecIntrinsicModifiers":
//	[
//	],
//	"m_statusEffectMap":
//	{
//	},
//	"m_vecAttachments":
//	[
//	],
//	"m_flHeadDamageMultiplier": 1.500000,
//	"m_flChestDamageMultiplier": 1.000000,
//	"m_flStomachDamageMultiplier": 1.000000,
//	"m_flArmDamageMultiplier": 1.000000,
//	"m_flLegDamageMultiplier": 1.000000,
//	"m_nMaxAdditionalAmmoBalancingShots": 0,
//	"m_bTakesDamage": true,
//	"m_strDamagedEffect": "",
//	"m_bLightsFiresWhenDamaged": false,
//	"m_nRagdollHealth": 0,
//	"m_flImpactEnergyScale": 1.000000,
//	"m_bAllowNonZUpMovement": false,
//	"m_bUseDynamicCollisionHull": false,
//	"m_bRequestCapsuleCollision": false,
//	"m_flCapsuleRadiusOverride": 0.000000,
//	"m_flCapsuleHeightOverride": 0.000000,
//	"m_vecActionDesiredShared":
//	[
//	],
//	"m_sPlayerKilledNpcSound": "",
//	"m_sCustomDeathHandshake": "",
//	"m_sDefaultMovementSettings": "",
//	"m_mappedMovementSettings":
//	[
//	],
//	"m_bEnableCodeDrivenAnimgraphMovement": false,
//	"m_bEnableAnimgraphTagDrivenStrafing": true,
//	"m_flMassOverride": -1.000000,
//	"m_flThreatTemperature": 20.000000,
//	"m_flFlashpoint": -1.000000
//}
class CAI_BaseNPCVData : public CEntitySubclassVDataBase
{
	// MPropertyGroupName = "Visuals"
	// MPropertyProvidesEditContextString = "ToolEditContext_ID_VMDL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	// MPropertyGroupName = "Sounds"
	CFootstepTableHandle m_hFootstepSounds;
	// MPropertyFriendlyName = "Nav Link Movements"
	// MPropertyDescription = "List of the kind of nav links movement this unit is capable of."
	// MPropertyCustomFGDType = "vdata_choice:scripts/navlinks.vdata"
	CUtlVector< CGlobalSymbol > m_vecNavLinkMovementNames;
	float32 m_flAimConeAngle;
	int32 m_nMaxHealth;
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers;
	// MPropertyFriendlyName = "Status Effects"
	// MPropertyDescription = "List of the status effects this NPC cares about"
	NPCStatusEffectMap_t m_statusEffectMap;
	CUtlVector< NPCAttachmentDesc_t > m_vecAttachments;
	// MPropertyStartGroup = "Damage"
	CSkillFloat m_flHeadDamageMultiplier;
	CSkillFloat m_flChestDamageMultiplier;
	CSkillFloat m_flStomachDamageMultiplier;
	CSkillFloat m_flArmDamageMultiplier;
	CSkillFloat m_flLegDamageMultiplier;
	CSkillInt m_nMaxAdditionalAmmoBalancingShots;
	bool m_bTakesDamage;
	// MPropertyDescription = "Damaged Effect"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamagedEffect;
	bool m_bLightsFiresWhenDamaged;
	// MPropertyDescription = "Amount of health to grant to a ragdoll before the ragdoll is destroyed."
	int32 m_nRagdollHealth;
	// MPropertyDescription = "Scale on the energy used to look up into the damage tables for physics impacts (including vehicle impacts)."
	float32 m_flImpactEnergyScale;
	// MPropertyStartGroup = "Navigation"
	bool m_bAllowNonZUpMovement;
	// MPropertyDescription = "If true, this NPC will use a dynamic collision hull that allows it to be pushed by heavy things and affected by constraints."
	bool m_bUseDynamicCollisionHull;
	// MPropertyDescription = "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
	bool m_bRequestCapsuleCollision;
	// MPropertyDescription = "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
	float32 m_flCapsuleRadiusOverride;
	// MPropertyDescription = "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
	float32 m_flCapsuleHeightOverride;
	// MPropertyStartGroup = "Animation"
	// MPropertyFriendlyName = "Enabled Shared Actions"
	// MPropertyDescription = "List of the shared BaseNPC actions this NPC supports"
	// MPropertyAttributeEditor = "AnimGraphParamEnumValue()"
	// MPropertyEditContextOverrideValue (UNKNOWN FOR PARSER)
	CUtlVector< CGlobalSymbol > m_vecActionDesiredShared;
	// MPropertyStartGroup = "Sounds"
	// MPropertyDescription = "Player Killed NPC Sound"
	CSoundEventName m_sPlayerKilledNpcSound;
	// MPropertyStartGroup = "Death"
	CGlobalSymbol m_sCustomDeathHandshake;
	// MPropertyStartGroup = "Movement"
	// MPropertyFriendlyName = "Default Movement Settings"
	// MPropertyAttributeEditor = "VDataChoice( scripts/basenpc_movementsettings.vdata )"
	CUtlString m_sDefaultMovementSettings;
	// MPropertyFriendlyName = "Mapped Movement Settings"
	CUtlVector< AI_MappedMovementSettingsItem_t > m_mappedMovementSettings;
	// MPropertyDescription = "If true, this NPC will use code driven animgraph movement actions such as starts and stops"
	bool m_bEnableCodeDrivenAnimgraphMovement;
	// MPropertyDescription = "If true, the NPC will request strafing if it is supported by the animgraph. Can still be overriden by schedules."
	bool m_bEnableAnimgraphTagDrivenStrafing;
	float32 m_flMassOverride;
	float32 m_flThreatTemperature;
	float32 m_flFlashpoint;
};
