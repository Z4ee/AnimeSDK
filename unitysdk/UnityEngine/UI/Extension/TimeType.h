#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TimeType_TypeDefinitionIndex = 83727;

	enum class TimeType : ::System::Int32
	{
		Day = 0,
		Hour = 1,
		Seconds = 3,
		Minutes = 2,
	};
}
