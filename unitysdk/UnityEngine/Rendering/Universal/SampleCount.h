#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SampleCount_TypeDefinitionIndex = 27052;

	enum class SampleCount : ::System::Int32
	{
		Two = 2,
		One = 1,
		Four = 4,
	};
}
