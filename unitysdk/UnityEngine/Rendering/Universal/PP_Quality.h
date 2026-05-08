#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PP_Quality_TypeDefinitionIndex = 30140;

	enum class PP_Quality : ::System::Int32
	{
		QUALITY_VERY_HIGH = 0,
		QUALITY_HIGH = 1,
		QUALITY_MIDDLE = 2,
		QUALITY_LOW = 3,
	};
}
