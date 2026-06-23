#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int EGlobalRTType_TypeDefinitionIndex = 5905;

	enum class EGlobalRTType : ::System::Int32
	{
		None = -1,
		CameraGBuffer0 = 0,
		CameraGBuffer1 = 1,
		CameraGBuffer2 = 2,
		CameraGBuffer3 = 3,
		_ScreenSpaceShadowTexture = 4,
		ScreenSpaceReflection = 5,
		MotionVectorPass = 6,
		BeforeUiBlur = 7,
		CameraGBuffer4 = 8,
		FXMaskForScene = 9,
		_CameraDistortionTexture = 10,
		_CurrentOcclusionDepth = 11,
		_PerObjectShadowAtlas = 12,
		_CameraDepthTexture = 13,
		_OffScreenParticlesRT = 14,
		_HalfDepth = 15,
		_CameraDistortionTextureOverlay = 16,
		_CameraOpaqueTexture = 17,
		CameraGBuffer5 = 18,
		CameraGBuffer6 = 19,
		HalfMSAA4XDepth = 20,
		ForwardDepth = 21,
		ForwardNormal = 22,
		ForwardMask = 23,
		OffScreenUI = 24,
		ExtraMotionVector = 25,
		TransparentMask = 26,
		SceneColorAfterPost = 27,
		OcclusionAndBentNormal = 28,
		NearFieldGI = 29,
		ReactiveMask = 30,
		Count = 31,
	};
}
