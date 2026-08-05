#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1D6131C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_ASGENERICDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D613480)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D613270)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1D6132A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x1D613340)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D613370)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D6133A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D612F60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D612F90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D612FC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D613130)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D613160)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1D613190)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D6133D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_REPLACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1D613470)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D613080)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D612EC0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringDictionary_TypeDefinitionIndex = 3932;

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
