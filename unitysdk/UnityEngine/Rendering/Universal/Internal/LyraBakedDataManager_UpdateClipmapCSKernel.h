#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_UpdateClipmapCSKernel_TypeDefinitionIndex = 27332;

	enum class LyraBakedDataManager_UpdateClipmapCSKernel : ::System::Int32
	{
		kClearTextureKernelCount = 3,
		kMinKernelCount = 29,
		kUpdatePagesKernelCount = 6,
		kPropagateKernelCount = 1,
		kUpdatePages = 5,
		kFillBordersKernelCount = 9,
		kCollectPages = 0,
		kPropagate = 16,
		kClearPages = 11,
		kCollectPagesKernelCount = 2,
		kFillBorders = 17,
		kClearPagesKernelCount = 5,
		kInitUpdatePagesIndirectArgsKernelCount = 3,
		kInitUpdatePagesIndirectArgs = 2,
		kClearTexture = 26,
	};
}
