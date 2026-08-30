#pragma once
#include "unitysdk/unitysdk.h"

namespace XInputDotNetPure
{
	inline static constexpr unsigned int ButtonState_TypeDefinitionIndex = 39483;

	enum class ButtonState : ::System::Int32
	{
		Pressed = 0,
		Released = 1,
	};
}
