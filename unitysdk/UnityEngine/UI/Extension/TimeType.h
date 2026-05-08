#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TimeType_TypeDefinitionIndex = 60327;

	enum class TimeType : ::System::Int32
	{
		Hour = 1,
		Day = 0,
		Seconds = 3,
		Minutes = 2,
	};
}
