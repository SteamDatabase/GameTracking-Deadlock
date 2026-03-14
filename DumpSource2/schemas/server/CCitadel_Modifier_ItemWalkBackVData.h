// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Modifier_ItemWalkBackVData",
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
//	"m_IdleParticle": "",
//	"m_RunningParticle": "",
//	"m_BiasEffectPositive": "",
//	"m_BiasEffectNegative": "",
//	"m_flStopDistance": 600.000000,
//	"m_flMaxSpeedDistance": 1600.000000,
//	"m_flSlowSpeed": 40.000000,
//	"m_flFastSpeed": 250.000000,
//	"m_flVerticalOffset": 16.000000,
//	"m_flTolerance": 20.000000,
//	"m_flRepathTime": 5.000000,
//	"m_flAutoRunTime": 75.000000,
//	"m_flTimeToStartAutoRun": 5.000000,
//	"m_flWaitTimeDistance": 1000.000000,
//	"m_flWaitTimeLimit": 20.000000,
//	"m_flCheckPlayerRate": 0.500000
//}
class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectPositive;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectNegative;
	// MPropertyStartGroup = "Gameplay"
	float32 m_flStopDistance;
	float32 m_flMaxSpeedDistance;
	float32 m_flSlowSpeed;
	float32 m_flFastSpeed;
	float32 m_flVerticalOffset;
	float32 m_flTolerance;
	float32 m_flRepathTime;
	float32 m_flAutoRunTime;
	float32 m_flTimeToStartAutoRun;
	float32 m_flWaitTimeDistance;
	float32 m_flWaitTimeLimit;
	float32 m_flCheckPlayerRate;
};
