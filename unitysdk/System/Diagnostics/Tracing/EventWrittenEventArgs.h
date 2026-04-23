#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Guid.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Diagnostics::Tracing { class EventSource; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x17901CA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x17901C90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x17901CE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOADNAMES_OFFSET UNITYSDK_OFFSET(0x17901CD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x17901CC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x17901CB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x178F52B0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventWrittenEventArgs_TypeDefinitionIndex = 1682;

	class EventWrittenEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* m_message; // 0x10
		::System::Diagnostics::Tracing::EventSource* m_eventSource; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>* _Payload_k__BackingField; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>* m_payloadNames; // 0x28
		::System::String* m_eventName; // 0x30
		::System::Guid _RelatedActivityId_k__BackingField; // 0x38
		::System::Int32 _EventId_k__BackingField; // 0x48

		::System::Void _ctor(::System::Diagnostics::Tracing::EventSource* eventSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS__CTOR_OFFSET))(this, eventSource);
		}

		::System::Void set_EventName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTNAME_OFFSET))(this, value);
		}

		::System::Void set_EventId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Void set_RelatedActivityId(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_RELATEDACTIVITYID_OFFSET))(this, value);
		}

		::System::Void set_Payload(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOAD_OFFSET))(this, value);
		}

		::System::Void set_PayloadNames(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_PAYLOADNAMES_OFFSET))(this, value);
		}

		::System::Void set_Message(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTWRITTENEVENTARGS_SET_MESSAGE_OFFSET))(this, value);
		}
	};
}
