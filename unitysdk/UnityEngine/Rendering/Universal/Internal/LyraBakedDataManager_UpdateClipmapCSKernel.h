#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_UpdateClipmapCSKernel_TypeDefinitionIndex = 26918;

	enum class LyraBakedDataManager_UpdateClipmapCSKernel : ::System::Int32
	{
		kCollectPages = 0,
		kInitUpdatePagesIndirectArgsKernelCount = 3,
		kFillBorders = 17,
		kUpdatePagesKernelCount = 6,
		kMinKernelCount = 29,
		kInitUpdatePagesIndirectArgs = 2,
		kClearTextureKernelCount = 3,
		kPropagate = 16,
		kClearPagesKernelCount = 5,
		kClearPages = 11,
		kFillBordersKernelCount = 9,
		kClearTexture = 26,
		kCollectPagesKernelCount = 2,
		kPropagateKernelCount = 1,
		kUpdatePages = 5,
	};
}
