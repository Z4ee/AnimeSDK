#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1BD66B10)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1BD66BC0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1BD66BB0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1BD66BA0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD66B90)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD662D0)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_NullTextWriter_TypeDefinitionIndex = 702;

	class TextWriter_NullTextWriter : public ::System::IO::TextWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER__CTOR_OFFSET))(this);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_1_OFFSET))(this, a1);
		}
	};
}
