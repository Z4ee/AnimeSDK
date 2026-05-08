#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int SendBufferedHapticCommand__buffer_e__FixedBuffer_TypeDefinitionIndex = 29082;

	struct alignas(1) SendBufferedHapticCommand__buffer_e__FixedBuffer
	{
		::System::Byte data[1024]; // 0x0
	};
}
