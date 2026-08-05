#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::InputSystem { class PlayerInput; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CONTROLSCHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5660)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_ControlsChangedEvent_TypeDefinitionIndex = 32325;

	class PlayerInput_ControlsChangedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CONTROLSCHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
