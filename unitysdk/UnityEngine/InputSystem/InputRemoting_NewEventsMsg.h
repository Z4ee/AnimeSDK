#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_CREATERESETEVENT_OFFSET UNITYSDK_OFFSET(0x1B98C0D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_CREATESTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1B98C370)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x1B98C230)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B98C4B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_NewEventsMsg_TypeDefinitionIndex = 29001;

	class InputRemoting_NewEventsMsg : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputRemoting_Message CreateResetEvent(::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean isHardReset)
		{
			return ((::UnityEngine::InputSystem::InputRemoting_Message(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_CREATERESETEVENT_OFFSET))(device, isHardReset);
		}

		static ::UnityEngine::InputSystem::InputRemoting_Message CreateStateEvent(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::UnityEngine::InputSystem::InputRemoting_Message(*)(::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_CREATESTATEEVENT_OFFSET))(device);
		}

		static ::UnityEngine::InputSystem::InputRemoting_Message Create(::UnityEngine::InputSystem::LowLevel::InputEvent* events, ::System::Int32 eventCount)
		{
			return ((::UnityEngine::InputSystem::InputRemoting_Message(*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_CREATE_OFFSET))(events, eventCount);
		}

		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWEVENTSMSG_PROCESS_OFFSET))(receiver, msg);
		}
	};
}
