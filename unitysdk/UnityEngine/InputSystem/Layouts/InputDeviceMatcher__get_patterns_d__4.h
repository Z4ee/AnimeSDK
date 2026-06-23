#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3D0910)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3D0A80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3D09D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3D0B00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3D0A30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E3D09E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3D0900)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D08E0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceMatcher__get_patterns_d__4_TypeDefinitionIndex = 32004;

	class InputDeviceMatcher__get_patterns_d__4 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __3____4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> __2__current; // 0x18
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __4__this; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 _i_5__3; // 0x34
		::System::Int32 __1__state; // 0x38
		::System::Int32 _count_5__2; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER__GET_PATTERNS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
