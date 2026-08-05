#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeShowType_TypeDefinitionIndex = 61322;

	enum class UITimeWidget_TimeShowType : ::System::Int32
	{
		DefaultType = 0,
		ActivityType = 1,
		OnlyDay = 4,
		ShowMinuteSecond = 6,
		ShowHourMinute = 3,
		ShowHourMinuteSecond = 5,
		ShowOne = 2,
	};
}
