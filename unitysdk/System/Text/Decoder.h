#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODER_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x162096B0)
#define SYSTEM_TEXT_DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x16209390)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x16209010)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x16208FF0)
#define SYSTEM_TEXT_DECODER_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x16209180)
#define SYSTEM_TEXT_DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x16209150)
#define SYSTEM_TEXT_DECODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x16208AD0)
#define SYSTEM_TEXT_DECODER_GET_FALLBACK_OFFSET UNITYSDK_OFFSET(0x16208F20)
#define SYSTEM_TEXT_DECODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x16208F30)
#define SYSTEM_TEXT_DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x16208F40)
#define SYSTEM_TEXT_DECODER_SERIALIZEDECODER_OFFSET UNITYSDK_OFFSET(0x16208E70)
#define SYSTEM_TEXT_DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x16208F10)

namespace System::Text
{
	inline static constexpr unsigned int Decoder_TypeDefinitionIndex = 465;

	class Decoder : public ::System::Object
	{
	public:
		::System::Text::DecoderFallbackBuffer* m_fallbackBuffer; // 0x10
		::System::Text::DecoderFallback* m_fallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER__CTOR_OFFSET))(this);
		}

		::System::Void SerializeDecoder(::System::Runtime::Serialization::SerializationInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_SERIALIZEDECODER_OFFSET))(this, info);
		}

		::System::Text::DecoderFallback* get_Fallback()
		{
			return ((::System::Text::DecoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GET_FALLBACK_OFFSET))(this);
		}

		::System::Text::DecoderFallbackBuffer* get_FallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GET_FALLBACKBUFFER_OFFSET))(this);
		}

		::System::Boolean get_InternalHasFallbackBuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_RESET_OFFSET))(this);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET))(this, bytes, index, count, flush);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_1_OFFSET))(this, bytes, count, flush);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, flush);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount, flush);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_CONVERT_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
		}

		::System::Void Convert_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_CONVERT_1_OFFSET))(this, bytes, byteCount, chars, charCount, flush, bytesUsed, charsUsed, completed);
		}
	};
}
