#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_UTF32ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x16223860)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x16221690)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x16221710)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x16221330)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x162211D0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x16221E80)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x162220B0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x162219D0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x162217D0)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x16222780)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x16222320)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x162221C0)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x16223150)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x16222A70)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x16222840)
#define SYSTEM_TEXT_UTF32ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x162234B0)
#define SYSTEM_TEXT_UTF32ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x16223550)
#define SYSTEM_TEXT_UTF32ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16223920)
#define SYSTEM_TEXT_UTF32ENCODING_GETHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x16223490)
#define SYSTEM_TEXT_UTF32ENCODING_GETLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x162234A0)
#define SYSTEM_TEXT_UTF32ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x162235C0)
#define SYSTEM_TEXT_UTF32ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x162236C0)
#define SYSTEM_TEXT_UTF32ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x16223780)
#define SYSTEM_TEXT_UTF32ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x16223260)
#define SYSTEM_TEXT_UTF32ENCODING_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x16223470)
#define SYSTEM_TEXT_UTF32ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x16221160)
#define SYSTEM_TEXT_UTF32ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16210AC0)
#define SYSTEM_TEXT_UTF32ENCODING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x162210F0)
#define SYSTEM_TEXT_UTF32ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x162210B0)

namespace System::Text
{
	inline static constexpr unsigned int UTF32Encoding_TypeDefinitionIndex = 500;

	class UTF32Encoding : public ::System::Text::Encoding
	{
	public:
		::System::Boolean isThrowException; // 0x30
		::System::Boolean emitUTF32ByteOrderMark; // 0x31
		::System::Boolean bigEndian; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean bigEndian, ::System::Boolean byteOrderMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING__CTOR_1_OFFSET))(this, bigEndian, byteOrderMark);
		}

		::System::Void _ctor_2(::System::Boolean bigEndian, ::System::Boolean byteOrderMark, ::System::Boolean throwOnInvalidCharacters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING__CTOR_2_OFFSET))(this, bigEndian, byteOrderMark, throwOnInvalidCharacters);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::System::Int32 GetByteCount_1(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_1_OFFSET))(this, s);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetBytes(::System::String* s, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET))(this, s, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_2(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_2_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETSTRING_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetByteCount_3(::System::Char* chars, ::System::Int32 count, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_3_OFFSET))(this, chars, count, encoder);
		}

		::System::Int32 GetBytes_3(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_3_OFFSET))(this, chars, charCount, bytes, byteCount, encoder);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_2_OFFSET))(this, bytes, count, baseDecoder);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, baseDecoder);
		}

		::System::UInt32 GetSurrogate(::System::Char cHigh, ::System::Char cLow)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETSURROGATE_OFFSET))(this, cHigh, cLow);
		}

		::System::Char GetHighSurrogate(::System::UInt32 iChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETHIGHSURROGATE_OFFSET))(this, iChar);
		}

		::System::Char GetLowSurrogate(::System::UInt32 iChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETLOWSURROGATE_OFFSET))(this, iChar);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETHASHCODE_OFFSET))(this);
		}
	};
}
