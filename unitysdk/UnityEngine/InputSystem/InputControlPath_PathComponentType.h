#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_PathComponentType_TypeDefinitionIndex = 32239;

	enum class InputControlPath_PathComponentType : ::System::Int32
	{
		Name = 0,
		DisplayName = 1,
		Usage = 2,
		Layout = 3,
	};
}
