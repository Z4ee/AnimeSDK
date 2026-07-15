#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPPreDevConfig_TypeDefinitionIndex = 4850;

	struct alignas(4) CRPPreDevConfig
	{
		::System::Int32 DebugPlatform; // 0x10
		::System::Boolean GBufferDebug; // 0x14
	};
}
