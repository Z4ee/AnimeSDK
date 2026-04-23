#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x17975ED0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x17975F80)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x17975F70)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x17975F60)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x17975F50)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x179759B0)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_NullTextWriter_TypeDefinitionIndex = 700;

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

		::System::Void Write(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_1_OFFSET))(this, value);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void WriteLine_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_1_OFFSET))(this, value);
		}
	};
}
