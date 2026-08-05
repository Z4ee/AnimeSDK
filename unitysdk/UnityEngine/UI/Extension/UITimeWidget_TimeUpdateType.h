#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeUpdateType_TypeDefinitionIndex = 61321;

	enum class UITimeWidget_TimeUpdateType : ::System::Int32
	{
		CountUp = 3,
		CountDown = 1,
		Static = 0,
		TimeStampCountDown = 2,
	};
}
