#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem::LowLevel { class InputStateHistory; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99AA80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x736F40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x736F70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99AAC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x736F30)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateHistory_Enumerator_TypeDefinitionIndex = 29294;

	struct alignas(8) InputStateHistory_Enumerator
	{
		::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History; // 0x10
		::System::Int32 m_Index; // 0x18

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory* history)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputStateHistory*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR__CTOR_OFFSET))(this, history);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_RESET_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record get_Current()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
