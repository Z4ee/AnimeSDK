#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/ControllerCommand.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Diagnostics::Tracing { class EventSource; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_OVERIDEEVENTPROVIDER_ONCONTROLLERCOMMAND_OFFSET UNITYSDK_OFFSET(0x179009A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_OVERIDEEVENTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x178F52F0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_OverideEventProvider_TypeDefinitionIndex = 1656;

	class EventSource_OverideEventProvider : public ::System::Diagnostics::Tracing::EventProvider
	{
	public:
		::System::Diagnostics::Tracing::EventSource* m_eventSource; // 0x58

		::System::Void _ctor(::System::Diagnostics::Tracing::EventSource* eventSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_OVERIDEEVENTPROVIDER__CTOR_OFFSET))(this, eventSource);
		}

		::System::Void OnControllerCommand(::System::Diagnostics::Tracing::ControllerCommand command, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* arguments, ::System::Int32 perEventSourceSessionId, ::System::Int32 etwSessionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::ControllerCommand, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_OVERIDEEVENTPROVIDER_ONCONTROLLERCOMMAND_OFFSET))(this, command, arguments, perEventSourceSessionId, etwSessionId);
		}
	};
}
