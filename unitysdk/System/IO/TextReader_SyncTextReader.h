#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DCED690)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCED6C0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1DCED6F0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1DCED780)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1DCED7B0)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1DCED750)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1DCED720)
#define SYSTEM_IO_TEXTREADER_SYNCTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCED630)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_SyncTextReader_TypeDefinitionIndex = 665;

	class TextReader_SyncTextReader : public ::System::IO::TextReader
	{
	public:
		::System::IO::TextReader* _in; // 0x18

		::System::Void _ctor(::System::IO::TextReader* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER__CTOR_OFFSET))(this, t);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_SYNCTEXTREADER_READ_1_OFFSET))(this, buffer, index, count);
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
