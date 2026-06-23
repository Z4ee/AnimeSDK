#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_DebugClipmapCSKernel_TypeDefinitionIndex = 27321;

	enum class LyraBakedDataManager_DebugClipmapCSKernel : ::System::Int32
	{
		kFullCompressSceneVoxelClipmap = 2,
		kClearVoxelVisualizationIndirectDrawBuffer = 9,
		kMinKernelCount = 10,
		kUnpackSectorSceneVoxelForDebug = 1,
		kDiffSceneVoxelClipmap = 3,
		kInitSceneVoxelVisualizationBuffer = 0,
	};
}
