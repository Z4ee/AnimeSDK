#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionType_TypeDefinitionIndex = 32192;

	enum class InputActionType : ::System::Int32
	{
		Value = 0,
		Button = 1,
		PassThrough = 2,
	};
}
