#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Diagnostics::Tracing { class EventSource; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCECREATEDEVENTARGS_SET_EVENTSOURCE_OFFSET UNITYSDK_OFFSET(0x162D5110)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCECREATEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x162BAC50)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceCreatedEventArgs_TypeDefinitionIndex = 1680;

	class EventSourceCreatedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Diagnostics::Tracing::EventSource* _EventSource_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCECREATEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Void set_EventSource(::System::Diagnostics::Tracing::EventSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCECREATEDEVENTARGS_SET_EVENTSOURCE_OFFSET))(this, value);
		}
	};
}
