#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_DISCONNECTMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B9F2C90)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_DisconnectMsg_TypeDefinitionIndex = 28995;

	class InputRemoting_DisconnectMsg : public ::System::Object
	{
	public:
		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_DISCONNECTMSG_PROCESS_OFFSET))(receiver, msg);
		}
	};
}
