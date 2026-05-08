#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_DebugClipmapCSKernel_TypeDefinitionIndex = 30473;

	enum class LyraBakedDataManager_DebugClipmapCSKernel : ::System::Int32
	{
		kInitSceneVoxelVisualizationBuffer = 0,
		kUnpackSectorSceneVoxelForDebug = 1,
		kFullCompressSceneVoxelClipmap = 2,
		kDiffSceneVoxelClipmap = 3,
		kClearVoxelVisualizationIndirectDrawBuffer = 9,
		kMinKernelCount = 10,
	};
}
