#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x187262C0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187262F0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x18726380)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x18726410)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x18726440)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x187263E0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x187263B0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18725FF0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_SyncTextReader_TypeDefinitionIndex = 696;

	class TextReader_SyncTextReader : public ::System::IO::TextReader
	{
	public:
		::System::IO::TextReader* _in; // 0x18

		::System::Void _ctor(::System::IO::TextReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READLINE_OFFSET))(this);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READTOEND_OFFSET))(this);
		}
	};
}
