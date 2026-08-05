#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShockHIDOutputReport__unknown2_e__FixedBuffer_TypeDefinitionIndex = 32460;

	struct alignas(1) DualShockHIDOutputReport__unknown2_e__FixedBuffer
	{
		::System::Byte data[23]; // 0x0
	};
}
