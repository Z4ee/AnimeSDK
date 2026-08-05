#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TextWriterTraceListener.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }

#define SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBD220)
#define SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DEBD260)
#define SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DEBD2A0)
#define SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DEBD2E0)
#define SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DEBD320)
#define SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD1E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int XmlWriterTraceListener_TypeDefinitionIndex = 4189;

	class XmlWriterTraceListener : public ::System::Diagnostics::TextWriterTraceListener
	{
	public:
		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_1_OFFSET))(this, stream, name);
		}

		::System::Void _ctor_2(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_2_OFFSET))(this, writer);
		}

		::System::Void _ctor_3(::System::IO::TextWriter* writer, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_3_OFFSET))(this, writer, name);
		}

		::System::Void _ctor_4(::System::String* filename)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_4_OFFSET))(this, filename);
		}

		::System::Void _ctor_5(::System::String* filename, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_XMLWRITERTRACELISTENER__CTOR_5_OFFSET))(this, filename, name);
		}
	};
}
