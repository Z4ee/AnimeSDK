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

#define SYSTEM_TEXT_UNICODEENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1785AF70)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x17857B30)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x17857B80)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x17857360)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x17857200)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x17858800)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x17858A30)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x17857E10)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x17857C40)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x178596E0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x17858CA0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x17858B40)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1785A890)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x178599D0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x178597A0)
#define SYSTEM_TEXT_UNICODEENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1785AC00)
#define SYSTEM_TEXT_UNICODEENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1785AB90)
#define SYSTEM_TEXT_UNICODEENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1785B050)
#define SYSTEM_TEXT_UNICODEENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1785AD70)
#define SYSTEM_TEXT_UNICODEENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1785AE70)
#define SYSTEM_TEXT_UNICODEENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1785AC90)
#define SYSTEM_TEXT_UNICODEENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1785A9A0)
#define SYSTEM_TEXT_UNICODEENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x178571F0)
#define SYSTEM_TEXT_UNICODEENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x17857180)
#define SYSTEM_TEXT_UNICODEENCODING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1785B0D0)
#define SYSTEM_TEXT_UNICODEENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1783FA80)
#define SYSTEM_TEXT_UNICODEENCODING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17857120)
#define SYSTEM_TEXT_UNICODEENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x178570E0)

namespace System::Text
{
	inline static constexpr unsigned int UnicodeEncoding_TypeDefinitionIndex = 498;

	class UnicodeEncoding : public ::System::Text::Encoding
	{
	public:
		static ::System::UInt64* StaticGet_highLowPatternMask()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(UnicodeEncoding_TypeDefinitionIndex)->GetStaticField(0x4690);
		}
		::System::Boolean isThrowException; // 0x30
		::System::Boolean byteOrderMark; // 0x31
		::System::Boolean bigEndian; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean bigEndian, ::System::Boolean byteOrderMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CTOR_1_OFFSET))(this, bigEndian, byteOrderMark);
		}

		::System::Void _ctor_2(::System::Boolean bigEndian, ::System::Boolean byteOrderMark, ::System::Boolean throwOnInvalidBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CTOR_2_OFFSET))(this, bigEndian, byteOrderMark, throwOnInvalidBytes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING__CCTOR_OFFSET))();
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::System::Int32 GetByteCount_1(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_1_OFFSET))(this, s);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetBytes(::System::String* s, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET))(this, s, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_2(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_2_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETSTRING_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetByteCount_3(::System::Char* chars, ::System::Int32 count, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_3_OFFSET))(this, chars, count, encoder);
		}

		::System::Int32 GetBytes_3(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* encoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_3_OFFSET))(this, chars, charCount, bytes, byteCount, encoder);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_2_OFFSET))(this, bytes, count, baseDecoder);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, baseDecoder);
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

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETHASHCODE_OFFSET))(this);
		}
	};
}
