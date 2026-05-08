#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/XInputController.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLERWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35E010)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputControllerWindows_TypeDefinitionIndex = 29090;

	class XInputControllerWindows : public ::UnityEngine::InputSystem::XInput::XInputController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLERWINDOWS__CTOR_OFFSET))(this);
		}
	};
}
