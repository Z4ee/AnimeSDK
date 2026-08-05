#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F80FDA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80FE00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_Subscriber_TypeDefinitionIndex = 32267;

	class InputRemoting_Subscriber : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputRemoting* owner; // 0x10
		::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* observer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBER_DISPOSE_OFFSET))(this);
		}
	};
}
