#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class SortedList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_ADD_OFFSET UNITYSDK_OFFSET(0x161D22D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x161D2330)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x161D2390)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x161D23C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161D2570)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161D2230)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x161D2260)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x161D2250)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161D2270)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x161D24E0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161D22A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x161D2600)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INSERT_OFFSET UNITYSDK_OFFSET(0x161D2480)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x161D26B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x161D2650)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x161D2510)
#define SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x161D0220)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_ValueList_TypeDefinitionIndex = 1491;

	class SortedList_ValueList : public ::System::Object
	{
	public:
		::System::Collections::SortedList* sortedList; // 0x10

		::System::Void _ctor(::System::Collections::SortedList* sortedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST__CTOR_OFFSET))(this, sortedList);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_ADD_OFFSET))(this, key);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_VALUELIST_REMOVEAT_OFFSET))(this, index);
		}
	};
}
