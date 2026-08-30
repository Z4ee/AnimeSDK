#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define SYSTEM_IO_STRINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BD62980)
#define SYSTEM_IO_STRINGREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD62990)
#define SYSTEM_IO_STRINGREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1BD629A0)
#define SYSTEM_IO_STRINGREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1BD62D20)
#define SYSTEM_IO_STRINGREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1BD62C90)
#define SYSTEM_IO_STRINGREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1BD62B00)
#define SYSTEM_IO_STRINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x1BD62A50)
#define SYSTEM_IO_STRINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD62910)

namespace System::IO
{
	inline static constexpr unsigned int StringReader_TypeDefinitionIndex = 695;

	class StringReader : public ::System::IO::TextReader
	{
	public:
		::System::String* _s; // 0x18
		::System::Int32 _length; // 0x20
		::System::Int32 _pos; // 0x24

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READ_OFFSET))(this);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGREADER_READ_1_OFFSET))(this, a1, a2, a3);
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
