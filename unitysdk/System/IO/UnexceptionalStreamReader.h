#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET UNITYSDK_OFFSET(0x1BD67C80)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1BD67920)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1BD67F00)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1BD67F90)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1BD67A40)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x1BD679B0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD677D0)
#define SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD678B0)

namespace System::IO
{
	inline static constexpr unsigned int UnexceptionalStreamReader_TypeDefinitionIndex = 728;

	class UnexceptionalStreamReader : public ::System::IO::StreamReader
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_newline()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UnexceptionalStreamReader_TypeDefinitionIndex)->GetStaticField(0xCF60);
		}
		static ::System::Char* StaticGet_newlineChar()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(UnexceptionalStreamReader_TypeDefinitionIndex)->GetStaticField(0x3FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckEOL(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_UNEXCEPTIONALSTREAMREADER_CHECKEOL_OFFSET))(this, a1);
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
