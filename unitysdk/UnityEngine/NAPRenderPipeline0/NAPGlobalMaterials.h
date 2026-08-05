#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NAPGlobalMaterials_TypeDefinitionIndex = 5707;

	enum class NAPGlobalMaterials : ::System::Int32
	{
		kBlitShadow = 0,
		kColorGradingLut_General = 1,
		kColorGradingLut_Scene = 2,
		kColorGradingLut_Character = 3,
		kOcclusionProcess = 4,
		kOcclusionBlur = 5,
		kCameraMotionVector = 6,
		kSamplingMaterial = 7,
		kError = 8,
		kSkyBox = 9,
		kSkyboxMaterialMiddleOn = 10,
		kHDROutput = 11,
		kBlit = 12,
		kGaussianBlur = 13,
		kLightShaft = 14,
		kLightShaftBlur = 15,
		kLightShaftOcclusion = 16,
		kNapBloom = 17,
		kNapBloomGaussH = 18,
		kNapBloomGaussV = 19,
		kTemporalAntialize = 20,
		kOpaqueUberPost = 21,
		kCopyDepth = 22,
		kOpaqueOverdraw = 23,
		kDebugWorldLightGrid = 24,
		kDepthPyramid = 25,
		kDeferredShading = 26,
		kCopyDepthForOffScreenParticles = 27,
		kDrawSkyLut = 28,
		kScreenSpaceReflection = 29,
		kScreenSpaceShadows = 30,
		kGaussianBlurForScreenSpaceShadow = 31,
		kPerObjectShadowResolve = 32,
		kGaussianBlurForEasyMirrorReflection = 33,
		kVolumetricFog = 34,
		kBlendOffScreenUI = 35,
		kCount = 36,
	};
}
