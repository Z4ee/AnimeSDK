#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem::GamepadEx { class ProcessGyroInput; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_GAMEPADGYROSUPPORT_ADD_ONPROCESSSENSORINPUT_OFFSET UNITYSDK_OFFSET(0x1DCFB6D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_GAMEPADGYROSUPPORT_INVOKEONPROCESSSENSORINPUT_OFFSET UNITYSDK_OFFSET(0x1DCF9820)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_GAMEPADGYROSUPPORT_REMOVE_ONPROCESSSENSORINPUT_OFFSET UNITYSDK_OFFSET(0x1DCFB780)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int GamepadGyroSupport_TypeDefinitionIndex = 39082;

	class GamepadGyroSupport : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::GamepadEx::ProcessGyroInput** StaticGet_OnProcessSensorInput()
		{
			return (::UnityEngine::InputSystem::GamepadEx::ProcessGyroInput**)Il2CppClass::FromTypeDefinitionIndex(GamepadGyroSupport_TypeDefinitionIndex)->GetStaticField(0x29670);
		}

		static ::System::Void add_OnProcessSensorInput(::UnityEngine::InputSystem::GamepadEx::ProcessGyroInput* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::GamepadEx::ProcessGyroInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_GAMEPADGYROSUPPORT_ADD_ONPROCESSSENSORINPUT_OFFSET))(value);
		}

		static ::System::Void remove_OnProcessSensorInput(::UnityEngine::InputSystem::GamepadEx::ProcessGyroInput* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::GamepadEx::ProcessGyroInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_GAMEPADGYROSUPPORT_REMOVE_ONPROCESSSENSORINPUT_OFFSET))(value);
		}

		static ::System::Void InvokeOnProcessSensorInput(::UnityEngine::Vector3 gyro, ::UnityEngine::Vector3 accel, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_GAMEPADGYROSUPPORT_INVOKEONPROCESSSENSORINPUT_OFFSET))(gyro, accel, deltaTime);
		}
	};
}
