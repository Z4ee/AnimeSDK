#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamWriter.h"

namespace System { class String; }
namespace System { class TermInfoDriver; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHARS_OFFSET UNITYSDK_OFFSET(0x18708B00)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHAR_OFFSET UNITYSDK_OFFSET(0x18708A00)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITESTRING_OFFSET UNITYSDK_OFFSET(0x18708A80)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x187087C0)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x18708B90)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x18708BB0)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x18707FE0)
#define SYSTEM_IO_CSTREAMWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18707EE0)

namespace System::IO
{
	inline static constexpr unsigned int CStreamWriter_TypeDefinitionIndex = 728;

	class CStreamWriter : public ::System::IO::StreamWriter
	{
	public:
		::System::TermInfoDriver* driver; // 0x68

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_1(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void InternalWriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITESTRING_OFFSET))(this, a1);
		}

		::System::Void InternalWriteChar(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHAR_OFFSET))(this, a1);
		}

		::System::Void InternalWriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHARS_OFFSET))(this, a1, a2);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_2_OFFSET))(this, a1);
		}

		::System::Void Write_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_3_OFFSET))(this, a1);
		}
	};
}
