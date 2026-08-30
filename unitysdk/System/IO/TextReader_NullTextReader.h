#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x1D475710)
#define SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1D475700)
#define SYSTEM_IO_TEXTREADER_NULLTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4754C0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader_NullTextReader_TypeDefinitionIndex = 698;

	class TextReader_NullTextReader : public ::System::IO::TextReader
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_NULLTEXTREADER__CTOR_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER_NULLTEXTREADER_READLINE_OFFSET))(this);
		}
	};
}
