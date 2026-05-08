#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x19E255E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ASGENERICDICTIONARY_OFFSET UNITYSDK_OFFSET(0x19E258A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19E25690)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19E256C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x19E25760)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x19E25790)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19E257C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19E25380)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19E253B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19E253E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19E25550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19E25580)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19E255B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x19E257F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_REPLACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x19E25890)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19E254A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E252E0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringDictionary_TypeDefinitionIndex = 3933;

	class StringDictionary : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* contents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::String* get_Item(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsValue(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CONTAINSVALUE_OFFSET))(this, value);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Void ReplaceHashtable(::System::Collections::Hashtable* useThisHashtableInstead)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_REPLACEHASHTABLE_OFFSET))(this, useThisHashtableInstead);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* AsGenericDictionary()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ASGENERICDICTIONARY_OFFSET))(this);
		}
	};
}
