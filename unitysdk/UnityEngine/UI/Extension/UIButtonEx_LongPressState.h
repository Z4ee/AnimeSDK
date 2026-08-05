#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_LongPressState_TypeDefinitionIndex = 85046;

	enum class UIButtonEx_LongPressState : ::System::Int32
	{
		UpPendingDown = 4,
		Down = 1,
		UpPendingPress = 3,
		Pressing = 2,
		Up = 0,
	};
}
