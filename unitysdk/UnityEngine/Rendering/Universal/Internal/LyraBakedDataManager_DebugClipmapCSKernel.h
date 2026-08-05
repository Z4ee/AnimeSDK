#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_DebugClipmapCSKernel_TypeDefinitionIndex = 26916;

	enum class LyraBakedDataManager_DebugClipmapCSKernel : ::System::Int32
	{
		kFullCompressSceneVoxelClipmap = 2,
		kDiffSceneVoxelClipmap = 3,
		kMinKernelCount = 10,
		kInitSceneVoxelVisualizationBuffer = 0,
		kClearVoxelVisualizationIndirectDrawBuffer = 9,
		kUnpackSectorSceneVoxelForDebug = 1,
	};
}
