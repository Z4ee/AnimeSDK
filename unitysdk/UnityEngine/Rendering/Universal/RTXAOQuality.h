#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOQuality_TypeDefinitionIndex = 26543;

	enum class RTXAOQuality : ::System::Int32
	{
		Midium = 1,
		Disable = -1,
		Low = 0,
		High = 2,
	};
}
