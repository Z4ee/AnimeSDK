#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneEffectQuality_TypeDefinitionIndex = 27081;

	enum class SceneEffectQuality : ::System::Int32
	{
		High = 2,
		Middle = 1,
		VeryHigh = 3,
		Low = 0,
	};
}
