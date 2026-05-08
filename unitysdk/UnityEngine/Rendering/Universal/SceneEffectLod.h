#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneEffectLod_TypeDefinitionIndex = 29823;

	enum class SceneEffectLod : ::System::Int32
	{
		VeryHigh = 0,
		High = 1,
		Middle = 2,
		Low = 3,
	};
}
