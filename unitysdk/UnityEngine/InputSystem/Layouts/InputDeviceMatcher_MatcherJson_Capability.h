#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceMatcher_MatcherJson_Capability_TypeDefinitionIndex = 29347;

	struct alignas(8) InputDeviceMatcher_MatcherJson_Capability
	{
		::System::String* path; // 0x10
		::System::String* value; // 0x18
	};
}
