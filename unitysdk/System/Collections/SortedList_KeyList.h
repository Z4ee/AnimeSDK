#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class SortedList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x161D07B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x161D0810)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x161D0870)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x161D08A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161D0A50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161D0710)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x161D0740)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x161D0730)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161D0750)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x161D09C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161D0780)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x161D0AE0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x161D0960)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x161D0C10)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x161D0BB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x161D09F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x161D01B0)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_KeyList_TypeDefinitionIndex = 1490;

	class SortedList_KeyList : public ::System::Object
	{
	public:
		::System::Collections::SortedList* sortedList; // 0x10

		::System::Void _ctor(::System::Collections::SortedList* sortedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST__CTOR_OFFSET))(this, sortedList);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_ADD_OFFSET))(this, key);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_CONTAINS_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_INDEXOF_OFFSET))(this, key);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_REMOVE_OFFSET))(this, key);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_KEYLIST_REMOVEAT_OFFSET))(this, index);
		}
	};
}
