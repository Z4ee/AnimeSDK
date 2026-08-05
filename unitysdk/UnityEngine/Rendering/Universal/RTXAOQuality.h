#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOQuality_TypeDefinitionIndex = 27144;

	enum class RTXAOQuality : ::System::Int32
	{
		Disable = -1,
		Midium = 1,
		High = 2,
		Low = 0,
	};
}
