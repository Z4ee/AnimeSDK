#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectCommand.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectMask.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1B986630)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x999FC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B9865D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x999FD0)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectParam_TypeDefinitionIndex = 37453;

	struct alignas(4) TriggerEffectParam
	{
		// static const ::System::Int32 kSize = 0x80; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectMask triggerMask; // 0x18
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectCommand left; // 0x20
		::UnityEngine::InputSystem::GamepadEx::TriggerEffectCommand right; // 0x58

		::System::Void _ctor(::UnityEngine::InputSystem::GamepadEx::TriggerEffectMask mask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectMask))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM__CTOR_OFFSET))(this, mask);
		}

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		static ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam Create()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_TRIGGEREFFECTPARAM_CREATE_OFFSET))();
		}
	};
}
