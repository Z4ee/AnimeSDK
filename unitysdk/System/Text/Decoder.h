#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODER_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x185EFD40)
#define SYSTEM_TEXT_DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x185EFA20)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x185EF6C0)
#define SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185EF6A0)
#define SYSTEM_TEXT_DECODER_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x185EF820)
#define SYSTEM_TEXT_DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x185EF7F0)
#define SYSTEM_TEXT_DECODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x185EF180)
#define SYSTEM_TEXT_DECODER_GET_FALLBACK_OFFSET UNITYSDK_OFFSET(0x185EF5D0)
#define SYSTEM_TEXT_DECODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x185EF5E0)
#define SYSTEM_TEXT_DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x185EF5F0)
#define SYSTEM_TEXT_DECODER_SERIALIZEDECODER_OFFSET UNITYSDK_OFFSET(0x185EF520)
#define SYSTEM_TEXT_DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x185EF5C0)

namespace System::Text
{
	inline static constexpr unsigned int Decoder_TypeDefinitionIndex = 464;

	class Decoder : public ::System::Object
	{
	public:
		::System::Text::DecoderFallback* m_fallback; // 0x10
		::System::Text::DecoderFallbackBuffer* m_fallbackBuffer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER__CTOR_OFFSET))(this);
		}

		::System::Void SerializeDecoder(::System::Runtime::Serialization::SerializationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_SERIALIZEDECODER_OFFSET))(this, a1);
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

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount_1(::System::Byte* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARCOUNT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetChars_1(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32& a8, ::System::Int32& a9, ::System::Boolean& a10)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_CONVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void Convert_1(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32& a6, ::System::Int32& a7, ::System::Boolean& a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODER_CONVERT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
