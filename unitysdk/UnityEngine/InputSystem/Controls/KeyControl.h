#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/ButtonControl.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x1A02F620)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_SCANCODE_OFFSET UNITYSDK_OFFSET(0x1A02F640)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1A02F680)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x1A02F630)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02F800)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int KeyControl_TypeDefinitionIndex = 29361;

	class KeyControl : public ::UnityEngine::InputSystem::Controls::ButtonControl
	{
	public:
		::System::Int32 m_ScanCode; // 0x120
		::UnityEngine::InputSystem::Key _keyCode_k__BackingField; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Key get_keyCode()
		{
			return ((::UnityEngine::InputSystem::Key(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_KEYCODE_OFFSET))(this);
		}

		::System::Void set_keyCode(::UnityEngine::InputSystem::Key value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_SET_KEYCODE_OFFSET))(this, value);
		}

		::System::Int32 get_scanCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_SCANCODE_OFFSET))(this);
		}

		::System::Void RefreshConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_REFRESHCONFIGURATION_OFFSET))(this);
		}
	};
}
