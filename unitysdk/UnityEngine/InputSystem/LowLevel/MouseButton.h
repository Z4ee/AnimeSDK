#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int MouseButton_TypeDefinitionIndex = 31885;

	enum class MouseButton : ::System::Int32
	{
		Left = 0,
		Right = 1,
		Middle = 2,
		Forward = 3,
		Back = 4,
	};
}
