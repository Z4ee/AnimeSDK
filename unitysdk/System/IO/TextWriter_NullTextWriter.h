#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1A97E720)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1A97E800)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1A97E810)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1A97E7F0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1A97E7E0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A97E7D0)
#define SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97E6C0)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter_NullTextWriter_TypeDefinitionIndex = 668;

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

		::System::Void WriteLine_2(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER_NULLTEXTWRITER_WRITELINE_2_OFFSET))(this, value);
		}
	};
}
