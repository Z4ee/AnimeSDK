#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VoxelIrradianceCacheShadingFallback_TypeDefinitionIndex = 4844;

	enum class VoxelIrradianceCacheShadingFallback : ::System::Int32
	{
		FallbackInDecodingPass = 0,
		FallbackInSeparatePass = 1,
	};
}
