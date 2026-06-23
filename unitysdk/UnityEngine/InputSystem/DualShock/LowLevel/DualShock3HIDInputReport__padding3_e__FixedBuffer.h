#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShock3HIDInputReport__padding3_e__FixedBuffer_TypeDefinitionIndex = 31836;

	struct alignas(1) DualShock3HIDInputReport__padding3_e__FixedBuffer
	{
		::System::Byte data[8]; // 0x0
	};
}
