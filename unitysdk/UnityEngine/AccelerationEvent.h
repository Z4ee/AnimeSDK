#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AccelerationEvent_TypeDefinitionIndex = 5260;

	struct alignas(4) AccelerationEvent
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single m_TimeDelta; // 0x1C
	};
}
