#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroupEvent_TypeDefinitionIndex = 4039;

	struct alignas(4) CullingGroupEvent
	{
		::System::Int32 m_Index; // 0x10
		::System::Byte m_PrevState; // 0x14
		::System::Byte m_ThisState; // 0x15
	};
}
