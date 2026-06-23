#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TonemappingMode_TypeDefinitionIndex = 5866;

	enum class TonemappingMode : ::System::Int32
	{
		None = 0,
		Neutral = 1,
		ACES = 2,
		Custom = 3,
	};
}
