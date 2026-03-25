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

#define SYSTEM_TEXT_UTF7ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x16223EC0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x162241B0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x16224240)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x16224190)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x16224020)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x16224C00)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x16224E30)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x16224520)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x16224320)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x162250D0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x162250B0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x16224F40)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x16225860)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x162253E0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x162251B0)
#define SYSTEM_TEXT_UTF7ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x16225B80)
#define SYSTEM_TEXT_UTF7ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x16225C20)
#define SYSTEM_TEXT_UTF7ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16223FB0)
#define SYSTEM_TEXT_UTF7ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x16225CC0)
#define SYSTEM_TEXT_UTF7ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x16225D80)
#define SYSTEM_TEXT_UTF7ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x16225970)
#define SYSTEM_TEXT_UTF7ENCODING_MAKETABLES_OFFSET UNITYSDK_OFFSET(0x16223A20)
#define SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x16223DD0)
#define SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x16223DB0)
#define SYSTEM_TEXT_UTF7ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x16223D30)
#define SYSTEM_TEXT_UTF7ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162239E0)
#define SYSTEM_TEXT_UTF7ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x16213160)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_TypeDefinitionIndex = 502;

	class UTF7Encoding : public ::System::Text::Encoding
	{
	public:
		::Il2CppArray<::System::Boolean>* directEncode; // 0x30
		::Il2CppArray<::System::SByte>* base64Values; // 0x38
		::Il2CppArray<::System::Byte>* base64Bytes; // 0x40
		::System::Boolean m_allowOptionals; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean allowOptionals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING__CTOR_1_OFFSET))(this, allowOptionals);
		}

		::System::Void MakeTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_MAKETABLES_OFFSET))(this);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::System::Int32 GetByteCount_1(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_1_OFFSET))(this, s);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetBytes(::System::String* s, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET))(this, s, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_2(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_2_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETSTRING_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetByteCount_3(::System::Char* chars, ::System::Int32 count, ::System::Text::EncoderNLS* baseEncoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_3_OFFSET))(this, chars, count, baseEncoder);
		}

		::System::Int32 GetBytes_3(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Text::EncoderNLS* baseEncoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_3_OFFSET))(this, chars, charCount, bytes, byteCount, baseEncoder);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_2_OFFSET))(this, bytes, count, baseDecoder);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Text::DecoderNLS* baseDecoder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, baseDecoder);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}
	};
}
