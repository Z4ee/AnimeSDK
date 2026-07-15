#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Guid.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Diagnostics::Tracing { class EventSource; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x191B85B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x191B85A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x191B85F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOADNAMES_OFFSET UNITYSDK_OFFSET(0x191B85E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x191B85D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x191B85C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x191AAE00)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventWrittenEventArgs_TypeDefinitionIndex = 1684;

	class EventWrittenEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* m_message; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>* _Payload_k__BackingField; // 0x18
		::System::String* m_eventName; // 0x20
		::System::Diagnostics::Tracing::EventSource* m_eventSource; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>* m_payloadNames; // 0x30
		::System::Int32 _EventId_k__BackingField; // 0x38
		::System::Guid _RelatedActivityId_k__BackingField; // 0x3C

		::System::Void _ctor(::System::Diagnostics::Tracing::EventSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_EventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTNAME_OFFSET))(this, a1);
		}

		::System::Void set_EventId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::Void set_RelatedActivityId(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_RELATEDACTIVITYID_OFFSET))(this, a1);
		}

		::System::Void set_Payload(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOAD_OFFSET))(this, a1);
		}

		::System::Void set_PayloadNames(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOADNAMES_OFFSET))(this, a1);
		}

		::System::Void set_Message(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_MESSAGE_OFFSET))(this, a1);
		}
	};
}
