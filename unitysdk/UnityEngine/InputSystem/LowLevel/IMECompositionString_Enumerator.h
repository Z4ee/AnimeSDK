#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/IMECompositionString.h"

namespace System { class Object; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90D600)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90D5C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x90D5F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90D610)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x90D590)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IMECompositionString_Enumerator_TypeDefinitionIndex = 29252;

	struct alignas(4) IMECompositionString_Enumerator
	{
		::UnityEngine::InputSystem::LowLevel::IMECompositionString m_CompositionString; // 0x10
		::System::Char m_CurrentCharacter; // 0x94
		::System::Int32 m_CurrentIndex; // 0x98

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IMECompositionString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR__CTOR_OFFSET))(this, compositionString);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Char get_Current()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
