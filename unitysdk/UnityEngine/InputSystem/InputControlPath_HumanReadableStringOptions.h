#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_HumanReadableStringOptions_TypeDefinitionIndex = 31618;

	enum class InputControlPath_HumanReadableStringOptions : ::System::Int32
	{
		None = 0,
		OmitDevice = 2,
		UseShortNames = 4,
	};
}
