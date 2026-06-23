#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TodType_TypeDefinitionIndex = 26504;

	enum class VisualEnvironmentE_TodType : ::System::Int32
	{
		Special = 3,
		Zero = 2,
		Dynamic = 0,
		DynamicV2 = 4,
		Static = 1,
	};
}
