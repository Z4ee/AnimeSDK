#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_UTF8ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCCCD60)
#define SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x1CCCC5E0)
#define SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CCCC630)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1CCC9FC0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1CCCA040)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1CCC9950)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1CCC97F0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTESUNKNOWN_OFFSET UNITYSDK_OFFSET(0x1CCCC690)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1CCCAB90)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1CCCADB0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1CCCA300)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1CCCA100)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1CCCB5C0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1CCCB020)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1CCCAEC0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1CCCC280)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1CCCB8A0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1CCCB680)
#define SYSTEM_TEXT_UTF8ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1CCCC9A0)
#define SYSTEM_TEXT_UTF8ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1CCCCA10)
#define SYSTEM_TEXT_UTF8ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCCCE40)
#define SYSTEM_TEXT_UTF8ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1CCCCA80)
#define SYSTEM_TEXT_UTF8ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1CCCCB80)
#define SYSTEM_TEXT_UTF8ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1CCCCC80)
#define SYSTEM_TEXT_UTF8ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1CCCC390)
#define SYSTEM_TEXT_UTF8ENCODING_INRANGE_OFFSET UNITYSDK_OFFSET(0x1CCCC5B0)
#define SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_1_OFFSET UNITYSDK_OFFSET(0x1CCCC5D0)
#define SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET UNITYSDK_OFFSET(0x1CCCC5C0)
#define SYSTEM_TEXT_UTF8ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1CCC9760)
#define SYSTEM_TEXT_UTF8ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCC96A0)
#define SYSTEM_TEXT_UTF8ENCODING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CCC96F0)
#define SYSTEM_TEXT_UTF8ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC9650)

namespace System::Text
{
	inline static constexpr unsigned int UTF8Encoding_TypeDefinitionIndex = 493;

	class UTF8Encoding : public ::System::Text::Encoding
	{
	public:
		::System::Boolean emitUTF8Identifier; // 0x30
		::System::Boolean isThrowException; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean encoderShouldEmitUTF8Identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING__CTOR_1_OFFSET))(this, encoderShouldEmitUTF8Identifier);
		}

		::System::Void _ctor_2(::System::Boolean encoderShouldEmitUTF8Identifier, ::System::Boolean throwOnInvalidBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING__CTOR_2_OFFSET))(this, encoderShouldEmitUTF8Identifier, throwOnInvalidBytes);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::System::Int32 GetByteCount_1(::System::String* chars)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_1_OFFSET))(this, chars);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetBytes(::System::String* s, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET))(this, s, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_2(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_2_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETSTRING_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetByteCount_3(::System::Char* chars, ::System::Int32 count, ::System::Text::EncoderNLS* baseEncoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_3_OFFSET))(this, chars, count, baseEncoder);
		}

		static ::System::Int32 PtrDiff(::System::Char* a, ::System::Char* b)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET))(a, b);
		}

		static ::System::Int32 PtrDiff_1(::System::Byte* a, ::System::Byte* b)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_1_OFFSET))(a, b);
		}

		static ::System::Boolean InRange(::System::Int32 ch, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_INRANGE_OFFSET))(ch, start, end);
		}

		::System::Int32 GetBytes_3(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* baseEncoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_3_OFFSET))(this, chars, charCount, bytes, byteCount, baseEncoder);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_2_OFFSET))(this, bytes, count, baseDecoder);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, baseDecoder);
		}

		::System::Boolean FallbackInvalidByteSequence(::System::Byte*& pSrc, ::System::Int32 ch, ::System::Text::DecoderFallbackBuffer* fallback, ::System::Char*& pTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte*&, ::System::Int32, ::System::Text::DecoderFallbackBuffer*, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET))(this, pSrc, ch, fallback, pTarget);
		}

		::System::Int32 FallbackInvalidByteSequence_1(::System::Byte* pSrc, ::System::Int32 ch, ::System::Text::DecoderFallbackBuffer* fallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderFallbackBuffer*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_1_OFFSET))(this, pSrc, ch, fallback);
		}

		::Il2CppArray<::System::Byte>* GetBytesUnknown(::System::Byte*& pSrc, ::System::Int32 ch)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Byte*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTESUNKNOWN_OFFSET))(this, pSrc, ch);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETHASHCODE_OFFSET))(this);
		}
	};
}
