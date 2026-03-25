#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class DBNull; }
namespace System { class String; }
namespace System { class StringComparer; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_KeysCollection; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_NameObjectEntry; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET UNITYSDK_OFFSET(0x1867A960)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLKEYS_OFFSET UNITYSDK_OFFSET(0x1867B430)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETKEY_OFFSET UNITYSDK_OFFSET(0x1867ADC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_1_OFFSET UNITYSDK_OFFSET(0x1867AF80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_OFFSET UNITYSDK_OFFSET(0x1867AE20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x1867AAF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_OFFSET UNITYSDK_OFFSET(0x1867AEA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_FINDENTRY_OFFSET UNITYSDK_OFFSET(0x1867AA50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1867AFE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18679AC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1867B070)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1867AAD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1867B570)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1867A0E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_1_OFFSET UNITYSDK_OFFSET(0x18679960)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x18679820)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1867B0A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1867B420)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1867B3E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1867B5E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18679720)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186798E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x186799E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18679AA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x18679AB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x186796E0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameObjectCollectionBase_TypeDefinitionIndex = 2982;

	class NameObjectCollectionBase : public ::System::Object
	{
	public:
		static ::System::StringComparer** StaticGet_defaultComparer()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(NameObjectCollectionBase_TypeDefinitionIndex)->GetStaticField(0xF500);
		}
		::System::Object* _syncRoot; // 0x10
		::System::Collections::IEqualityComparer* _keyComparer; // 0x18
		::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry; // 0x20
		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* _keys; // 0x28
		::System::Runtime::Serialization::SerializationInfo* _serializationInfo; // 0x30
		::System::Collections::Hashtable* _entriesTable; // 0x38
		::System::Collections::ArrayList* _entriesArray; // 0x40
		::System::Boolean _readOnly; // 0x48
		::System::Int32 _version; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_1_OFFSET))(this, equalityComparer);
		}

		::System::Void _ctor_2(::System::Int32 capacity, ::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_2_OFFSET))(this, capacity, equalityComparer);
		}

		::System::Void _ctor_3(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET))(this, capacity);
		}

		::System::Void _ctor_4(::System::DBNull* dummy)
		{
			return ((::System::Void(*)(::PVOID, ::System::DBNull*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET))(this, dummy);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CCTOR_OFFSET))();
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_OFFSET))(this);
		}

		::System::Void Reset_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_1_OFFSET))(this, capacity);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* FindEntry(::System::String* key)
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_FINDENTRY_OFFSET))(this, key);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void BaseAdd(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET))(this, name, value);
		}

		::System::Void BaseRemove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET))(this, name);
		}

		::System::Object* BaseGet(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_OFFSET))(this, name);
		}

		::System::Void BaseSet(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_OFFSET))(this, name, value);
		}

		::System::Object* BaseGet_1(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_1_OFFSET))(this, index);
		}

		::System::String* BaseGetKey(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETKEY_OFFSET))(this, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COUNT_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* BaseGetAllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLKEYS_OFFSET))(this);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys()
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_KEYS_OFFSET))(this);
		}
	};
}
