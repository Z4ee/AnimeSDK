#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ReflectionType_TypeDefinitionIndex = 27860;

	enum class ReflectionType : ::System::Int32
	{
		ReflectionProbe = 1,
		PlanarReflection = 2,
		Cubemap = 0,
	};
}
