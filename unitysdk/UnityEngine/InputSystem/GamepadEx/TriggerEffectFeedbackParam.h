#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectFeedbackParam_TypeDefinitionIndex = 37449;

	struct alignas(1) TriggerEffectFeedbackParam
	{
		::System::Byte position; // 0x10
		::System::Byte strength; // 0x11
	};
}
