#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"

namespace System::Text { class UTF7Encoding_DecoderUTF7Fallback; }

#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC296C0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1BC29700)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1BC29720)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC29740)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1BC29730)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC29640)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_DecoderUTF7FallbackBuffer_TypeDefinitionIndex = 508;

	class UTF7Encoding_DecoderUTF7FallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		::System::Int32 iCount; // 0x20
		::System::Char cFallback; // 0x24
		::System::Int32 iSize; // 0x28

		::System::Void _ctor(::System::Text::UTF7Encoding_DecoderUTF7Fallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF7Encoding_DecoderUTF7Fallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
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

		::System::Int32 InternalFallback(::Il2CppArray<::System::Byte>* a1, ::System::Byte* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, a1, a2);
		}
	};
}
