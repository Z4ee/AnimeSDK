#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_ButtonState_TypeDefinitionIndex = 56066;

	enum class UIToggleButton_ButtonState : ::System::Int32
	{
		Normal = 0,
		Pressed = 1,
		Highlighted = 2,
		Toggled = 3,
		Disable = 4,
	};
}
