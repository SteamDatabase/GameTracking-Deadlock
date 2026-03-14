// MGetKV3ClassDefaults = {
//	"_class": "CCitadelModifierVData",
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
//	"m_bAllowApplicationPrediction": true,
//	"m_bIsBuildup": false,
//	"m_bNetworkValuesForStatsPreview": false,
//	"m_vecAutoRegisterModifierValueFromAbilityPropertyName":
//	[
//	],
//	"m_bCasterCountsAsAssister": true,
//	"m_flLingeringAssistWindow": 0.000000,
//	"m_bDurationCanBeTimeScaled": false,
//	"m_bDurationReducible": true,
//	"m_eTimeScaleSource": "MODIFIER_TIME_SCALE_USE_PARENT",
//	"m_bDurationAffectedByEffectiveness": false,
//	"m_AG2BaseAction":
//	{
//		"m_strParamName": "",
//		"m_nPriority": 0
//	},
//	"m_AG2BaseState":
//	{
//		"m_strParamName": "",
//		"m_nPriority": 0
//	},
//	"m_AG2HeroState":
//	{
//		"m_strParamName": "",
//		"m_nPriority": 0
//	},
//	"m_eDrawOverheadStatus": "OVERHEAD_DRAW_NEVER",
//	"m_bReverseHudProgressBar": false,
//	"m_strSmallIconCssClass": "",
//	"m_strHintText": "",
//	"m_strModifierOverrideStatusID": "",
//	"m_strHudIcon": "",
//	"m_eHudDisplayLocation": "DISPLAY_HUD_LEFT",
//	"m_eModifierDisplayLocaiton": "MODIFIER_DISPLAY_LOCAITON_ALL",
//	"m_strHudMessageText": "",
//	"m_bIsHiddenOverhead": false,
//	"m_vecAlwaysShowInStatModifierUI":
//	[
//	],
//	"m_OnCreateResponse":
//	{
//		"m_nConcept": "CITADEL_CONCEPT_NONE",
//		"m_Criteria":
//		{
//		},
//		"m_nFilterType": "MODIFIER_RR_FILTER_BROADCAST",
//		"m_nSpeakerType": "MODIFIER_RR_SPEAKER_PARENT"
//	},
//	"m_cameraSequenceCreated":
//	{
//		"m_strToken": "",
//		"m_bIsEmpty": false,
//		"m_nPriority": 1,
//		"m_vecDistanceOperations":
//		[
//		],
//		"m_vecFOVOperations":
//		[
//		],
//		"m_vecTargetPosOperations":
//		[
//		],
//		"m_vecVertOffsetOperations":
//		[
//		],
//		"m_vecHorizOffsetOperations":
//		[
//		]
//	},
//	"m_bEndCreatedSequenceOnRemove": true,
//	"m_cameraSequenceRemoved":
//	{
//		"m_strToken": "",
//		"m_bIsEmpty": false,
//		"m_nPriority": 1,
//		"m_vecDistanceOperations":
//		[
//		],
//		"m_vecFOVOperations":
//		[
//		],
//		"m_vecTargetPosOperations":
//		[
//		],
//		"m_vecVertOffsetOperations":
//		[
//		],
//		"m_vecHorizOffsetOperations":
//		[
//		]
//	},
//	"m_BarrierBehavior": "MODIFIER_BARRIER_BEHAVIOR_KEEP_ON_DESTROY",
//	"m_BarrierCreateParticle": "",
//	"m_bSupressDefaultBarrierBreakParticle": false,
//	"m_sExpiredSound": "",
//	"m_FootstepOverride":
//	{
//		"m_sFootstepSound": "",
//		"m_nFootstepPriority": -1
//	},
//	"m_FootstepAdditional": "",
//	"m_bRemoveOnInterrupted": false
//}
// MPropertySuppressBaseClassField = "m_nDisableGroupsMask"
// MPropertySuppressBaseClassField = "m_sEndSound"
class CCitadelModifierVData : public CModifierVData
{
	bool m_bIsBuildup;
	// MPropertySuppressField
	bool m_bNetworkValuesForStatsPreview;
	CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName;
	// MPropertyStartGroup = "Kill & Assist Credit"
	bool m_bCasterCountsAsAssister;
	// MPropertyDescription = "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
	float32 m_flLingeringAssistWindow;
	// MPropertyStartGroup = "Time"
	// MPropertyDescription = "When set, the duration will get scaled depending on the owner's timescale"
	bool m_bDurationCanBeTimeScaled;
	bool m_bDurationReducible;
	// MPropertyDescription = "Whose timescale to use when adjusting duration."
	ModifierTimeScaleSource_t m_eTimeScaleSource;
	// MPropertyDescription = "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
	bool m_bDurationAffectedByEffectiveness;
	// MPropertyStartGroup = "AnimGraph2"
	// MPropertyFriendlyName = "base_action value"
	// MPropertyDescription = "The value to set the parameter "base_action" to.  Should be used for actions that are common to all heroes (ex. lifted)."
	ParamAndPriority_t m_AG2BaseAction;
	// MPropertyFriendlyName = "base_state value"
	// MPropertyDescription = "The value to set the parameter "base_state" to.  Should be used for states that are common to all heroes (ex. asleep)."
	ParamAndPriority_t m_AG2BaseState;
	// MPropertyFriendlyName = "hero_state value"
	// MPropertyDescription = "The value to set the parameter "hero_state" to.  Should be used for states that are custom for the casting hero (ex. icepathing, flamedashing)."
	ParamAndPriority_t m_AG2HeroState;
	// MPropertyStartGroup = "UI"
	ModifierOverheadDrawType_t m_eDrawOverheadStatus;
	bool m_bReverseHudProgressBar;
	CUtlString m_strSmallIconCssClass;
	CUtlString m_strHintText;
	// MPropertyDescription = "When set, different modifiers from the same ability will collapse based on this ID."
	CUtlString m_strModifierOverrideStatusID;
	CPanoramaImageName m_strHudIcon;
	HudDisplayLocation_t m_eHudDisplayLocation;
	ModifiersDisplayLocation_t m_eModifierDisplayLocaiton;
	// MPropertyDescription = "When set, the message will appear in the middle of the HUD for the target player."
	CUtlString m_strHudMessageText;
	// MPropertyDescription = "When set, the modifier will not be visible overhead of the casting player for the other players"
	bool m_bIsHiddenOverhead;
	// MPropertyDescription = "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
	CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI;
	// MPropertyStartGroup = "Responses"
	CCitadelModifierResponseRules_t m_OnCreateResponse;
	// MPropertyStartGroup = "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceCreated;
	// MPropertyDescription = "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
	bool m_bEndCreatedSequenceOnRemove;
	CitadelCameraOperationsSequence_t m_cameraSequenceRemoved;
	// MPropertyStartGroup = "Barrier"
	ModifierBarrierBehavior_t m_BarrierBehavior;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrierCreateParticle;
	bool m_bSupressDefaultBarrierBreakParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_sExpiredSound;
	// MPropertyDescription = "Overrides the default footstep. The footstep with the greatest Priority is selected. It must have a priority greater than -1 to be selected!"
	FootstepSound_t m_FootstepOverride;
	// MPropertyDescription = "Plays alongside the default footstep."
	CSoundEventName m_FootstepAdditional;
	bool m_bRemoveOnInterrupted;
};
