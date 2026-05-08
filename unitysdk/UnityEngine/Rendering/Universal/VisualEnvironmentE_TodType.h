#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TodType_TypeDefinitionIndex = 29912;

	enum class VisualEnvironmentE_TodType : ::System::Int32
	{
		Dynamic = 0,
		Static = 1,
		Zero = 2,
		Special = 3,
		DynamicV2 = 4,
	};
}
