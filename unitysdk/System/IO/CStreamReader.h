#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System { class TermInfoDriver; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_CSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1BD42AF0)
#define SYSTEM_IO_CSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1BD42E20)
#define SYSTEM_IO_CSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1BD42EC0)
#define SYSTEM_IO_CSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1BD42C50)
#define SYSTEM_IO_CSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x1BD42B80)
#define SYSTEM_IO_CSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD429D0)

namespace System::IO
{
	inline static constexpr unsigned int CStreamReader_TypeDefinitionIndex = 730;

	class CStreamReader : public ::System::IO::StreamReader
	{
	public:
		::System::TermInfoDriver* driver; // 0x68

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READTOEND_OFFSET))(this);
		}
	};
}
