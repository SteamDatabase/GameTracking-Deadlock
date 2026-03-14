// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Modifier_Nano_PredatoryStatueVData",
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
//	"m_bRemoveOnInterrupted": false,
//	"m_AOEParticle": "",
//	"m_EnabledParticle": "",
//	"m_DrainParticle": "",
//	"m_strEnabledSound": "",
//	"m_strEnabledLoopSound": "",
//	"m_strDisabledSound": "",
//	"m_strLaserHitSound": "",
//	"m_strLaserStartSound": "",
//	"m_strLaserLoopSound": "",
//	"m_TargetModifier":
//	{
//	},
//	"m_RevealModifier":
//	{
//	},
//	"m_StatueInvis":
//	{
//	},
//	"m_flNewTargetAttackTime": 0.500000,
//	"m_flMinRevealTime": 2.000000,
//	"m_flMinDebuffTime": 3.000000
//}
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strEnabledSound;
	CSoundEventName m_strEnabledLoopSound;
	CSoundEventName m_strDisabledSound;
	CSoundEventName m_strLaserHitSound;
	CSoundEventName m_strLaserStartSound;
	CSoundEventName m_strLaserLoopSound;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier;
	CEmbeddedSubclass< CCitadelModifier > m_RevealModifier;
	CEmbeddedSubclass< CCitadelModifier > m_StatueInvis;
	// MPropertyStartGroup = "GamePlay"
	float32 m_flNewTargetAttackTime;
	float32 m_flMinRevealTime;
	float32 m_flMinDebuffTime;
};
