#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAParamRef_TypeDefinitionIndex = 4787;

	struct alignas(2) BAParamRef
	{
		::System::Int16 graphIndex; // 0x10
		::System::Int16 paramIndex; // 0x12
	};
}
