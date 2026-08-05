#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_MessageType_TypeDefinitionIndex = 32262;

	enum class InputRemoting_MessageType : ::System::Int32
	{
		Connect = 0,
		Disconnect = 1,
		NewLayout = 2,
		NewDevice = 3,
		NewEvents = 4,
		RemoveDevice = 5,
		RemoveLayout = 6,
		ChangeUsages = 7,
		StartSending = 8,
		StopSending = 9,
	};
}
