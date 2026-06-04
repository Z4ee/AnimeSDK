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

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET UNITYSDK_OFFSET(0x1AF1EC60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETALLKEYS_OFFSET UNITYSDK_OFFSET(0x1AF1F760)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETKEY_OFFSET UNITYSDK_OFFSET(0x1AF1F0D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_1_OFFSET UNITYSDK_OFFSET(0x1AF1F2A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_OFFSET UNITYSDK_OFFSET(0x1AF1F140)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x1AF1EDF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_OFFSET UNITYSDK_OFFSET(0x1AF1F1C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_FINDENTRY_OFFSET UNITYSDK_OFFSET(0x1AF1ED50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF1F310)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AF1DE10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AF1F3A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AF1EDD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1AF1F850)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1AF1E3D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_1_OFFSET UNITYSDK_OFFSET(0x1AF1DCB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1AF1DB70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AF1F3D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AF1F750)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AF1F710)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF1F8C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF1DA70)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF1DC30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AF1DD30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AF1DDF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AF1DE00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1DA30)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameObjectCollectionBase_TypeDefinitionIndex = 2983;

	class NameObjectCollectionBase : public ::System::Object
	{
	public:
		static ::System::StringComparer** StaticGet_defaultComparer()
		{
			return (::System::StringComparer**)Il2CppClass::FromTypeDefinitionIndex(NameObjectCollectionBase_TypeDefinitionIndex)->GetStaticField(0x1B9E0);
		}
		::System::Collections::Hashtable* _entriesTable; // 0x10
		::System::Runtime::Serialization::SerializationInfo* _serializationInfo; // 0x18
		::System::Object* _syncRoot; // 0x20
		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* _keys; // 0x28
		::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry; // 0x30
		::System::Collections::ArrayList* _entriesArray; // 0x38
		::System::Collections::IEqualityComparer* _keyComparer; // 0x40
		::System::Boolean _readOnly; // 0x48
		::System::Int32 _version; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::IEqualityComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Collections::IEqualityComparer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::DBNull* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DBNull*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CTOR_5_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE__CCTOR_OFFSET))();
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_OFFSET))(this);
		}

		::System::Void Reset_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_RESET_1_OFFSET))(this, a1);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* FindEntry(::System::String* a1)
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_FINDENTRY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void BaseAdd(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEADD_OFFSET))(this, a1, a2);
		}

		::System::Void BaseRemove(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEREMOVE_OFFSET))(this, a1);
		}

		::System::Object* BaseGet(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_OFFSET))(this, a1);
		}

		::System::Void BaseSet(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASESET_OFFSET))(this, a1, a2);
		}

		::System::Object* BaseGet_1(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGET_1_OFFSET))(this, a1);
		}

		::System::String* BaseGetKey(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_BASEGETKEY_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_GET_COUNT_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEOBJECTCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, a1, a2);
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
