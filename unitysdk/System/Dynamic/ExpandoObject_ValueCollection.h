#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Dynamic { class ExpandoObject; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x17E1BBB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x17E1BB40)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E1BC00)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x17E1BC50)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x17E1BEC0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17E1C2E0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17E1C200)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x17E1C280)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x17E1C290)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17E1C340)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E19880)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_ValueCollection_TypeDefinitionIndex = 3670;

	class ExpandoObject_ValueCollection : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject_ExpandoData* _expandoData; // 0x10
		::System::Dynamic::ExpandoObject* _expando; // 0x18
		::System::Int32 _expandoVersion; // 0x20
		::System::Int32 _expandoCount; // 0x24

		::System::Void _ctor(::System::Dynamic::ExpandoObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void CheckVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CHECKVERSION_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Remove(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_REMOVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
