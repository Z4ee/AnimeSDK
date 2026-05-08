#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/SortedList.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x19EC1660)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19EC1800)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x19EC18C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19EC1A70)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x19EC1B50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19EC1990)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x19EC1C30)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x19EC1D00)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19EC1DD0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x19EC1F70)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x19EC1EA0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x19EC2040)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x19EC1730)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19EC1370)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19EC1480)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19EC1450)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19EC14B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EC14C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19EC1440)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x19EC2110)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x19EC2250)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19EC2330)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19EC2400)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EC1590)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC12F0)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_SyncSortedList_TypeDefinitionIndex = 1486;

	class SortedList_SyncSortedList : public ::System::Collections::SortedList
	{
	public:
		::System::Collections::SortedList* _list; // 0x48
		::System::Object* _root; // 0x50

		::System::Void _ctor(::System::Collections::SortedList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST__CTOR_OFFSET))(this, list);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_ADD_OFFSET))(this, key, value);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINS_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsValue(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSVALUE_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_COPYTO_OFFSET))(this, array, index);
		}

		::System::Object* GetByIndex(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETBYINDEX_OFFSET))(this, index);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* GetKey(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEY_OFFSET))(this, index);
		}

		::System::Collections::IList* GetKeyList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEYLIST_OFFSET))(this);
		}

		::System::Collections::IList* GetValueList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETVALUELIST_OFFSET))(this);
		}

		::System::Int32 IndexOfKey(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFKEY_OFFSET))(this, key);
		}

		::System::Int32 IndexOfValue(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFVALUE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVE_OFFSET))(this, key);
		}
	};
}
