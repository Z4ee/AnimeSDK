#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectFeedbackParam.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectMode.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectVibrationParam.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectWeaponParam.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectCommand_TypeDefinitionIndex = 39078;

	struct alignas(4) TriggerEffectCommand
	{
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectMode mode; // 0x10
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectWeaponParam weapon; // 0x18
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectVibrationParam vibration; // 0x18
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectFeedbackParam feedback; // 0x18
	};
}
