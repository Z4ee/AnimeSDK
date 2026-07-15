#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeType_TypeDefinitionIndex = 4701;

	enum class ReflectionProbeType : ::System::Int32
	{
		Cube = 0,
		Card = 1,
	};
}
