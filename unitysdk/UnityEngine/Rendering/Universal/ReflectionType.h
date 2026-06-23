#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ReflectionType_TypeDefinitionIndex = 26888;

	enum class ReflectionType : ::System::Int32
	{
		Cubemap = 0,
		ReflectionProbe = 1,
		PlanarReflection = 2,
	};
}
