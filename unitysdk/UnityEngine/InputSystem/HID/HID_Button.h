#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_Button_TypeDefinitionIndex = 29143;

	enum class HID_Button : ::System::Int32
	{
		Undefined = 0,
		Primary = 1,
		Secondary = 2,
		Tertiary = 3,
	};
}
