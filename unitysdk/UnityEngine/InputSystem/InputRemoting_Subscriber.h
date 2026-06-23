#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputRemoting; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3D0010)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0070)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_Subscriber_TypeDefinitionIndex = 31647;

	class InputRemoting_Subscriber : public ::System::Object
	{
	public:
		::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* observer; // 0x10
		::UnityEngine::InputSystem::InputRemoting* owner; // 0x18

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
