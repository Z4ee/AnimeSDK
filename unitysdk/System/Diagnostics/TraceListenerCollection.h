#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Diagnostics { class TraceListener; }

#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A0E2370)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A0E3B90)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0E2D10)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A0E3A20)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INITIALIZELISTENER_OFFSET UNITYSDK_OFFSET(0x1A0E3A50)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1A0E3BE0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A0E4550)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A0E4540)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A0E4530)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1A0E3EE0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A0E4170)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A0E3ED0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A0E3EC0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0E3CB0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A0E41A0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1A0E41D0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A0E4460)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A0E3CE0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E2280)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListenerCollection_TypeDefinitionIndex = 2532;

	class TraceListenerCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_ADD_OFFSET))(this, listener);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void InitializeListener(::System::Diagnostics::TraceListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENERCOLLECTION_INITIALIZELISTENER_OFFSET))(this, listener);
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
