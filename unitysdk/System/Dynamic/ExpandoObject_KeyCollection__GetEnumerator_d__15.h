#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Dynamic { class ExpandoObject_KeyCollection; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AD31C70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD31E60)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD31EC0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AD31E70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD31C60)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD31C00)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_KeyCollection__GetEnumerator_d__15_TypeDefinitionIndex = 3665;

	class ExpandoObject_KeyCollection__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject_KeyCollection* __4__this; // 0x10
		::System::String* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 _i_5__1; // 0x24
		::System::Int32 _n_5__2; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__GETENUMERATOR_D__15__CTOR_OFFSET))(this, a1);
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
