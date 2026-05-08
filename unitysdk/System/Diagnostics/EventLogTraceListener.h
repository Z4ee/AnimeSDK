#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceListener.h"

namespace System { class String; }
namespace System::Diagnostics { class EventLog; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_GET_EVENTLOG_OFFSET UNITYSDK_OFFSET(0x1AFE05B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_SET_EVENTLOG_OFFSET UNITYSDK_OFFSET(0x1AFE05F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1AFE0670)
#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AFE0630)
#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFE0530)
#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFE0570)
#define SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE04F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogTraceListener_TypeDefinitionIndex = 4175;

	class EventLogTraceListener : public ::System::Diagnostics::TraceListener
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::EventLog* eventLog)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLog*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER__CTOR_1_OFFSET))(this, eventLog);
		}

		::System::Void _ctor_2(::System::String* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER__CTOR_2_OFFSET))(this, source);
		}

		::System::Diagnostics::EventLog* get_EventLog()
		{
			return ((::System::Diagnostics::EventLog*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_GET_EVENTLOG_OFFSET))(this);
		}

		::System::Void set_EventLog(::System::Diagnostics::EventLog* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLog*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_SET_EVENTLOG_OFFSET))(this, value);
		}

		::System::Void Write(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_WRITE_OFFSET))(this, message);
		}

		::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGTRACELISTENER_WRITELINE_OFFSET))(this, message);
		}
	};
}
