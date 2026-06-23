#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeShowType_TypeDefinitionIndex = 65551;

	enum class UITimeWidget_TimeShowType : ::System::Int32
	{
		ActivityType = 1,
		OnlyDay = 4,
		ShowHourMinute = 3,
		ShowOne = 2,
		ShowHourMinuteSecond = 5,
		ShowMinuteSecond = 6,
		DefaultType = 0,
	};
}
