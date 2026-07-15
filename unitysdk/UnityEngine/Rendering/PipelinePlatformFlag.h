#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PipelinePlatformFlag_TypeDefinitionIndex = 35972;

	enum class PipelinePlatformFlag : ::System::Int32
	{
		Android_VK_RenderPassSplitInMali = 1,
		Android_GLES_BufferUpdateTrick = 2,
		Android_InputAttachmentDecalUseDepth = 4,
		Android_InputAttachmentDecal = 8,
		Android_VK_DisableStaticUBO = 16,
		Android_DisableMaliWorkaroundWarning = 32,
		Android_GLES_BuggleDrawBeforeIndirectDraw = 64,
		Android_VK_DepthBoundsLocalLight = 128,
		Android_DisableRTLCalc = 256,
		Android_DepthInputAttachmentForSoftParticles = 512,
		Android_ARMDepthFetchForSoftParticles = 1024,
		Android_SSBODynamicIndex = 2048,
		Android_GLES_SharedVaraibleTrick = 4096,
		iOS_MetalFXTemporalUpscaler = 8192,
		Android_FastPathBufferUploading = 16384,
		PrelightingUseDepthCopy = 32768,
		Android_VK_BuggyStencilTest = 65536,
		Android_VK_TrimScratchBuffer = 131072,
		Android_VK_BlitUseQuadExclusive = 262144,
		Android_VK_BarrierOpt = 524288,
		HasBuggyNewComputeSkinning = 1048576,
		Android_VK_Tangent1BarrierPre = 2097152,
	};
}
