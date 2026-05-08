#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System { class TermInfoDriver; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_CSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x19ECA500)
#define SYSTEM_IO_CSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x19ECA8F0)
#define SYSTEM_IO_CSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x19ECA9B0)
#define SYSTEM_IO_CSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x19ECA720)
#define SYSTEM_IO_CSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x19ECA5B0)
#define SYSTEM_IO_CSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECA3D0)

namespace System::IO
{
	inline static constexpr unsigned int CStreamReader_TypeDefinitionIndex = 693;

	class CStreamReader : public ::System::IO::StreamReader
	{
	public:
		::System::TermInfoDriver* driver; // 0x68

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER__CTOR_OFFSET))(this, stream, encoding);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* dest, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMREADER_READ_1_OFFSET))(this, dest, index, count);
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
