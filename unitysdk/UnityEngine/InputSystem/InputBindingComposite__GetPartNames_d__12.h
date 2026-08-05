#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class FieldInfo; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC385E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC387A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC38730)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC38820)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC38790)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC38740)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC385D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC385B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingComposite__GetPartNames_d__12_TypeDefinitionIndex = 32199;

	class InputBindingComposite__GetPartNames_d__12 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::FieldInfo*>* __7__wrap1; // 0x10
		::System::String* __3__composite; // 0x18
		::System::String* composite; // 0x20
		::System::String* __2__current; // 0x28
		::System::Int32 __7__wrap2; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__GETPARTNAMES_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
