#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_LongPressState_TypeDefinitionIndex = 70893;

	enum class UIButtonEx_LongPressState : ::System::Int32
	{
		UpPendingPress = 3,
		UpPendingDown = 4,
		Pressing = 2,
		Down = 1,
		Up = 0,
	};
}
