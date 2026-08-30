#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D479250)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D479340)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1D479380)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1D4793C0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1D479300)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D479200)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamWriter_TypeDefinitionIndex = 729;

	class UnexceptionalStreamWriter : public ::System::IO::StreamWriter
	{
	public:
		::System::Void _ctor(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_1(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_2_OFFSET))(this, a1);
		}

		::System::Void Write_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMWRITER_WRITE_3_OFFSET))(this, a1);
		}
	};
}
