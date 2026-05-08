#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOQuality_TypeDefinitionIndex = 29818;

	enum class RTXAOQuality : ::System::Int32
	{
		Disable = -1,
		Low = 0,
		Midium = 1,
		High = 2,
	};
}
