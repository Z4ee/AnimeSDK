#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET UNITYSDK_OFFSET(0x163497A0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x163493D0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x16349A50)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x16349B00)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x16349530)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x16349480)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16349280)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16349360)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamReader_TypeDefinitionIndex = 726;

	class UnexceptionalStreamReader : public ::System::IO::StreamReader
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_newline()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UnexceptionalStreamReader_TypeDefinitionIndex)->GetStaticField(0x5400);
		}
		static ::System::Char* StaticGet_newlineChar()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(UnexceptionalStreamReader_TypeDefinitionIndex)->GetStaticField(0x2C40);
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
