#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/LowLevel/XInputControllerWindowsState_Button.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA14790)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0xA147A0)

namespace UnityEngine::InputSystem::XInput::LowLevel
{
	inline static constexpr unsigned int XInputControllerWindowsState_TypeDefinitionIndex = 31748;

	struct alignas(2) XInputControllerWindowsState
	{
		::System::UInt16 buttons; // 0x10
		::System::Byte leftTrigger; // 0x12
		::System::Byte rightTrigger; // 0x13
		::System::Int16 leftStickX; // 0x14
		::System::Int16 leftStickY; // 0x16
		::System::Int16 rightStickX; // 0x18
		::System::Int16 rightStickY; // 0x1A

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_GET_FORMAT_OFFSET))(this);
		}
		*/

		::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState WithButton(::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState_Button button)
		{
			return ((::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState(*)(::PVOID, ::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState_Button))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_WITHBUTTON_OFFSET))(this, button);
		}
	};
}
