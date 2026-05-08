#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Gamepad.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0889B0)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_TypeDefinitionIndex = 29122;

	class SwitchProControllerHID : public ::UnityEngine::InputSystem::Gamepad
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID__CTOR_OFFSET))(this);
		}
	};
}
