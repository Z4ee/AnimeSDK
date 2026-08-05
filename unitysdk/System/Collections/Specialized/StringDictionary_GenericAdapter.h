#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Collections::Specialized { class StringDictionary_GenericAdapter_ICollectionToGenericCollectionAdapter; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_ADD_OFFSET UNITYSDK_OFFSET(0x1DB73650)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB737A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1DB73770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB74210)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DB737D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DB73800)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1DB738D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1DB73990)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DB73A50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DB736E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___ADD_OFFSET UNITYSDK_OFFSET(0x1DB73B20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DB73B60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___COPYTO_OFFSET UNITYSDK_OFFSET(0x1DB73C20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1DB740A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___REMOVE_OFFSET UNITYSDK_OFFSET(0x1DB740B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB741C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1DB73AB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB73640)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int StringDictionary_GenericAdapter_TypeDefinitionIndex = 3933;

	class StringDictionary_GenericAdapter : public ::System::Object
	{
	public:
		::System::Collections::Specialized::StringDictionary* m_stringDictionary; // 0x10
		::System::Collections::Specialized::StringDictionary_GenericAdapter_ICollectionToGenericCollectionAdapter* _keys; // 0x18
		::System::Collections::Specialized::StringDictionary_GenericAdapter_ICollectionToGenericCollectionAdapter* _values; // 0x20

		::System::Void _ctor(::System::Collections::Specialized::StringDictionary* stringDictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::StringDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER__CTOR_OFFSET))(this, stringDictionary);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_ADD_OFFSET))(this, key, value);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_Item(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GET_VALUES_OFFSET))(this);
		}

		::System::Boolean Remove(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_REMOVE_OFFSET))(this, key);
		}

		::System::Boolean TryGetValue(::System::String* key, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_String___Add(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___ADD_OFFSET))(this, item);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_String___Contains(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___CONTAINS_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_String___CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_String___get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_String___Remove(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_STRING___REMOVE_OFFSET))(this, item);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_STRINGDICTIONARY_GENERICADAPTER_GETENUMERATOR_OFFSET))(this);
		}
	};
}
