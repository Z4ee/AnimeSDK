#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseHIDOutputReport__rawdata_e__FixedBuffer_TypeDefinitionIndex = 37446;

	struct alignas(1) DualSenseHIDOutputReport__rawdata_e__FixedBuffer
	{
		::System::Byte data[48]; // 0x0
	};
}
