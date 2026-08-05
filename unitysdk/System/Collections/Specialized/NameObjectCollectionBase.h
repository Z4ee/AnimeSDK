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

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET UNITYSDK_OFFSET(0x1D8803E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASECLEAR_OFFSET UNITYSDK_OFFSET(0x1D880B70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLKEYS_OFFSET UNITYSDK_OFFSET(0x1D881370)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLVALUES_1_OFFSET UNITYSDK_OFFSET(0x1D881730)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLVALUES_OFFSET UNITYSDK_OFFSET(0x1D881520)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETKEY_OFFSET UNITYSDK_OFFSET(0x1D880970)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_1_OFFSET UNITYSDK_OFFSET(0x1D880DC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_OFFSET UNITYSDK_OFFSET(0x1D880BE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEHASKEYS_OFFSET UNITYSDK_OFFSET(0x1D8805E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVEAT_OFFSET UNITYSDK_OFFSET(0x1D880A00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x1D880610)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_1_OFFSET UNITYSDK_OFFSET(0x1D880E50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_OFFSET UNITYSDK_OFFSET(0x1D880C90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_FINDENTRY_OFFSET UNITYSDK_OFFSET(0x1D880500)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D880F50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D87F570)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1D8805A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D880FB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D8805C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D8819B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1D87FBD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_1_OFFSET UNITYSDK_OFFSET(0x1D87F280)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1D87F030)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1D8805B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D8805D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D880FE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D881360)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D881320)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D881A10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D87EFB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D87F160)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D87F310)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D87F370)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D87F450)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D87F550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D87F560)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87EED0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameObjectCollectionBase_TypeDefinitionIndex = 3918;

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
		::System::Collections::Hashtable* _entriesTable; // 0x10
		::System::Object* _syncRoot; // 0x18
		::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry; // 0x20
		::System::Collections::IEqualityComparer* _keyComparer; // 0x28
		::System::Collections::ArrayList* _entriesArray; // 0x30
		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* _keys; // 0x38
		::System::Runtime::Serialization::SerializationInfo* _serializationInfo; // 0x40
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
