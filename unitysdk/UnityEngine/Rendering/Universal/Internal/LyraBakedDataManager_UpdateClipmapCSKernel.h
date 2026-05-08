#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_UpdateClipmapCSKernel_TypeDefinitionIndex = 30472;

	enum class LyraBakedDataManager_UpdateClipmapCSKernel : ::System::Int32
	{
		kCollectPagesKernelCount = 2,
		kInitUpdatePagesIndirectArgsKernelCount = 3,
		kUpdatePagesKernelCount = 6,
		kClearPagesKernelCount = 5,
		kPropagateKernelCount = 1,
		kFillBordersKernelCount = 9,
		kClearTextureKernelCount = 3,
		kCollectPages = 0,
		kInitUpdatePagesIndirectArgs = 2,
		kUpdatePages = 5,
		kClearPages = 11,
		kPropagate = 16,
		kFillBorders = 17,
		kClearTexture = 26,
		kMinKernelCount = 29,
	};
}
