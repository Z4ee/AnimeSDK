#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class ListDictionary; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1AF1C550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CHANGEOVER_OFFSET UNITYSDK_OFFSET(0x1AF1BD30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AF1C800)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AF1C870)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AF1CAC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF1CDD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AF1C320)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1AF1C440)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AF1C430)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AF1C450)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF1BA20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1AF1C350)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1AF1C240)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AF1C460)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1AF1C470)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AF1CF90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF1BC60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF1CEB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF1BA10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1BA00)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int HybridDictionary_TypeDefinitionIndex = 2976;

	class HybridDictionary : public ::System::Object
	{
	public:
		::System::Collections::Specialized::ListDictionary* list; // 0x10
		::System::Collections::Hashtable* hashtable; // 0x18
		::System::Boolean caseInsensitive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Specialized::ListDictionary* get_List()
		{
			return ((::System::Collections::Specialized::ListDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_LIST_OFFSET))(this);
		}

		::System::Void ChangeOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CHANGEOVER_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_REMOVE_OFFSET))(this, a1);
		}
	};
}
