#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define SYSTEM_IO_STRINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x17973580)
#define SYSTEM_IO_STRINGREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17973590)
#define SYSTEM_IO_STRINGREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x179735A0)
#define SYSTEM_IO_STRINGREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x17973920)
#define SYSTEM_IO_STRINGREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x17973890)
#define SYSTEM_IO_STRINGREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x17973700)
#define SYSTEM_IO_STRINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x17973650)
#define SYSTEM_IO_STRINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x17973510)

namespace System::IO
{
	inline static constexpr unsigned int StringReader_TypeDefinitionIndex = 693;

	class StringReader : public ::System::IO::TextReader
	{
	public:
		::System::String* _s; // 0x18
		::System::Int32 _length; // 0x20
		::System::Int32 _pos; // 0x24

		::System::Void _ctor(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER__CTOR_OFFSET))(this, s);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READ_1_OFFSET))(this, buffer, index, count);
		}

		::System::String* ReadToEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READTOEND_OFFSET))(this);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READLINE_OFFSET))(this);
		}
	};
}
