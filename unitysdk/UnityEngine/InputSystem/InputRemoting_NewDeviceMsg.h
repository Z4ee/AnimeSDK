#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x1EC4AE10)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1EC49FF0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_NewDeviceMsg_TypeDefinitionIndex = 32274;

	class InputRemoting_NewDeviceMsg : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::UnityEngine::InputSystem::InputRemoting_Message(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG_CREATE_OFFSET))(device);
		}

		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG_PROCESS_OFFSET))(receiver, msg);
		}
	};
}
