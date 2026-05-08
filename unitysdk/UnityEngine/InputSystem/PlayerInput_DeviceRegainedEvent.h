#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::InputSystem { class PlayerInput; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICEREGAINEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC470F0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_DeviceRegainedEvent_TypeDefinitionIndex = 29048;

	class PlayerInput_DeviceRegainedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICEREGAINEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
