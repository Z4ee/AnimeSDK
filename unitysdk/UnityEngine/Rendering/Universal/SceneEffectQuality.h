#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneEffectQuality_TypeDefinitionIndex = 26831;

	enum class SceneEffectQuality : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		VeryHigh = 3,
		High = 2,
	};
}
