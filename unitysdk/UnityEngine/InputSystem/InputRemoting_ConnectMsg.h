#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CONNECTMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1E01C6B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_ConnectMsg_TypeDefinitionIndex = 31648;

	class InputRemoting_ConnectMsg : public ::System::Object
	{
	public:
		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CONNECTMSG_PROCESS_OFFSET))(receiver);
		}
	};
}
