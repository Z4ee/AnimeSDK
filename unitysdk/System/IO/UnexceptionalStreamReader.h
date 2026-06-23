#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET UNITYSDK_OFFSET(0x1C4F4090)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1C4F3CC0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1C4F43B0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1C4F4460)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1C4F3E20)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x1C4F3D70)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4F3AE0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F3C40)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamReader_TypeDefinitionIndex = 691;

	class UnexceptionalStreamReader : public ::System::IO::StreamReader
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_newline()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UnexceptionalStreamReader_TypeDefinitionIndex)->GetStaticField(0xD50);
		}
		static ::System::Char* StaticGet_newlineChar()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(UnexceptionalStreamReader_TypeDefinitionIndex)->GetStaticField(0x3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CTOR_OFFSET))(this, stream, encoding);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* dest_buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_1_OFFSET))(this, dest_buffer, index, count);
		}

		::System::Boolean CheckEOL(::System::Char current)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET))(this, current);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READTOEND_OFFSET))(this);
		}
	};
}
