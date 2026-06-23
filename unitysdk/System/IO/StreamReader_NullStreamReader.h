#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2C6A10)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1C2C68E0)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x1C2C6940)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1C2C6A20)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2C6A70)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1C2C6A50)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1C2C6A60)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1C2C6A40)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x1C2C6A30)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C67F0)

namespace System::IO
{
	inline static constexpr unsigned int StreamReader_NullStreamReader_TypeDefinitionIndex = 659;

	class StreamReader_NullStreamReader : public ::System::IO::StreamReader
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER__CTOR_OFFSET))(this);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Text::Encoding* get_CurrentEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_GET_CURRENTENCODING_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READ_1_OFFSET))(this, buffer, index, count);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READTOEND_OFFSET))(this);
		}

		::System::Int32 ReadBuffer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READBUFFER_OFFSET))(this);
		}
	};
}
