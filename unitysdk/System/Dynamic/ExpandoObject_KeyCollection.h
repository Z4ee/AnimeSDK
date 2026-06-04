#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Dynamic { class ExpandoObject; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1AD314F0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1AD31480)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD315C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AD31610)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AD317D0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD31BB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD31AD0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AD31B50)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AD31B60)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD31C10)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2FB50)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_KeyCollection_TypeDefinitionIndex = 3664;

	class ExpandoObject_KeyCollection : public ::System::Object
	{
	public:
		::System::Dynamic::ExpandoObject* _expando; // 0x10
		::System::Dynamic::ExpandoObject_ExpandoData* _expandoData; // 0x18
		::System::Int32 _expandoCount; // 0x20
		::System::Int32 _expandoVersion; // 0x24

		::System::Void _ctor(::System::Dynamic::ExpandoObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void CheckVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_CHECKVERSION_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Remove(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_REMOVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_KEYCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
