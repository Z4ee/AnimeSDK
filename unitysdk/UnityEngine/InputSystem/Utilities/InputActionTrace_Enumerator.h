#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/ActionEvent.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem::Utilities { class InputActionTrace; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x970720)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9706C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x970710)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x970770)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x970680)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InputActionTrace_Enumerator_TypeDefinitionIndex = 29378;

	struct alignas(8) InputActionTrace_Enumerator
	{
		::UnityEngine::InputSystem::Utilities::InputActionTrace* m_Trace; // 0x10
		::UnityEngine::InputSystem::LowLevel::ActionEvent* m_Buffer; // 0x18
		::System::Int32 m_EventCount; // 0x20
		::UnityEngine::InputSystem::LowLevel::ActionEvent* m_CurrentEvent; // 0x28
		::System::Int32 m_CurrentIndex; // 0x30

		::System::Void _ctor(::UnityEngine::InputSystem::Utilities::InputActionTrace* trace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InputActionTrace*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR__CTOR_OFFSET))(this, trace);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_DISPOSE_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::InputActionTrace_ActionEventPtr get_Current()
		{
			return ((::UnityEngine::InputSystem::Utilities::InputActionTrace_ActionEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
