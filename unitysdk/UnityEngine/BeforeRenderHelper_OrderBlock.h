#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Events { class UnityAction; }

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderHelper_OrderBlock_TypeDefinitionIndex = 4087;

	struct alignas(8) BeforeRenderHelper_OrderBlock
	{
		::System::Int32 order; // 0x10
		::UnityEngine::Events::UnityAction* callback; // 0x18
	};
}
