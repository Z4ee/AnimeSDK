#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BloomResolution_TypeDefinitionIndex = 27950;

	enum class BloomResolution : ::System::Int32
	{
		Quarter = 4,
		Half = 2,
	};
}
