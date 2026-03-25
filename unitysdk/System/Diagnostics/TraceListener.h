#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceOptions.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }
namespace System::Diagnostics { class TraceFilter; }

#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x186A85F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186A85A0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET UNITYSDK_OFFSET(0x186A12C0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET UNITYSDK_OFFSET(0x186A11F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET UNITYSDK_OFFSET(0x186A8600)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x186A8610)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x186A8590)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x186A8620)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET UNITYSDK_OFFSET(0x186A8640)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x186A9220)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x186A7AD0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x186A7AF0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x186A8630)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x186A8650)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET UNITYSDK_OFFSET(0x186A8870)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x186A8750)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x186A1C50)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x186A11B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListener_TypeDefinitionIndex = 2530;

	class TraceListener : public ::System::MarshalByRefObject
	{
	public:
		::System::String* listenerName; // 0x18
		::System::Diagnostics::TraceFilter* filter; // 0x20
		::System::Int32 indentSize; // 0x28
		::System::Boolean needIndent; // 0x2C
		::System::Int32 indentLevel; // 0x30
		::System::Diagnostics::TraceOptions traceOptions; // 0x34

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
