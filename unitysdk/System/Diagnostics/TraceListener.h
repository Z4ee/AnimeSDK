#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceOptions.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }
namespace System::Diagnostics { class TraceFilter; }

#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A0E2DE0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0E2D90)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1A0DB9D0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET UNITYSDK_OFFSET(0x1A0DB900)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A0E2DF0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1A0E2E00)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1A0E2D80)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E2E10)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A0E2E30)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1A0E3A10)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1A0E22C0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1A0E22E0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x1A0E2E20)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x1A0E2E40)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET UNITYSDK_OFFSET(0x1A0E3060)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x1A0E2F40)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1A0DC360)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DB8C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListener_TypeDefinitionIndex = 2531;

	class TraceListener : public ::System::MarshalByRefObject
	{
	public:
		::System::Diagnostics::TraceFilter* filter; // 0x18
		::System::String* listenerName; // 0x20
		::System::Int32 indentLevel; // 0x28
		::System::Diagnostics::TraceOptions traceOptions; // 0x2C
		::System::Boolean needIndent; // 0x30
		::System::Int32 indentSize; // 0x34

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET))(this, name);
		}

		::System::Boolean get_IsThreadSafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET))(this);
		}

		::System::Void set_IndentLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET))(this, value);
		}

		::System::Void set_IndentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET))(this, value);
		}

		::System::Diagnostics::TraceFilter* get_Filter()
		{
			return ((::System::Diagnostics::TraceFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET))(this);
		}

		::System::Boolean get_NeedIndent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET))(this);
		}

		::System::Void set_NeedIndent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET))(this, value);
		}

		::System::Diagnostics::TraceOptions get_TraceOutputOptions()
		{
			return ((::System::Diagnostics::TraceOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET))(this);
		}

		::System::Void Fail(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET))(this, message);
		}

		::System::Void Fail_1(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET))(this, message, detailMessage);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET))(this, eventCache, source, eventType, id, message);
		}

		::System::Void WriteHeader(::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET))(this, source, eventType, id);
		}

		::System::Void WriteFooter(::System::Diagnostics::TraceEventCache* eventCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET))(this, eventCache);
		}

		::System::Boolean IsEnabled(::System::Diagnostics::TraceOptions opts)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET))(this, opts);
		}
	};
}
