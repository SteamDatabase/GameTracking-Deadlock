// MGetKV3ClassDefaults = Could not parse KV3 Defaults
class CCitadelPlayerPawn_GraphController2 : public CAnimGraphControllerBase
{
	CAnimGraph2ParamRef< float32 > m_flTimeScale;
	CAnimGraph2ParamRef< float32 > m_flForwardSpeed;
	CAnimGraph2ParamRef< float32 > m_flLookHeading;
	CAnimGraph2ParamRef< float32 > m_flLookPitch;
	CAnimGraph2ParamRef< float32 > m_flMoveSpeed;
	CAnimGraph2ParamRef< float32 > m_flStrafeSpeed;
	CAnimGraph2ParamRef< float32 > m_flVerticalSpeed;
	CAnimGraph2ParamRef< float32 > m_flRandomSeed;
	CAnimGraph2ParamOptionalRef< Vector > m_vLocomotionFacing;
	CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget;
	CAnimGraph2ParamRef< CGlobalSymbol > m_HeroActionSource;
	CAnimGraph2ParamRef< CGlobalSymbol > m_HeroAction;
	CAnimGraph2ParamRef< CGlobalSymbol > m_HeroState;
	CAnimGraph2ParamOptionalRef< bool > m_InstantCast;
	CAnimGraph2ParamOptionalRef< bool > m_AltCast;
	CAnimGraph2ParamRef< CGlobalSymbol > m_BaseAction;
	CAnimGraph2ParamRef< CGlobalSymbol > m_BaseState;
	CAnimGraph2ParamRef< CGlobalSymbol > m_FlinchType;
	CAnimGraph2ParamRef< float32 > m_CrouchFraction;
	CAnimGraph2ParamRef< CGlobalSymbol > m_MoveType;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_CornerLean;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Environment;
	CAnimGraph2ParamOptionalRef< float32 > m_flDirectionCommitment;
	bool m_bInGraphParamUpdateFlow;
};
