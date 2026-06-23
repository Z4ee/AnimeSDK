#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_1_OFFSET UNITYSDK_OFFSET(0x1D0BF1C0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x1D0BF110)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET UNITYSDK_OFFSET(0x1D0BF260)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1D0BF320)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1D0BF2B0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET UNITYSDK_OFFSET(0x1D0BF280)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET UNITYSDK_OFFSET(0x1D0BF2A0)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x1D0BF270)
#define SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF030)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_EncodingCharBuffer_TypeDefinitionIndex = 476;

	class Encoding_EncodingCharBuffer : public ::System::Object
	{
	public:
		::System::Text::DecoderNLS* decoder; // 0x10
		::System::Text::Encoding* enc; // 0x18
		::System::Text::DecoderFallbackBuffer* fallbackBuffer; // 0x20
		::System::Byte* bytes; // 0x28
		::System::Byte* byteEnd; // 0x30
		::System::Char* charEnd; // 0x38
		::System::Char* charStart; // 0x40
		::System::Byte* byteStart; // 0x48
		::System::Char* chars; // 0x50
		::System::Int32 charCountResult; // 0x58

		::System::Void _ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::System::Char* charStart, ::System::Int32 charCount, ::System::Byte* byteStart, ::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*, ::System::Text::DecoderNLS*, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER__CTOR_OFFSET))(this, enc, decoder, charStart, charCount, byteStart, byteCount);
		}

		::System::Boolean AddChar(::System::Char ch, ::System::Int32 numBytes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_OFFSET))(this, ch, numBytes);
		}

		::System::Boolean AddChar_1(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADDCHAR_1_OFFSET))(this, ch);
		}

		::System::Void AdjustBytes(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET))(this, count);
		}

		::System::Boolean get_MoreData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET))(this);
		}

		::System::Byte GetNextByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET))(this);
		}

		::System::Int32 get_BytesUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET))(this);
		}

		::System::Boolean Fallback(::System::Byte fallbackByte)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_OFFSET))(this, fallbackByte);
		}

		::System::Boolean Fallback_1(::Il2CppArray<::System::Byte>* byteBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ENCODINGCHARBUFFER_FALLBACK_1_OFFSET))(this, byteBuffer);
		}
	};
}
