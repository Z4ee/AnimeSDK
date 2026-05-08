#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightDataCullChange_TypeDefinitionIndex = 30013;

	struct alignas(4) LightDataCullChange
	{
		::System::Int32 index; // 0x10
		::System::Boolean shouldCull; // 0x14
	};
}
