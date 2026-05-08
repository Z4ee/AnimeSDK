#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeUpdateType_TypeDefinitionIndex = 80159;

	enum class UITimeWidget_TimeUpdateType : ::System::Int32
	{
		CountUp = 3,
		TimeStampCountDown = 2,
		Static = 0,
		CountDown = 1,
	};
}
