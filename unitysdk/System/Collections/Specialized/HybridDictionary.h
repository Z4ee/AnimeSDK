#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class ListDictionary; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x186781C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CHANGEOVER_OFFSET UNITYSDK_OFFSET(0x186779A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18678480)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x186784F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x18678740)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18678A50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18677F90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x186780B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x186780A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x186780C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x186776A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x18677FC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_LIST_OFFSET UNITYSDK_OFFSET(0x18677EB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x186780D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x186780E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x18678C10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x186778D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18678B30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18677690)
#define SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x18677680)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int HybridDictionary_TypeDefinitionIndex = 2975;

	class HybridDictionary : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* hashtable; // 0x10
		::System::Collections::Specialized::ListDictionary* list; // 0x18
		::System::Boolean caseInsensitive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean caseInsensitive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY__CTOR_1_OFFSET))(this, caseInsensitive);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
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

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_HYBRIDDICTIONARY_REMOVE_OFFSET))(this, key);
		}
	};
}
