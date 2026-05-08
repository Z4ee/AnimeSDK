#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_ResolutionOption_TypeDefinitionIndex = 29915;

	enum class VisualEnvironmentE_ResolutionOption : ::System::Int32
	{
		Low = 256,
		Medium = 512,
		High = 1024,
		Ultra = 2048,
	};
}
