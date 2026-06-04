#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_1_OFFSET UNITYSDK_OFFSET(0x186A09D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_OFFSET UNITYSDK_OFFSET(0x186A0980)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CLEAR_OFFSET UNITYSDK_OFFSET(0x186A0A20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x186A0A80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINS_OFFSET UNITYSDK_OFFSET(0x186A0A70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_COPYTO_OFFSET UNITYSDK_OFFSET(0x186A0CD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186A0C20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x186A0BF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x186A0C10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x186A0760)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x186A0740)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x186A0750)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x186A0D70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_OFFSET UNITYSDK_OFFSET(0x186A0D20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x186A0930)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186A0C80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x186A0DC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x186A0730)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventPayload_TypeDefinitionIndex = 1591;

	class EventPayload : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_values; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_names; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_VALUES_OFFSET))(this);
		}

		::System::Object* get_Item(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_ADD_1_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_CONTAINSKEY_OFFSET))(this, a1);
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

		::System::Void CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_OFFSET))(this, a1);
		}

		::System::Boolean Remove_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::System::Object*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPAYLOAD_TRYGETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
