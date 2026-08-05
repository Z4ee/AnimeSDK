#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DpadControl_ButtonBits_TypeDefinitionIndex = 32635;

	enum class DpadControl_ButtonBits : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
	};
}
