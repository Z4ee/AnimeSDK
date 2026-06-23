#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int UsageHint_TypeDefinitionIndex = 31724;

	struct alignas(8) UsageHint
	{
		::System::String* content; // 0x10
	};
}
