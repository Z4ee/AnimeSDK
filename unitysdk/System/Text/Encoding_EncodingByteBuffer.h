#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class EncoderFallbackBuffer; }
namespace System::Text { class EncoderNLS; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_1_OFFSET UNITYSDK_OFFSET(0x1DC0E5E0)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_2_OFFSET UNITYSDK_OFFSET(0x1DC0E6C0)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_3_OFFSET UNITYSDK_OFFSET(0x1DC0E850)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x1DC0E440)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1DC0E8E0)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_CHARSUSED_OFFSET UNITYSDK_OFFSET(0x1DC0E940)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x1DC0E890)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1DC0E520)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0E1D0)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_EncodingByteBuffer_TypeDefinitionIndex = 477;

	class Encoding_EncodingByteBuffer : public ::System::Object
	{
	public:
		::System::Text::Encoding* enc; // 0x10
		::System::Text::EncoderNLS* encoder; // 0x18
		::System::Text::EncoderFallbackBuffer* fallbackBuffer; // 0x20
		::System::Int32 byteCountResult; // 0x28
		::System::Byte* byteStart; // 0x30
		::System::Byte* byteEnd; // 0x38
		::System::Char* chars; // 0x40
		::System::Byte* bytes; // 0x48
		::System::Char* charEnd; // 0x50
		::System::Char* charStart; // 0x58

		::System::Void _ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, ::System::Byte* inByteStart, ::System::Int32 inByteCount, ::System::Char* inCharStart, ::System::Int32 inCharCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*, ::System::Text::EncoderNLS*, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER__CTOR_OFFSET))(this, inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount);
		}

		::System::Boolean AddByte(::System::Byte b, ::System::Int32 moreBytesExpected)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_OFFSET))(this, b, moreBytesExpected);
		}

		::System::Boolean AddByte_1(::System::Byte b1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_1_OFFSET))(this, b1);
		}

		::System::Boolean AddByte_2(::System::Byte b1, ::System::Byte b2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_2_OFFSET))(this, b1, b2);
		}

		::System::Boolean AddByte_3(::System::Byte b1, ::System::Byte b2, ::System::Int32 moreBytesExpected)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_3_OFFSET))(this, b1, b2, moreBytesExpected);
		}

		::System::Void MovePrevious(::System::Boolean bThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_MOVEPREVIOUS_OFFSET))(this, bThrow);
		}

		::System::Boolean get_MoreData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_MOREDATA_OFFSET))(this);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_CharsUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_CHARSUSED_OFFSET))(this);
		}
	};
}
