#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Diagnostics { class EventLogEntry; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C0747F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C074830)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C0746F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C074730)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C074870)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C074770)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C0747B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0746B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogEntryCollection_TypeDefinitionIndex = 4090;

	class EventLogEntryCollection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Diagnostics::EventLogEntry* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::EventLogEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::EventLogEntry*>* entries, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::EventLogEntry*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_COPYTO_OFFSET))(this, entries, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRYCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
