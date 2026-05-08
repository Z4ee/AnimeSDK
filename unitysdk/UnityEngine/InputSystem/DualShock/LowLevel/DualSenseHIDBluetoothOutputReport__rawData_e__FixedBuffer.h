#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDBluetoothOutputReport__rawData_e__FixedBuffer_TypeDefinitionIndex = 29177;

	struct alignas(1) DualSenseHIDBluetoothOutputReport__rawData_e__FixedBuffer
	{
		::System::Byte data[74]; // 0x0
	};
}
