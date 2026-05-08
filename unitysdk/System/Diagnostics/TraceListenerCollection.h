#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Diagnostics { class TraceListener; }

#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x193B1230)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x193B1180)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x193A7EF0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x193B1380)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x193B1420)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x193B14F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193A8590)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x193B1150)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x193B0DC0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x193B0BA0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x193B15B0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INITIALIZELISTENER_OFFSET UNITYSDK_OFFSET(0x193B0C80)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x193B1680)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x193B1920)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x193B1830)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x193B1760)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x193B0C30)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x193B2290)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x193B2280)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x193B2270)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x193B1C20)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x193B1EB0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x193B1C10)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x193B1C00)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x193B19F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x193B1EE0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x193B1F10)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x193B21A0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x193B1A20)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x193A7E80)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListenerCollection_TypeDefinitionIndex = 2772;

	class TraceListenerCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Diagnostics::TraceListener* get_Item(::System::Int32 i)
		{
			return ((::System::Diagnostics::TraceListener*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::System::Diagnostics::TraceListener* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SET_ITEM_OFFSET))(this, i, value);
		}

		::System::Diagnostics::TraceListener* get_Item_1(::System::String* name)
		{
			return ((::System::Diagnostics::TraceListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADD_OFFSET))(this, listener);
		}

		::System::Void AddRange(::Il2CppArray<::System::Diagnostics::TraceListener*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::TraceListener*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::System::Diagnostics::TraceListenerCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceListenerCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_CONTAINS_OFFSET))(this, listener);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::TraceListener*>* listeners, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::TraceListener*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_COPYTO_OFFSET))(this, listeners, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void InitializeListener(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INITIALIZELISTENER_OFFSET))(this, listener);
		}

		::System::Int32 IndexOf(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INDEXOF_OFFSET))(this, listener);
		}

		::System::Void Insert(::System::Int32 index, ::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INSERT_OFFSET))(this, index, listener);
		}

		::System::Void Remove(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVE_OFFSET))(this, listener);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
