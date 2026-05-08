#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_DayTimeFrameType_TypeDefinitionIndex = 29908;

	enum class VisualEnvironmentE_DayTimeFrameType : ::System::Int32
	{
		Day = 0,
		Evening = 1,
		Night = 2,
		Other = 3,
		None = 4,
	};
}
