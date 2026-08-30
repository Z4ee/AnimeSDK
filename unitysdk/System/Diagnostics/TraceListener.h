#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceOptions.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }
namespace System::Diagnostics { class TraceFilter; }

#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AB333B0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB332D0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1AB2AA80)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET UNITYSDK_OFFSET(0x1AB2A940)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AB333C0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1AB333D0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1AB332C0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x1AB333E0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1AB33400)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1AB34230)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB32020)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1AB32040)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x1AB333F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x1AB33410)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET UNITYSDK_OFFSET(0x1AB33700)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x1AB33580)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1AB2B510)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2A890)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListener_TypeDefinitionIndex = 2542;

	class TraceListener : public ::System::MarshalByRefObject
	{
	public:
		::System::String* listenerName; // 0x18
		::System::Diagnostics::TraceFilter* filter; // 0x20
		::System::Int32 indentSize; // 0x28
		::System::Boolean needIndent; // 0x2C
		::System::Int32 indentLevel; // 0x30
		::System::Diagnostics::TraceOptions traceOptions; // 0x34

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsThreadSafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET))(this);
		}

		::System::Void set_IndentLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET))(this, a1);
		}

		::System::Void set_IndentSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET))(this, a1);
		}

		::System::Diagnostics::TraceFilter* get_Filter()
		{
			return ((::System::Diagnostics::TraceFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET))(this);
		}

		::System::Boolean get_NeedIndent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET))(this);
		}

		::System::Void set_NeedIndent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET))(this, a1);
		}

		::System::Diagnostics::TraceOptions get_TraceOutputOptions()
		{
			return ((::System::Diagnostics::TraceOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET))(this);
		}

		::System::Void Fail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET))(this, a1);
		}

		::System::Void Fail_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void TraceEvent(::System::Diagnostics::TraceEventCache* a1, ::System::String* a2, ::System::Diagnostics::TraceEventType a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void WriteHeader(::System::String* a1, ::System::Diagnostics::TraceEventType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFooter(::System::Diagnostics::TraceEventCache* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET))(this, a1);
		}

		::System::Boolean IsEnabled(::System::Diagnostics::TraceOptions a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET))(this, a1);
		}
	};
}
