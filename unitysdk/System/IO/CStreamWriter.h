#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/StreamWriter.h"

namespace System { class String; }
namespace System { class TermInfoDriver; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHARS_OFFSET UNITYSDK_OFFSET(0x1D80C5C0)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHAR_OFFSET UNITYSDK_OFFSET(0x1D80C460)
#define SYSTEM_IO_CSTREAMWRITER_INTERNALWRITESTRING_OFFSET UNITYSDK_OFFSET(0x1D80C510)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D80C190)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1D80C680)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1D80C6A0)
#define SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1D80B9C0)
#define SYSTEM_IO_CSTREAMWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80B890)

namespace System::IO
{
	inline static constexpr unsigned int CStreamWriter_TypeDefinitionIndex = 694;

	class CStreamWriter : public ::System::IO::StreamWriter
	{
	public:
		::System::TermInfoDriver* driver; // 0x68

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER__CTOR_OFFSET))(this, stream, encoding, leaveOpen);
		}

		::System::Void Write(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_1(::System::Char val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_1_OFFSET))(this, val);
		}

		::System::Void InternalWriteString(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITESTRING_OFFSET))(this, val);
		}

		::System::Void InternalWriteChar(::System::Char val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHAR_OFFSET))(this, val);
		}

		::System::Void InternalWriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_INTERNALWRITECHARS_OFFSET))(this, buffer, n);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* val)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_2_OFFSET))(this, val);
		}

		::System::Void Write_3(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_CSTREAMWRITER_WRITE_3_OFFSET))(this, val);
		}
	};
}
