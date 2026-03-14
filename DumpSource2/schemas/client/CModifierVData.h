// MGetKV3ClassDefaults = {
//	"_class": "CModifierVData",
//	"m_flDuration": -1.000000,
//	"m_bKeepMaximumDurationOnRefresh": false,
//	"m_strParticleEffect": "",
//	"m_strParticleEffectConfig": "",
//	"m_strParticleStatusEffect": "",
//	"m_strParticleStatusEffectConfig": "",
//	"m_strScreenParticleEffect": "",
//	"m_strScreenParticleEffectConfig": "",
//	"m_nStatusEffectPriority": 0,
//	"m_vecRenderAttributes":
//	[
//	],
//	"m_sStartSound": "",
//	"m_sAmbientLoopingSound": "",
//	"m_nAmbientLoopingSoundSource": "MODIFIER_SOURCE_PARENT",
//	"m_nAmbientLoopingSoundRecipients": "MODIFIER_SOUND_RECIPIENT_ALWAYS",
//	"m_sEndSound": "",
//	"m_nEnabledStateMask": "",
//	"m_nDisabledStateMask": "",
//	"m_nAttributes": "",
//	"m_vecScriptValues":
//	[
//	],
//	"m_vecScriptEventHandlers":
//	[
//	],
//	"m_nDisableGroupsMask": "",
//	"m_bIsHidden": false,
//	"m_eHiddenType": "eHideAlways",
//	"m_sLocalizationName": "",
//	"m_eDebuffType": "MODIFIER_DEBUFF_ENEMY_TEAM_ONLY",
//	"m_bAutomaticallyDecayStacks": false,
//	"m_bAllowApplicationPrediction": true
//}
class CModifierVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Time"
	CModifierLevelFloat m_flDuration;
	// MPropertyStartGroup = "Time"
	// MPropertyDescription = "If set, the duration will not get reduced from a refresh with a shorter duration"
	bool m_bKeepMaximumDurationOnRefresh;
	// MPropertyStartGroup = "Visuals"
	// MPropertyDescription = "Particle system to attach to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleEffect;
	// MPropertyStartGroup = "Visuals"
	// MPropertyDescription = "Name of particle control point config to use for ambient effect (empty means use 'preview' config)"
	CUtlString m_strParticleEffectConfig;
	// MPropertyGroupName = "Visuals"
	// MPropertyDescription = "Status Effect to apply to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleStatusEffect;
	// MPropertyStartGroup = "Visuals"
	// MPropertyDescription = "Name of particle control point config to use for status effect (empty means use 'preview' config)"
	CUtlString m_strParticleStatusEffectConfig;
	// MPropertyGroupName = "Visuals"
	// MPropertyDescription = "Screen-space particle system to create if the parent of the modifier is the local player"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strScreenParticleEffect;
	// MPropertyStartGroup = "Visuals"
	// MPropertyDescription = "Name of particle control point config to use for screen-space effect (empty means use 'preview' config)"
	CUtlString m_strScreenParticleEffectConfig;
	// MPropertyGroupName = "Visuals"
	// MPropertyDescription = "Priority of this status effect relative to others"
	int32 m_nStatusEffectPriority;
	// MPropertyGroupName = "Visuals"
	CUtlVector< ModifierRenderAttribute_t > m_vecRenderAttributes;
	// MPropertyGroupName = "Sounds"
	CSoundEventName m_sStartSound;
	// MPropertyGroupName = "Sounds"
	CSoundEventName m_sAmbientLoopingSound;
	// MPropertyGroupName = "Sounds"
	ModifierSourceType_t m_nAmbientLoopingSoundSource;
	// MPropertyGroupName = "Sounds"
	ModifierSoundRecipients_t m_nAmbientLoopingSoundRecipients;
	// MPropertyGroupName = "Sounds"
	CSoundEventName m_sEndSound;
	// MPropertyGroupName = "Scripted Settings"
	CBitVecEnum< EModifierState > m_nEnabledStateMask;
	// MPropertyGroupName = "Scripted Settings"
	CBitVecEnum< EModifierState > m_nDisabledStateMask;
	// MPropertyGroupName = "Scripted Settings"
	ModifierAttribute_t m_nAttributes;
	// MPropertyGroupName = "Scripted Settings"
	// MPropertyDescription = "Scripted Modifier Values"
	CUtlVector< ModifierScriptValue_t > m_vecScriptValues;
	// MPropertyGroupName = "Scripted Settings"
	// MPropertyDescription = "Scripted Event Handlers"
	CUtlVector< ModifierScriptedEventHandler_t > m_vecScriptEventHandlers;
	ModifierDisableGroup_t m_nDisableGroupsMask;
	// MPropertyGroupName = "UI"
	// MPropertyDescription = "When set, the modifier will not be visible to UI or visible modifier list."
	bool m_bIsHidden;
	// MPropertyGroupName = "UI"
	// MPropertySuppressExpr = "m_bIsHidden != true"
	ModifierHiddenType_t m_eHiddenType;
	// MPropertyGroupName = "UI"
	// MPropertyDescription = "When set, use the value as localization key."
	CUtlString m_sLocalizationName;
	// MPropertyDescription = "When to consider the modifier a debuff."
	ModifierDebuffType_t m_eDebuffType;
	// MPropertyDescription = "When set, stacks will automatically be decayed after a duration's worth of time has passed.  Only makes sense if adding a stack refreshed the modifier."
	bool m_bAutomaticallyDecayStacks;
	// MPropertyStartGroup = "Networking"
	// MPropertyDescription = "If true, application of the modifier will be delayed on the server to match the client's latency."
	bool m_bAllowApplicationPrediction;
};
