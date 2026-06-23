#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TextWriterTraceListener.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Stack; }
namespace System::Diagnostics { class TraceEventCache; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }

#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_GETSUPPORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C6C6D70)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_GET_DELIMITER_OFFSET UNITYSDK_OFFSET(0x1C6C6A50)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_SET_DELIMITER_OFFSET UNITYSDK_OFFSET(0x1C6C6B90)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEDATA_1_OFFSET UNITYSDK_OFFSET(0x1C6C77D0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEDATA_OFFSET UNITYSDK_OFFSET(0x1C6C76E0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1C6C7610)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x1C6C6DE0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITEESCAPED_OFFSET UNITYSDK_OFFSET(0x1C6C7050)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITEFOOTER_OFFSET UNITYSDK_OFFSET(0x1C6C71C0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x1C6C6F50)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITESTACKESCAPED_OFFSET UNITYSDK_OFFSET(0x1C6C7960)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6C67C0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6C6820)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C6C68E0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C6C6990)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C6C69F0)
#define SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6760)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DelimitedListTraceListener_TypeDefinitionIndex = 2755;

	class DelimitedListTraceListener : public ::System::Diagnostics::TextWriterTraceListener
	{
	public:
		::System::String* delimiter; // 0x58
		::System::String* secondaryDelim; // 0x60
		::System::Boolean initializedDelim; // 0x68

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_1_OFFSET))(this, stream, name);
		}

		::System::Void _ctor_2(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_2_OFFSET))(this, writer);
		}

		::System::Void _ctor_3(::System::IO::TextWriter* writer, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_3_OFFSET))(this, writer, name);
		}

		::System::Void _ctor_4(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_4_OFFSET))(this, fileName);
		}

		::System::Void _ctor_5(::System::String* fileName, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER__CTOR_5_OFFSET))(this, fileName, name);
		}

		::System::String* get_Delimiter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_GET_DELIMITER_OFFSET))(this);
		}

		::System::Void set_Delimiter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_SET_DELIMITER_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* GetSupportedAttributes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_GETSUPPORTEDATTRIBUTES_OFFSET))(this);
		}

		::System::Void TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEEVENT_OFFSET))(this, eventCache, source, eventType, id, format, args);
		}

		::System::Void TraceEvent_1(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEEVENT_1_OFFSET))(this, eventCache, source, eventType, id, message);
		}

		::System::Void TraceData(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEDATA_OFFSET))(this, eventCache, source, eventType, id, data);
		}

		::System::Void TraceData_1(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_TRACEDATA_1_OFFSET))(this, eventCache, source, eventType, id, data);
		}

		::System::Void WriteHeader(::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITEHEADER_OFFSET))(this, source, eventType, id);
		}

		::System::Void WriteFooter(::System::Diagnostics::TraceEventCache* eventCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITEFOOTER_OFFSET))(this, eventCache);
		}

		::System::Void WriteEscaped(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITEESCAPED_OFFSET))(this, message);
		}

		::System::Void WriteStackEscaped(::System::Collections::Stack* stack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Stack*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DELIMITEDLISTTRACELISTENER_WRITESTACKESCAPED_OFFSET))(this, stack);
		}
	};
}
