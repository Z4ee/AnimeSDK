#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_ButtonState_TypeDefinitionIndex = 78295;

	enum class UIToggleButton_ButtonState : ::System::Int32
	{
		Highlighted = 2,
		Toggled = 3,
		Disable = 4,
		Normal = 0,
		Pressed = 1,
	};
}
