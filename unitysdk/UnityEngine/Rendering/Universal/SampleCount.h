#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SampleCount_TypeDefinitionIndex = 30220;

	enum class SampleCount : ::System::Int32
	{
		One = 1,
		Two = 2,
		Four = 4,
	};
}
