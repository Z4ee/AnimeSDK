#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneEffectLod_TypeDefinitionIndex = 27083;

	enum class SceneEffectLod : ::System::Int32
	{
		High = 1,
		VeryHigh = 0,
		Middle = 2,
		Low = 3,
	};
}
