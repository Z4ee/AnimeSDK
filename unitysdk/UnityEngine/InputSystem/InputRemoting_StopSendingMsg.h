#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STOPSENDINGMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F7E6B40)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_StopSendingMsg_TypeDefinitionIndex = 32270;

	class InputRemoting_StopSendingMsg : public ::System::Object
	{
	public:
		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STOPSENDINGMSG_PROCESS_OFFSET))(receiver);
		}
	};
}
