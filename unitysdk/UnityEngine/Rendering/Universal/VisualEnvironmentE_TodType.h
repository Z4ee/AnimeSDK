#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TodType_TypeDefinitionIndex = 27442;

	enum class VisualEnvironmentE_TodType : ::System::Int32
	{
		Static = 1,
		Special = 3,
		DynamicV2 = 4,
		Dynamic = 0,
		Zero = 2,
	};
}
