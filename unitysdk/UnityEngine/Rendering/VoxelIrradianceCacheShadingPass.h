#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VoxelIrradianceCacheShadingPass_TypeDefinitionIndex = 4843;

	enum class VoxelIrradianceCacheShadingPass : ::System::Int32
	{
		ShadingInDecodingPass = 0,
		ShadingInMainLightPass = 1,
		ShadingInSeparatePass = 2,
	};
}
