#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryUserIdCommand__idBuffer_e__FixedBuffer_TypeDefinitionIndex = 29210;

	struct alignas(1) QueryUserIdCommand__idBuffer_e__FixedBuffer
	{
		::System::Byte data[512]; // 0x0
	};
}
