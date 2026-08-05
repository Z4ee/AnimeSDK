#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_DeviceRequirement.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA93210)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA931E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA93200)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA932B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_MatchResult_Enumerator_TypeDefinitionIndex = 32210;

	struct alignas(8) InputControlScheme_MatchResult_Enumerator
	{
		::System::Int32 m_Index; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement>* m_Requirements; // 0x18
		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls; // 0x20

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_RESET_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::InputControlScheme_MatchResult_Match get_Current()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_MatchResult_Match(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_ENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
