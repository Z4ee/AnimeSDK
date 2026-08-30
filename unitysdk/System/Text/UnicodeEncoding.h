#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_UNICODEENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC33910)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1BC2F950)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1BC2F9A0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1BC2EEF0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC2EDA0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1BC30A30)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1BC30C60)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1BC2FC30)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BC2FA60)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1BC31AE0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1BC30EC0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC30D70)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1BC32FB0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1BC31DD0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1BC31BA0)
#define SYSTEM_TEXT_UNICODEENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1BC332B0)
#define SYSTEM_TEXT_UNICODEENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1BC331F0)
#define SYSTEM_TEXT_UNICODEENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC33AC0)
#define SYSTEM_TEXT_UNICODEENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC33540)
#define SYSTEM_TEXT_UNICODEENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC33720)
#define SYSTEM_TEXT_UNICODEENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1BC334A0)
#define SYSTEM_TEXT_UNICODEENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1BC330C0)
#define SYSTEM_TEXT_UNICODEENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BC2ED90)
#define SYSTEM_TEXT_UNICODEENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1BC2ED20)
#define SYSTEM_TEXT_UNICODEENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC33C10)
#define SYSTEM_TEXT_UNICODEENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC13700)
#define SYSTEM_TEXT_UNICODEENCODING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC2ECD0)
#define SYSTEM_TEXT_UNICODEENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2EC40)

namespace System::Text
{
	inline static constexpr unsigned int UnicodeEncoding_TypeDefinitionIndex = 500;

	class UnicodeEncoding : public ::System::Text::Encoding
	{
	public:
		static ::System::UInt64* StaticGet_highLowPatternMask()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(UnicodeEncoding_TypeDefinitionIndex)->GetStaticField(0x7A50);
		}
		::System::Boolean bigEndian; // 0x30
		::System::Boolean byteOrderMark; // 0x31
		::System::Boolean isThrowException; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CCTOR_OFFSET))();
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_ONDESERIALIZING_OFFSET))(this, a1);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_2(::System::Char* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBytes(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_2(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_3(::System::Char* a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes_3(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetCharCount_2(::System::Byte* a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars_2(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETDECODER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETHASHCODE_OFFSET))(this);
		}
	};
}
