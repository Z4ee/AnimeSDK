#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Dynamic { class ExpandoObject_KeyCollection; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C3C6810)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3C6A10)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3C6A70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C3C6A20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3C6800)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C67F0)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_KeyCollection__GetEnumerator_d__15_TypeDefinitionIndex = 4996;

	class ExpandoObject_KeyCollection__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::System::Dynamic::ExpandoObject_KeyCollection* __4__this; // 0x18
		::System::Int32 _i_5__1; // 0x20
		::System::Int32 _n_5__2; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
