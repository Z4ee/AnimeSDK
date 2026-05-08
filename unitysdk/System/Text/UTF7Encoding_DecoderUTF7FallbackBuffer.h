#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"

namespace System::Text { class UTF7Encoding_DecoderUTF7Fallback; }

#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0BCF10)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1A0BCF60)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1A0BCF80)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0BCFA0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1A0BCF90)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BCF00)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_DecoderUTF7FallbackBuffer_TypeDefinitionIndex = 492;

	class UTF7Encoding_DecoderUTF7FallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		::System::Int32 iSize; // 0x20
		::System::Int32 iCount; // 0x24
		::System::Char cFallback; // 0x28

		::System::Void _ctor(::System::Text::UTF7Encoding_DecoderUTF7Fallback* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF7Encoding_DecoderUTF7Fallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER__CTOR_OFFSET))(this, fallback);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* bytesUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_FALLBACK_OFFSET))(this, bytesUnknown, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Byte>* bytes, ::System::Byte* pBytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, bytes, pBytes);
		}
	};
}
