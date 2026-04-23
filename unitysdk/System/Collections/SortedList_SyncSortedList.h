#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/SortedList.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x177FD030)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x177FD1D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x177FD290)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x177FD440)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x177FD360)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x177FD520)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x177FD5F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177FD6C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x177FD860)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x177FD790)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x177FD930)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x177FD100)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x177FCD40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x177FCE50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x177FCE20)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x177FCE80)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x177FCE90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x177FCE10)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x177FDA00)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x177FDB40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x177FDC20)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x177FDCF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x177FCF60)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177FC210)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_SyncSortedList_TypeDefinitionIndex = 1489;

	class SortedList_SyncSortedList : public ::System::Collections::SortedList
	{
	public:
		::System::Object* _root; // 0x48
		::System::Collections::SortedList* _list; // 0x50

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
