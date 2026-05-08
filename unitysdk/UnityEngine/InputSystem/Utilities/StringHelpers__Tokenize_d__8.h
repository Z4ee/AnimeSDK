#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B9F6F40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9F7480)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B9F73D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9F7500)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B9F7430)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B9F73E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B9F6F30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F6F10)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int StringHelpers__Tokenize_d__8_TypeDefinitionIndex = 29429;

	class StringHelpers__Tokenize_d__8 : public ::System::Object
	{
	public:
		::System::String* __3__str; // 0x10
		::UnityEngine::InputSystem::Utilities::Substring __2__current; // 0x18
		::System::String* str; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Int32 _length_5__2; // 0x38
		::System::Int32 _endPos_5__3; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::Substring System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current()
		{
			return ((::UnityEngine::InputSystem::Utilities::Substring(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_Substring__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__TOKENIZE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
