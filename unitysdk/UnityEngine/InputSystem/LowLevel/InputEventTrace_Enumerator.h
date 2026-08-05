#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7E6FE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E7150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F7E6FF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F7E7120)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E7160)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6FC0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_Enumerator_TypeDefinitionIndex = 32539;

	class InputEventTrace_Enumerator : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_Trace; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputEventPtr m_Current; // 0x18
		::System::Int32 m_ChangeCounter; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventTrace*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR__CTOR_OFFSET))(this, trace);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_RESET_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
