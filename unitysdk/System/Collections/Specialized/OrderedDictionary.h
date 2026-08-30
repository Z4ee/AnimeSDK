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

#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1E914060)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E914290)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E914460)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E914530)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E914CE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E914F80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E9136D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1E9137E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E913900)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1E913800)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSARRAY_OFFSET UNITYSDK_OFFSET(0x1E913790)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSTABLE_OFFSET UNITYSDK_OFFSET(0x1E913860)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1E914240)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x1E913C90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E914610)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E914AA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9139D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E9137F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E9138C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1E9137D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E914E80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E9151E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9136A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E9136B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E9136C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E913690)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int OrderedDictionary_TypeDefinitionIndex = 3003;

	class OrderedDictionary : public ::System::Object
	{
	public:
		::System::Collections::IEqualityComparer* _comparer; // 0x10
		::System::Object* _syncRoot; // 0x18
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x20
		::System::Collections::Hashtable* _objectsTable; // 0x28
		::System::Collections::ArrayList* _objectsArray; // 0x30
		::System::Boolean _readOnly; // 0x38
		::System::Int32 _initialCapacity; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Collections::IEqualityComparer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY__CTOR_3_OFFSET))(this, a1, a2);
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

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOfKey(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET))(this, a1);
		}

		::System::Void OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET))(this, a1);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}
	};
}
