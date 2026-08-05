#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::InputSystem { class PlayerInput; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERJOINEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5C700)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInputManager_PlayerJoinedEvent_TypeDefinitionIndex = 32327;

	class PlayerInputManager_PlayerJoinedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERJOINEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
