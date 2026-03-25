#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1867EA80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1867EBE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1867ECF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1867ED60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1867F340)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1867F4E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1867E470)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1867E520)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1867E640)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1867E540)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSARRAY_OFFSET UNITYSDK_OFFSET(0x1867E4D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSTABLE_OFFSET UNITYSDK_OFFSET(0x1867E5A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1867EB90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x1867E840)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1867EDE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1867F1D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1867E6B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1867E530)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1867E600)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1867E510)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1867F430)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1867F720)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1867E440)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1867E450)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1867E460)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1867E430)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int OrderedDictionary_TypeDefinitionIndex = 2991;

	class OrderedDictionary : public ::System::Object
	{
	public:
		::System::Collections::IEqualityComparer* _comparer; // 0x10
		::System::Collections::Hashtable* _objectsTable; // 0x18
		::System::Collections::ArrayList* _objectsArray; // 0x20
		::System::Object* _syncRoot; // 0x28
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x30
		::System::Int32 _initialCapacity; // 0x38
		::System::Boolean _readOnly; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Int32 capacity, ::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_2_OFFSET))(this, capacity, comparer);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_objectsArray()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSARRAY_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_objectsTable()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSTABLE_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOfKey(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET))(this, key);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}
	};
}
