#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_LongPressState_TypeDefinitionIndex = 46950;

	enum class UIButtonEx_LongPressState : ::System::Int32
	{
		UpPendingPress = 3,
		Up = 0,
		UpPendingDown = 4,
		Pressing = 2,
		Down = 1,
	};
}
