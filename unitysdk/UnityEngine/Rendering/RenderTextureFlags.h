#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTextureFlags_TypeDefinitionIndex = 34131;

	enum class RenderTextureFlags : ::System::Int32
	{
		kRTFlagNone = 0,
		kRTFlagMipMap = 1,
		kRTFlagAutoGenerateMips = 2,
		kRTFlagSRGB = 4,
		kRTFlagEyeTexture = 8,
		kRTFlagRandomWrite = 16,
		kRTFlagCreatedFromScript = 32,
		kRTFlagSampleOnlyDepth = 64,
		kRTFlagAllowVerticalFlip = 128,
		kRTFlagNoResolvedColorSurface = 256,
		kRTFlagSampleMSDepth = 512,
		kRTFlagDynamicallyScalable = 1024,
		kRTFlagBindMS = 2048,
		kRTFlagsAssignTextureForDepth = 4096,
		kRTFlagDisableCompatibleFormat = 8192,
		kRTFlagsSRVPerMip = 16384,
	};
}
