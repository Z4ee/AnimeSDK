#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1ADBB050)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1ADBB0E0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1ADBB120)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1ADBB160)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1ADBB0A0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBAFD0)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamWriter_TypeDefinitionIndex = 692;

	class UnexceptionalStreamWriter : public ::System::IO::StreamWriter
	{
	public:
		::System::Void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER__CTOR_OFFSET))(this, stream, encoding);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_1_OFFSET))(this, value);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_2_OFFSET))(this, value);
		}

		::System::Void Write_3(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_3_OFFSET))(this, value);
		}
	};
}
