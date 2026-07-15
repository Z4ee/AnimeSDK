#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResScalePolicyType_TypeDefinitionIndex = 34046;

	enum class DynamicResScalePolicyType : ::System::Int32
	{
		ReturnsPercentage = 0,
		ReturnsMinMaxLerpFactor = 1,
	};
}
