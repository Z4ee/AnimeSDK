#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1CB1E100)
#define SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1CB1E0F0)
#define SYSTEM_IO_TEXTREADER_NULLTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB1E0A0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_NullTextReader_TypeDefinitionIndex = 664;

	class TextReader_NullTextReader : public ::System::IO::TextReader
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_NULLTEXTREADER__CTOR_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READ_OFFSET))(this, buffer, index, count);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READLINE_OFFSET))(this);
		}
	};
}
