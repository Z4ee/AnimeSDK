#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Collection_LayoutMatcher_TypeDefinitionIndex = 29333;

	struct alignas(8) InputControlLayout_Collection_LayoutMatcher
	{
		::UnityEngine::InputSystem::Utilities::InternedString layoutName; // 0x10
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher; // 0x20
	};
}
