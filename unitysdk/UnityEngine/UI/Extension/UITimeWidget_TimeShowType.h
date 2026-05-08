#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeShowType_TypeDefinitionIndex = 80158;

	enum class UITimeWidget_TimeShowType : ::System::Int32
	{
		DefaultType = 0,
		OnlyDay = 4,
		ActivityType = 1,
		ShowMinuteSecond = 6,
		ShowHourMinute = 3,
		ShowOne = 2,
		ShowHourMinuteSecond = 5,
	};
}
