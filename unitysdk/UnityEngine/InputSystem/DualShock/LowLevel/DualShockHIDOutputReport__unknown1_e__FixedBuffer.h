#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShockHIDOutputReport__unknown1_e__FixedBuffer_TypeDefinitionIndex = 32459;

	struct alignas(1) DualShockHIDOutputReport__unknown1_e__FixedBuffer
	{
		::System::Byte data[2]; // 0x0
	};
}
