#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1B73BD10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ASREADONLY_OFFSET UNITYSDK_OFFSET(0x1B73C0C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B73BF50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B73C170)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B73C200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B73CE70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B73D010)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B73B070)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B73B170)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B73B770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B73B2F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1B73B190)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSARRAY_OFFSET UNITYSDK_OFFSET(0x1B73B0F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSTABLE_OFFSET UNITYSDK_OFFSET(0x1B73B230)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1B73BEB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x1B73BA50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INSERT_OFFSET UNITYSDK_OFFSET(0x1B73C2A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B73C500)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B73C970)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B73CC90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B73B800)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B73B420)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1B73B180)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1B73B2B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B73B160)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B73CF40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1B73D2C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B73AFB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B73AFD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B73AFC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B73AFE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B73B060)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73AFA0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int OrderedDictionary_TypeDefinitionIndex = 3927;

	class OrderedDictionary : public ::System::Object
	{
	public:
		// static const ::System::String* KeyComparerName; // 0x0
		// static const ::System::String* ArrayListName; // 0x0
		// static const ::System::String* ReadOnlyName; // 0x0
		// static const ::System::String* InitCapacityName; // 0x0
		::System::Collections::ArrayList* _objectsArray; // 0x10
		::System::Collections::IEqualityComparer* _comparer; // 0x18
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x20
		::System::Collections::Hashtable* _objectsTable; // 0x28
		::System::Object* _syncRoot; // 0x30
		::System::Boolean _readOnly; // 0x38
		::System::Int32 _initialCapacity; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_2_OFFSET))(this, comparer);
		}

		::System::Void _ctor_3(::System::Int32 capacity, ::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_3_OFFSET))(this, capacity, comparer);
		}

		::System::Void _ctor_4(::System::Collections::Specialized::OrderedDictionary* dictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::OrderedDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_4_OFFSET))(this, dictionary);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_5_OFFSET))(this, info, context);
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

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Object* get_Item_1(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_1_OFFSET))(this, key);
		}

		::System::Void set_Item_1(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_1_OFFSET))(this, key, value);
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

		::System::Collections::Specialized::OrderedDictionary* AsReadOnly()
		{
			return ((::System::Collections::Specialized::OrderedDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ASREADONLY_OFFSET))(this);
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

		::System::Void Insert(::System::Int32 index, ::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INSERT_OFFSET))(this, index, key, value);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVEAT_OFFSET))(this, index);
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
