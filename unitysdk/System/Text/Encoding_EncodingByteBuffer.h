#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class EncoderFallbackBuffer; }
namespace System::Text { class EncoderNLS; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_1_OFFSET UNITYSDK_OFFSET(0x1995DBE0)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_2_OFFSET UNITYSDK_OFFSET(0x1995DC20)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_3_OFFSET UNITYSDK_OFFSET(0x1995DC90)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x1995DAC0)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1995DDB0)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_CHARSUSED_OFFSET UNITYSDK_OFFSET(0x1995DE70)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1995DE90)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x1995DD10)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1995DB00)
#define SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1995D7C0)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_EncodingByteBuffer_TypeDefinitionIndex = 490;

	class Encoding_EncodingByteBuffer : public ::System::Object
	{
	public:
		::System::Text::EncoderNLS* encoder; // 0x10
		::System::Text::EncoderFallbackBuffer* fallbackBuffer; // 0x18
		::System::Text::Encoding* enc; // 0x20
		::System::Char* chars; // 0x28
		::System::Byte* byteStart; // 0x30
		::System::Char* charEnd; // 0x38
		::System::Char* charStart; // 0x40
		::System::Byte* bytes; // 0x48
		::System::Byte* byteEnd; // 0x50
		::System::Int32 byteCountResult; // 0x58

		::System::Void _ctor(::System::Text::Encoding* a1, ::System::Text::EncoderNLS* a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Char* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*, ::System::Text::EncoderNLS*, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean AddByte(::System::Byte a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddByte_1(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_1_OFFSET))(this, a1);
		}

		::System::Boolean AddByte_2(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddByte_3(::System::Byte a1, ::System::Byte a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_ADDBYTE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MovePrevious(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_MOVEPREVIOUS_OFFSET))(this, a1);
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

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGBYTEBUFFER_GET_COUNT_OFFSET))(this);
		}
	};
}
