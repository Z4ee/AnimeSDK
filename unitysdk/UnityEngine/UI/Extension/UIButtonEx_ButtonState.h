#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ButtonState_TypeDefinitionIndex = 46951;

	enum class UIButtonEx_ButtonState : ::System::Int32
	{
		Highlighted = 2,
		Pressed = 1,
		Normal = 0,
		Disabled = 3,
	};
}
