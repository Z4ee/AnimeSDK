#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventTrace_DeviceInfo.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__DISPLAYCLASS43_0__APPLYDEVICEMAPPING_B__0_OFFSET UNITYSDK_OFFSET(0x1B990AB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B990AA0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_ReplayController___c__DisplayClass43_0_TypeDefinitionIndex = 29267;

	class InputEventTrace_ReplayController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Int32 originalDeviceId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyDeviceMapping_b__0(::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER___C__DISPLAYCLASS43_0__APPLYDEVICEMAPPING_B__0_OFFSET))(this, x);
		}
	};
}
