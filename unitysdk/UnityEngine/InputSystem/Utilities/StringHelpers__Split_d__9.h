#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DD844F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DD84780)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD84710)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DD84800)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD84770)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DD84720)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD844E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD844C0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int StringHelpers__Split_d__9_TypeDefinitionIndex = 32086;

	class StringHelpers__Split_d__9 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::System::String* __3__str; // 0x18
		::System::Func_2<::System::Char, ::System::Boolean>* __3__predicate; // 0x20
		::System::String* str; // 0x28
		::System::Func_2<::System::Char, ::System::Boolean>* predicate; // 0x30
		::System::Int32 _position_5__3; // 0x38
		::System::Int32 _length_5__2; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS__SPLIT_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
