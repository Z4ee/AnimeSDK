#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventListener_ObserverState; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A04EAB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1A04EC60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x8B6B00)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventListener_TypeDefinitionIndex = 29257;

	struct alignas(1) InputEventListener
	{
		static ::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState** StaticGet_s_ObserverState()
		{
			return (::UnityEngine::InputSystem::LowLevel::InputEventListener_ObserverState**)Il2CppClass::FromTypeDefinitionIndex(InputEventListener_TypeDefinitionIndex)->GetStaticField(0x22750);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::InputEventListener op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventListener(*)(::UnityEngine::InputSystem::LowLevel::InputEventListener, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_ADDITION_OFFSET))(_, callback);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::InputEventListener op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener _, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventListener(*)(::UnityEngine::InputSystem::LowLevel::InputEventListener, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_SUBTRACTION_OFFSET))(_, callback);
		}
		*/

		/*
		::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_SUBSCRIBE_OFFSET))(this, observer);
		}
		*/
	};
}
