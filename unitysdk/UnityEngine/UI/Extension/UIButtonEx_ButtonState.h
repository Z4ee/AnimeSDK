#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ButtonState_TypeDefinitionIndex = 70892;

	enum class UIButtonEx_ButtonState : ::System::Int32
	{
		Pressed = 1,
		Disabled = 3,
		Highlighted = 2,
		Normal = 0,
	};
}
