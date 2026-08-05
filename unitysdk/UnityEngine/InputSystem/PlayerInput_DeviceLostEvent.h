#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::InputSystem { class PlayerInput; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICELOSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F810E90)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_DeviceLostEvent_TypeDefinitionIndex = 32323;

	class PlayerInput_DeviceLostEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICELOSTEVENT__CTOR_OFFSET))(this);
		}
	};
}
