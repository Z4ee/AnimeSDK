#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16344CC0)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x16344C10)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x16344C40)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x16344CD0)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x16344D20)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x16344D00)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x16344D10)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x16344CF0)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER_READ_OFFSET UNITYSDK_OFFSET(0x16344CE0)
#define SYSTEM_IO_STREAMREADER_NULLSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16344B80)

namespace System::IO
{
	inline static constexpr unsigned int StreamReader_NullStreamReader_TypeDefinitionIndex = 691;

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
