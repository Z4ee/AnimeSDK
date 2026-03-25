#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODER_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1620C7D0)
#define SYSTEM_TEXT_ENCODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1620C4B0)
#define SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1620C160)
#define SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1620C2B0)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x16208A60)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1620C0A0)
#define SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x16208A50)
#define SYSTEM_TEXT_ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x1620C0B0)
#define SYSTEM_TEXT_ENCODER_SERIALIZEENCODER_OFFSET UNITYSDK_OFFSET(0x1620BFF0)
#define SYSTEM_TEXT_ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1620C090)

namespace System::Text
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 476;

	class Encoder : public ::System::Object
	{
	public:
		::System::Text::EncoderFallbackBuffer* m_fallbackBuffer; // 0x10
		::System::Text::EncoderFallback* m_fallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER__CTOR_OFFSET))(this);
		}

		::System::Void SerializeEncoder(::System::Runtime::Serialization::SerializationInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_SERIALIZEENCODER_OFFSET))(this, info);
		}

		::System::Text::EncoderFallback* get_Fallback()
		{
			return ((::System::Text::EncoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_FALLBACK_OFFSET))(this);
		}

		::System::Text::EncoderFallbackBuffer* get_FallbackBuffer()
		{
			return ((::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET))(this);
		}

		::System::Boolean get_InternalHasFallbackBuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_RESET_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::System::Char* chars, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET))(this, chars, count, flush);
		}

		::System::Int32 GetBytes(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET))(this, chars, charCount, bytes, byteCount, flush);
		}

		::System::Void Convert(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::System::Boolean flush, ::System::Int32& charsUsed, ::System::Int32& bytesUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_CONVERT_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed);
		}

		::System::Void Convert_1(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Boolean flush, ::System::Int32& charsUsed, ::System::Int32& bytesUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_CONVERT_1_OFFSET))(this, chars, charCount, bytes, byteCount, flush, charsUsed, bytesUsed, completed);
		}
	};
}
