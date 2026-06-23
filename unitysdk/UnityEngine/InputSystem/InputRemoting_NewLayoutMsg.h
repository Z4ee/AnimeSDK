#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWLAYOUTMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7425E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWLAYOUTMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1D7428C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_NewLayoutMsg_TypeDefinitionIndex = 31652;

	class InputRemoting_NewLayoutMsg : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting_Message> Create(::UnityEngine::InputSystem::InputRemoting* sender, ::System::String* layoutName)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting_Message>(*)(::UnityEngine::InputSystem::InputRemoting*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWLAYOUTMSG_CREATE_OFFSET))(sender, layoutName);
		}

		static ::System::Void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWLAYOUTMSG_PROCESS_OFFSET))(receiver, msg);
		}
	};
}
