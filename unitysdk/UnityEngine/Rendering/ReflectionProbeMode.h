#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeMode_TypeDefinitionIndex = 4703;

	enum class ReflectionProbeMode : ::System::Int32
	{
		Baked = 0,
		Realtime = 1,
		Custom = 2,
	};
}
