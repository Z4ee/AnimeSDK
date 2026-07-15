#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPTestConfig_TypeDefinitionIndex = 4852;

	struct alignas(8) CRPTestConfig
	{
		::System::UInt64 _Flag; // 0x10
	};
}
