#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectMask_TypeDefinitionIndex = 39074;

	enum class TriggerEffectMask : ::System::Byte
	{
		L2 = 0x1,
		R2 = 0x2,
	};
}
