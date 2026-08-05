#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowConfig_TypeDefinitionIndex = 6121;

	struct alignas(4) PerObjectShadowConfig
	{
		::System::Boolean enabled; // 0x10
		::System::Boolean fade; // 0x11
		::System::Boolean useShadowProxy; // 0x12
		::System::Boolean collageAtlas; // 0x13
		::System::Boolean useBakedObjectSpaceBounds; // 0x14
		::System::Boolean isOptimizeRendererDrawFlagOn; // 0x15
		::System::Boolean fixCSMShadowProxyMask; // 0x16
		::System::Boolean disablePerObjectShadowInBlackCanvas; // 0x17
		::System::Boolean distanceCulling; // 0x18
		::System::Boolean distanceCullOnCSMRender; // 0x19
		::System::Boolean checkVisibilityOfCascadeShadow; // 0x1A
		::System::Boolean receiveSelfShadow; // 0x1B
		::System::Boolean fixLargePosition; // 0x1C
		::System::Boolean optimizeProxyBounds; // 0x1D
		::System::Boolean optimizeBiases; // 0x1E
		::System::Int32 maxCount; // 0x20
		::System::Int32 maxAtlasSize; // 0x24
		::System::Int32 resolution; // 0x28
		::System::Int32 maxSizePerEntity; // 0x2C
		::System::Single maxDistance; // 0x30
		::System::Single cullDistance; // 0x34
		::System::Single extent; // 0x38
		::System::Single distanceScaleFactor; // 0x3C
		::System::Single materialLODDistShadow; // 0x40
		::System::UInt32 raycastLayerMask; // 0x44
		::System::Int32 shadowCasterPass; // 0x48
		::System::Boolean isOptimizeHeadBoneMatrix; // 0x4C
		::System::Boolean isCharacterRampTexOn; // 0x4D
		::System::Boolean characterLightLoopDistanceCulling; // 0x4E
		::System::Boolean bindNapCBEveryFrame; // 0x4F
		::System::Boolean useOptimizedMatCapArrayCreation; // 0x50
		::System::Boolean closeMatcapTexArrayWriteable; // 0x51
		::System::Boolean isCharacterMatcapOff; // 0x52
		::System::Boolean isArrayPropertiesOn; // 0x53
		::System::Boolean characterUISelfShadow; // 0x54
		::System::Boolean perObjectShadowOnFace; // 0x55
		::System::Boolean fixCharDirLightNoIntensityBlendWeight; // 0x56
		::System::Boolean fixCharacterFaceLayer; // 0x57
		::System::Boolean characterSkipColorCorrection; // 0x58
		::System::Boolean debuggingStencilShadowLength; // 0x59
		::System::Boolean enableCharacterSimplifyKeyword; // 0x5A
		::System::Boolean isLowEndPlatform; // 0x5B
		::System::Single characterSimplifyValue; // 0x5C
		::System::Int32 toonLightCount; // 0x60
		::System::Int32 napShaderQuality; // 0x64
		::System::Single stencilShadowBlendSrc; // 0x68
		::System::Single stencilShadowBlendDst; // 0x6C
		::System::Single stencilShadowBlendDebugMode; // 0x70
		::System::Single characterPunctualLightCullDistance; // 0x74
		::System::Single cpuLightTileMinSize; // 0x78
		::System::Single characterPunctualLightFadeDistance; // 0x7C
		::System::Boolean fixShadowCoverageOutOfFrustum; // 0x80
		::System::Single unlockLightAngleMovingThreshold; // 0x84
		::System::Single unlockLightAngleFadeOutDuration; // 0x88
		::System::Single unlockLightAngleFadeInDuration; // 0x8C
	};
}
