#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch_ExtraDataPerTouchState_TypeDefinitionIndex = 29157;

	struct alignas(4) Touch_ExtraDataPerTouchState
	{
		::UnityEngine::Vector2 accumulatedDelta; // 0x10
		::System::UInt32 uniqueId; // 0x18
	};
}
