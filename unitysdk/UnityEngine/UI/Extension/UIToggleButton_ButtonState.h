#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_ButtonState_TypeDefinitionIndex = 75346;

	enum class UIToggleButton_ButtonState : ::System::Int32
	{
		Disable = 4,
		Normal = 0,
		Highlighted = 2,
		Pressed = 1,
		Toggled = 3,
	};
}
