#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_1_OFFSET UNITYSDK_OFFSET(0x162BBA60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_OFFSET UNITYSDK_OFFSET(0x162BBA10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CLEAR_OFFSET UNITYSDK_OFFSET(0x162BBAB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x162BBB10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINS_OFFSET UNITYSDK_OFFSET(0x162BBB00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_COPYTO_OFFSET UNITYSDK_OFFSET(0x162BBD60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162BBCB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x162BBC80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x162BBCA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x162BB810)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x162BB7F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x162BB800)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x162BBE00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_OFFSET UNITYSDK_OFFSET(0x162BBDB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x162BB9C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162BBD10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x162BBE50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x162BB7E0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventPayload_TypeDefinitionIndex = 1592;

	class EventPayload : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* m_names; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* m_values; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* payloadNames, ::System::Collections::Generic::List_1<::System::Object*>* payloadValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__CTOR_OFFSET))(this, payloadNames, payloadValues);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_VALUES_OFFSET))(this);
		}

		::System::Object* get_Item(::System::String* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void Add(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_OFFSET))(this, key, value);
		}

		::System::Void Add_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> payloadEntry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_1_OFFSET))(this, payloadEntry);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINS_OFFSET))(this, entry);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* payloadEntries, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_COPYTO_OFFSET))(this, payloadEntries, count);
		}

		::System::Boolean Remove(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_OFFSET))(this, key);
		}

		::System::Boolean Remove_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_1_OFFSET))(this, entry);
		}

		::System::Boolean TryGetValue(::System::String* key, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_TRYGETVALUE_OFFSET))(this, key, value);
		}
	};
}
