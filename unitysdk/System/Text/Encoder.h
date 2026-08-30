#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODER_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1B3B5740)
#define SYSTEM_TEXT_ENCODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1B3B52F0)
#define SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B3B4EF0)
#define SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1B3B50A0)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3B4B00)
#define SYSTEM_TEXT_ENCODER_GET_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3B4AF0)
#define SYSTEM_TEXT_ENCODER_GET_INTERNALHASFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3B4D00)
#define SYSTEM_TEXT_ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x1B3B4D10)
#define SYSTEM_TEXT_ENCODER_SERIALIZEENCODER_OFFSET UNITYSDK_OFFSET(0x1B3B4A40)
#define SYSTEM_TEXT_ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B4AE0)

namespace System::Text
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 478;

	class Encoder : public ::System::Object
	{
	public:
		::System::Text::EncoderFallbackBuffer* m_fallbackBuffer; // 0x10
		::System::Text::EncoderFallback* m_fallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER__CTOR_OFFSET))(this);
		}

		::System::Void SerializeEncoder(::System::Runtime::Serialization::SerializationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_SERIALIZEENCODER_OFFSET))(this, a1);
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

		::System::Int32 GetByteCount(::System::Char* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Convert(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32& a8, ::System::Int32& a9, ::System::Boolean& a10)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_CONVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void Convert_1(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32& a6, ::System::Int32& a7, ::System::Boolean& a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODER_CONVERT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
