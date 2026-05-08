#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STARTSENDINGMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C0B2D60)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_StartSendingMsg_TypeDefinitionIndex = 28993;

	class InputRemoting_StartSendingMsg : public ::System::Object
	{
	public:
		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STARTSENDINGMSG_PROCESS_OFFSET))(receiver);
		}
	};
}
