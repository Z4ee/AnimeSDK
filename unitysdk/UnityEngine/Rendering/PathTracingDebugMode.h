#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PathTracingDebugMode_TypeDefinitionIndex = 4810;

	enum class PathTracingDebugMode : ::System::Int32
	{
		None = 0,
		PerceptualRoughness = 1,
		Metallic = 2,
		Albedo = 3,
		Emission = 4,
	};
}
