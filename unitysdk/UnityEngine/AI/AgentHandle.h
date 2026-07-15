#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AgentHandle_TypeDefinitionIndex = 5670;

	struct alignas(4) AgentHandle
	{
		::System::Int32 index; // 0x10
		::System::Int32 version; // 0x14
	};
}
