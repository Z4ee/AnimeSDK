#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDOutputReportPayload_TypeDefinitionIndex = 32450;

	struct alignas(1) DualSenseHIDOutputReportPayload
	{
		::System::Byte enableFlags1; // 0x10
		::System::Byte enableFlags2; // 0x11
		::System::Byte highFrequencyMotorSpeed; // 0x12
		::System::Byte lowFrequencyMotorSpeed; // 0x13
		::System::Byte redColor; // 0x3C
		::System::Byte greenColor; // 0x3D
		::System::Byte blueColor; // 0x3E
	};
}
