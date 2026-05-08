#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }
namespace System::Collections { class SortedList_KeyList; }
namespace System::Collections { class SortedList_ValueList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x19963EB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x199643F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x19964430)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x199644F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x19964510)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x199644D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x19964530)
#define SYSTEM_COLLECTIONS_SORTEDLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x19964750)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x199647B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199648D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x199649F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x19964940)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x19964A50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x199641F0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19964350)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19964390)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19964380)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x199643A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19964AB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19964360)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x199643B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19964370)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x19964C40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x19964CE0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INIT_OFFSET UNITYSDK_OFFSET(0x19963C00)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19964000)
#define SYSTEM_COLLECTIONS_SORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19964D30)
#define SYSTEM_COLLECTIONS_SORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19964E70)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x19964210)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19964B00)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19964EB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19964860)
#define SYSTEM_COLLECTIONS_SORTEDLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x19964F90)
#define SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19963D10)
#define SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19963E40)
#define SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19963E70)
#define SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19963AF0)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_TypeDefinitionIndex = 1485;

	class SortedList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_emptyArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SortedList_TypeDefinitionIndex)->GetStaticField(0x430);
		}
		::System::Collections::SortedList_ValueList* valueList; // 0x10
		::System::Collections::IComparer* comparer; // 0x18
		::Il2CppArray<::System::Object*>* values; // 0x20
		::System::Collections::SortedList_KeyList* keyList; // 0x28
		::System::Object* _syncRoot; // 0x30
		::Il2CppArray<::System::Object*>* keys; // 0x38
		::System::Int32 version; // 0x40
		::System::Int32 _size; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_1_OFFSET))(this, initialCapacity);
		}

		::System::Void _ctor_2(::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_2_OFFSET))(this, comparer);
		}

		::System::Void _ctor_3(::System::Collections::IComparer* comparer, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST__CTOR_3_OFFSET))(this, comparer, capacity);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INIT_OFFSET))(this);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_ADD_OFFSET))(this, key, value);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_VALUES_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINS_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsValue(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSVALUE_OFFSET))(this, value);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Void EnsureCapacity(::System::Int32 min)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_ENSURECAPACITY_OFFSET))(this, min);
		}

		::System::Object* GetByIndex(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETBYINDEX_OFFSET))(this, index);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* GetKey(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETKEY_OFFSET))(this, index);
		}

		::System::Collections::IList* GetKeyList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETKEYLIST_OFFSET))(this);
		}

		::System::Collections::IList* GetValueList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETVALUELIST_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Int32 IndexOfKey(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFKEY_OFFSET))(this, key);
		}

		::System::Int32 IndexOfValue(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFVALUE_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INSERT_OFFSET))(this, index, key, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_REMOVE_OFFSET))(this, key);
		}

		static ::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* list)
		{
			return ((::System::Collections::SortedList*(*)(::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCHRONIZED_OFFSET))(list);
		}
	};
}
