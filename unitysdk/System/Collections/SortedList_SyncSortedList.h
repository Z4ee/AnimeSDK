#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/SortedList.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1C9DFB60)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9DFDD0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9DFEF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x1C9E0160)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C9E0020)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C9E02A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C9E03D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C9E0510)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x1C9E0780)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C9E0640)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x1C9E08B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C9DFC90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C9DF670)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1C9DF850)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C9DF7C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C9DF8E0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C9DF8F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C9DF7B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x1C9E09E0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x1C9E0BA0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1C9E0CE0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C9E0E10)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C9DFA30)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DE780)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_SyncSortedList_TypeDefinitionIndex = 1499;

	class SortedList_SyncSortedList : public ::System::Collections::SortedList
	{
	public:
		::System::Collections::SortedList* _list; // 0x48
		::System::Object* _root; // 0x50

		::System::Void _ctor(::System::Collections::SortedList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST__CTOR_OFFSET))(this, a1);
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

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_ADD_OFFSET))(this, a1, a2);
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

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsValue(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_CONTAINSVALUE_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Object* GetByIndex(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETBYINDEX_OFFSET))(this, a1);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* GetKey(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEY_OFFSET))(this, a1);
		}

		::System::Collections::IList* GetKeyList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETKEYLIST_OFFSET))(this);
		}

		::System::Collections::IList* GetValueList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_GETVALUELIST_OFFSET))(this);
		}

		::System::Int32 IndexOfKey(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFKEY_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfValue(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_INDEXOFVALUE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCSORTEDLIST_REMOVE_OFFSET))(this, a1);
		}
	};
}
