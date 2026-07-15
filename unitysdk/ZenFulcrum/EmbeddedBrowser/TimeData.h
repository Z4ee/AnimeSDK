#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int TimeData_TypeDefinitionIndex = 37379;

	struct alignas(4) TimeData
	{
		::System::Single elapsedTime; // 0x10
		::System::Single deltaTime; // 0x14
	};
}
