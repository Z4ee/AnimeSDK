#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class DBNull; }
namespace System { class String; }
namespace System { class StringComparer; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections { class IHashCodeProvider; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_KeysCollection; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_NameObjectEntry; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET UNITYSDK_OFFSET(0x1A0F5410)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASECLEAR_OFFSET UNITYSDK_OFFSET(0x1A0F5BA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLKEYS_OFFSET UNITYSDK_OFFSET(0x1A0F63B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLVALUES_1_OFFSET UNITYSDK_OFFSET(0x1A0F6770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLVALUES_OFFSET UNITYSDK_OFFSET(0x1A0F6560)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETKEY_OFFSET UNITYSDK_OFFSET(0x1A0F59A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_1_OFFSET UNITYSDK_OFFSET(0x1A0F5DF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_OFFSET UNITYSDK_OFFSET(0x1A0F5C10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEHASKEYS_OFFSET UNITYSDK_OFFSET(0x1A0F5610)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVEAT_OFFSET UNITYSDK_OFFSET(0x1A0F5A30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x1A0F5640)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_1_OFFSET UNITYSDK_OFFSET(0x1A0F5E80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_OFFSET UNITYSDK_OFFSET(0x1A0F5CC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_FINDENTRY_OFFSET UNITYSDK_OFFSET(0x1A0F5530)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0F5F90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A0F45A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1A0F55D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0F5FF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A0F55F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1A0F69F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1A0F4BF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_1_OFFSET UNITYSDK_OFFSET(0x1A0F42B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1A0F4070)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1A0F55E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A0F5600)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A0F6020)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A0F63A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A0F6360)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F6A50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0F3FF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A0F41A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A0F4340)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A0F43A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A0F4480)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1A0F4580)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1A0F4590)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F3F10)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameObjectCollectionBase_TypeDefinitionIndex = 3919;

	class NameObjectCollectionBase : public ::System::Object
	{
	public:
		static ::System::StringComparer** StaticGet_defaultComparer()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(NameObjectCollectionBase_TypeDefinitionIndex)->GetStaticField(0x28C0);
		}
		// static const ::System::String* ReadOnlyName; // 0x0
		// static const ::System::String* CountName; // 0x0
		// static const ::System::String* ComparerName; // 0x0
		// static const ::System::String* HashCodeProviderName; // 0x0
		// static const ::System::String* KeysName; // 0x0
		// static const ::System::String* ValuesName; // 0x0
		// static const ::System::String* KeyComparerName; // 0x0
		// static const ::System::String* VersionName; // 0x0
		::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry; // 0x10
		::System::Collections::ArrayList* _entriesArray; // 0x18
		::System::Collections::Hashtable* _entriesTable; // 0x20
		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* _keys; // 0x28
		::System::Runtime::Serialization::SerializationInfo* _serializationInfo; // 0x30
		::System::Collections::IEqualityComparer* _keyComparer; // 0x38
		::System::Object* _syncRoot; // 0x40
		::System::Int32 _version; // 0x48
		::System::Boolean _readOnly; // 0x4C

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

		::System::Void _ctor_3(::System::Collections::IHashCodeProvider* hashProvider, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET))(this, hashProvider, comparer);
		}

		::System::Void _ctor_4(::System::Int32 capacity, ::System::Collections::IHashCodeProvider* hashProvider, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET))(this, capacity, hashProvider, comparer);
		}

		::System::Void _ctor_5(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET))(this, capacity);
		}

		::System::Void _ctor_6(::System::DBNull* dummy)
		{
			return ((::System::Void(*)(::PVOID, ::System::DBNull*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_6_OFFSET))(this, dummy);
		}

		::System::Void _ctor_7(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_7_OFFSET))(this, info, context);
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

		::System::Collections::IEqualityComparer* get_Comparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COMPARER_OFFSET))(this);
		}

		::System::Void set_Comparer(::System::Collections::IEqualityComparer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SET_COMPARER_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void set_IsReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SET_ISREADONLY_OFFSET))(this, value);
		}

		::System::Boolean BaseHasKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEHASKEYS_OFFSET))(this);
		}

		::System::Void BaseAdd(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET))(this, name, value);
		}

		::System::Void BaseRemove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET))(this, name);
		}

		::System::Void BaseRemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVEAT_OFFSET))(this, index);
		}

		::System::Void BaseClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASECLEAR_OFFSET))(this);
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

		::System::Void BaseSet_1(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_1_OFFSET))(this, index, value);
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

		::Il2CppArray<::System::Object*>* BaseGetAllValues()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLVALUES_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* BaseGetAllValues_1(::System::Type* type)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLVALUES_1_OFFSET))(this, type);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys()
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_KEYS_OFFSET))(this);
		}
	};
}
