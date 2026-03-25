#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Dynamic { class ExpandoObject; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x184801C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x18480150)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x18480210)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18480260)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x18480470)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18480910)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18480830)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x184808B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x184808C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18480970)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1847DE90)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_ValueCollection_TypeDefinitionIndex = 3663;

	class ExpandoObject_ValueCollection : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject_ExpandoData* _expandoData; // 0x10
		::System::Dynamic::ExpandoObject* _expando; // 0x18
		::System::Int32 _expandoVersion; // 0x20
		::System::Int32 _expandoCount; // 0x24

		::System::Void _ctor(::System::Dynamic::ExpandoObject* expando)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION__CTOR_OFFSET))(this, expando);
		}

		::System::Void CheckVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CHECKVERSION_OFFSET))(this);
		}

		::System::Void Add(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_ADD_OFFSET))(this, item);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Remove(::System::Object* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_VALUECOLLECTION_REMOVE_OFFSET))(this, item);
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
