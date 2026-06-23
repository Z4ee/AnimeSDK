#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BloomResolution_TypeDefinitionIndex = 26964;

	enum class BloomResolution : ::System::Int32
	{
		Half = 2,
		Quarter = 4,
	};
}
