#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeUpdateType_TypeDefinitionIndex = 65550;

	enum class UITimeWidget_TimeUpdateType : ::System::Int32
	{
		TimeStampCountDown = 2,
		CountUp = 3,
		Static = 0,
		CountDown = 1,
	};
}
