#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::InputSystem { class PlayerInput; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICELOSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B3E60)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_DeviceLostEvent_TypeDefinitionIndex = 29047;

	class PlayerInput_DeviceLostEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICELOSTEVENT__CTOR_OFFSET))(this);
		}
	};
}
