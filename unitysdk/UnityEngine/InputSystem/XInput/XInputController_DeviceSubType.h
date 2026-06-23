#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputController_DeviceSubType_TypeDefinitionIndex = 31743;

	enum class XInputController_DeviceSubType : ::System::Int32
	{
		Unknown = 0,
		Gamepad = 1,
		Wheel = 2,
		ArcadeStick = 3,
		FlightStick = 4,
		DancePad = 5,
		Guitar = 6,
		GuitarAlternate = 7,
		DrumKit = 8,
		GuitarBass = 11,
		ArcadePad = 19,
	};
}
