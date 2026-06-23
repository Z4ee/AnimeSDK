#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IMECompositionString__buffer_e__FixedBuffer_TypeDefinitionIndex = 31909;

	struct alignas(2) IMECompositionString__buffer_e__FixedBuffer
	{
		::System::Char data[64]; // 0x0
	};
}
