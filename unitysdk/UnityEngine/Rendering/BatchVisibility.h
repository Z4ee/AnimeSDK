#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchVisibility_TypeDefinitionIndex = 4720;

	struct alignas(4) BatchVisibility
	{
		::System::Int32 offset; // 0x10
		::System::Int32 instancesCount; // 0x14
		::System::Int32 visibleCount; // 0x18
	};
}
