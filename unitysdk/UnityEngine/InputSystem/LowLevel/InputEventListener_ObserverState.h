#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OBSERVERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4ED870)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OBSERVERSTATE___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4ED8C0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventListener_ObserverState_TypeDefinitionIndex = 29258;

	class InputEventListener_ObserverState : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate; // 0x10
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> observers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OBSERVERSTATE__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OBSERVERSTATE___CTOR_B__2_0_OFFSET))(this, eventPtr, device);
		}
	};
}
