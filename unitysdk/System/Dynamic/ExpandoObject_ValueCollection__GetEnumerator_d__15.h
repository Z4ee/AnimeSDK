#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class ExpandoObject_ExpandoData; }
namespace System::Dynamic { class ExpandoObject_ValueCollection; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x184809D0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18480BC0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18480C20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18480BD0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184809C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x18480960)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_ValueCollection__GetEnumerator_d__15_TypeDefinitionIndex = 3664;

	class ExpandoObject_ValueCollection__GetEnumerator_d__15 : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject_ExpandoData* _data_5__1; // 0x10
		::System::Dynamic::ExpandoObject_ValueCollection* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 _i_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__GETENUMERATOR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
