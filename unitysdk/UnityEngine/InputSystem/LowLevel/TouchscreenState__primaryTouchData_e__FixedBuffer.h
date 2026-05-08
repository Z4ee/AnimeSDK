#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchscreenState__primaryTouchData_e__FixedBuffer_TypeDefinitionIndex = 29240;

	struct alignas(1) TouchscreenState__primaryTouchData_e__FixedBuffer
	{
		::System::Byte data[56]; // 0x0
	};
}
