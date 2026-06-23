#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_Flags_TypeDefinitionIndex = 31644;

	enum class InputRemoting_Flags : ::System::Int32
	{
		Sending = 1,
		StartSendingOnConnect = 2,
	};
}
