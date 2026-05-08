#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace System::Text { class UnicodeEncoding; }

#define SYSTEM_IO_STRINGWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A3A8300)
#define SYSTEM_IO_STRINGWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3A8310)
#define SYSTEM_IO_STRINGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1A3A8320)
#define SYSTEM_IO_STRINGWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3A8610)
#define SYSTEM_IO_STRINGWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1A3A8460)
#define SYSTEM_IO_STRINGWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1A3A85D0)
#define SYSTEM_IO_STRINGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A3A83F0)
#define SYSTEM_IO_STRINGWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3A81C0)
#define SYSTEM_IO_STRINGWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A3A8250)
#define SYSTEM_IO_STRINGWRITER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A3A8110)
#define SYSTEM_IO_STRINGWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7FE0)

namespace System::IO
{
	inline static constexpr unsigned int StringWriter_TypeDefinitionIndex = 662;

	class StringWriter : public ::System::IO::TextWriter
	{
	public:
		static ::System::Text::UnicodeEncoding** StaticGet_m_encoding()
		{
			return (::System::Text::UnicodeEncoding**)Il2CppClass::FromTypeDefinitionIndex(StringWriter_TypeDefinitionIndex)->GetStaticField(0x160);
		}
		::System::Text::StringBuilder* _sb; // 0x28
		::System::Boolean _isOpen; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IFormatProvider* formatProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER__CTOR_1_OFFSET))(this, formatProvider);
		}

		::System::Void _ctor_2(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER__CTOR_2_OFFSET))(this, sb);
		}

		::System::Void _ctor_3(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER__CTOR_3_OFFSET))(this, sb, formatProvider);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_1_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_2(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_WRITE_2_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STRINGWRITER_TOSTRING_OFFSET))(this);
		}
	};
}
