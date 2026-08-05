#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlLayoutChange_TypeDefinitionIndex = 32234;

	enum class InputControlLayoutChange : ::System::Int32
	{
		Added = 0,
		Removed = 1,
		Replaced = 2,
	};
}
