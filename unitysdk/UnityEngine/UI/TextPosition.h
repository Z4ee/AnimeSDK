#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextPosition_TypeDefinitionIndex = 5919;

	struct alignas(8) TextPosition
	{
		::System::Int64 column; // 0x10
		::System::Int64 line; // 0x18
	};
}
