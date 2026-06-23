#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceListener.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }

#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B402600)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4026D0)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_ENSUREWRITER_OFFSET UNITYSDK_OFFSET(0x1B4023E0)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B402880)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_GETENCODINGWITHFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B402C70)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_GET_WRITER_OFFSET UNITYSDK_OFFSET(0x1B4023C0)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_SET_WRITER_OFFSET UNITYSDK_OFFSET(0x1B4025F0)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1B402AE0)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_WRITE_OFFSET UNITYSDK_OFFSET(0x1B402950)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B402180)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B402190)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B402280)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B402310)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B402390)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B4023A0)
#define SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B402170)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TextWriterTraceListener_TypeDefinitionIndex = 2763;

	class TextWriterTraceListener : public ::System::Diagnostics::TraceListener
	{
	public:
		::System::IO::TextWriter* writer; // 0x48
		::System::String* fileName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_1_OFFSET))(this, stream);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_2_OFFSET))(this, stream, name);
		}

		::System::Void _ctor_3(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_3_OFFSET))(this, writer);
		}

		::System::Void _ctor_4(::System::IO::TextWriter* writer, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_4_OFFSET))(this, writer, name);
		}

		::System::Void _ctor_5(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_5_OFFSET))(this, fileName);
		}

		::System::Void _ctor_6(::System::String* fileName, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER__CTOR_6_OFFSET))(this, fileName, name);
		}

		::System::IO::TextWriter* get_Writer()
		{
			return ((::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_GET_WRITER_OFFSET))(this);
		}

		::System::Void set_Writer(::System::IO::TextWriter* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_SET_WRITER_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_FLUSH_OFFSET))(this);
		}

		::System::Void Write(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_WRITE_OFFSET))(this, message);
		}

		::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_WRITELINE_OFFSET))(this, message);
		}

		static ::System::Text::Encoding* GetEncodingWithFallback(::System::Text::Encoding* encoding)
		{
			return ((::System::Text::Encoding*(*)(::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_GETENCODINGWITHFALLBACK_OFFSET))(encoding);
		}

		::System::Boolean EnsureWriter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TEXTWRITERTRACELISTENER_ENSUREWRITER_OFFSET))(this);
		}
	};
}
