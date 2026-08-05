#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ButtonState_TypeDefinitionIndex = 85042;

	enum class UIButtonEx_ButtonState : ::System::Int32
	{
		Disabled = 3,
		Normal = 0,
		Highlighted = 2,
		Pressed = 1,
	};
}
