#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBinding_DisplayStringOptions_TypeDefinitionIndex = 31574;

	enum class InputBinding_DisplayStringOptions : ::System::Int32
	{
		DontUseShortDisplayNames = 1,
		DontOmitDevice = 2,
		DontIncludeInteractions = 4,
		IgnoreBindingOverrides = 8,
	};
}
