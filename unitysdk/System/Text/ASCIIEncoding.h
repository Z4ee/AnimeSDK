#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1CE91BC0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1CE91C40)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1CE91750)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE915F0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1CE925D0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1CE927F0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1CE91F00)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1CE91D00)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1CE92CB0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1CE92A60)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE92900)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1CE934D0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1CE92F90)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1CE92D70)
#define SYSTEM_TEXT_ASCIIENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1CE93A00)
#define SYSTEM_TEXT_ASCIIENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1CE93A70)
#define SYSTEM_TEXT_ASCIIENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE93800)
#define SYSTEM_TEXT_ASCIIENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE93900)
#define SYSTEM_TEXT_ASCIIENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1CE935E0)
#define SYSTEM_TEXT_ASCIIENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1CE915D0)
#define SYSTEM_TEXT_ASCIIENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE91580)

namespace System::Text
{
	inline static constexpr unsigned int ASCIIEncoding_TypeDefinitionIndex = 450;

	class ASCIIEncoding : public ::System::Text::Encoding
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING__CTOR_OFFSET))(this);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::System::Int32 GetByteCount_1(::System::String* chars)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_1_OFFSET))(this, chars);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetBytes(::System::String* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_2(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_2_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETSTRING_OFFSET))(this, bytes, byteIndex, byteCount);
		}

		::System::Int32 GetByteCount_3(::System::Char* chars, ::System::Int32 charCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_3_OFFSET))(this, chars, charCount, encoder);
		}

		::System::Int32 GetBytes_3(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_3_OFFSET))(this, chars, charCount, bytes, byteCount, encoder);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_2_OFFSET))(this, bytes, count, decoder);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* decoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, decoder);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETENCODER_OFFSET))(this);
		}
	};
}
