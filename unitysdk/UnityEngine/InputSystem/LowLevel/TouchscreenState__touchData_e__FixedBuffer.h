#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchscreenState__touchData_e__FixedBuffer_TypeDefinitionIndex = 32517;

	struct alignas(1) TouchscreenState__touchData_e__FixedBuffer
	{
		::System::Byte data[560]; // 0x0
	};
}
