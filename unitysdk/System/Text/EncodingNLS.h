#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoder; }

#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A0BBFD0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1A0BC060)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1A0BBE60)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1A0BC330)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1A0BC560)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A0BC130)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A0BC7F0)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0BC680)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1A0BCAF0)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1A0BC8C0)
#define SYSTEM_TEXT_ENCODINGNLS_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1A0BCE20)
#define SYSTEM_TEXT_ENCODINGNLS_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1A0BCE90)
#define SYSTEM_TEXT_ENCODINGNLS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1A0BCC10)
#define SYSTEM_TEXT_ENCODINGNLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BBDE0)

namespace System::Text
{
	inline static constexpr unsigned int EncodingNLS_TypeDefinitionIndex = 479;

	class EncodingNLS : public ::System::Text::Encoding
	{
	public:
		::System::Void _ctor(::System::Int32 codePage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS__CTOR_OFFSET))(this, codePage);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::System::Int32 GetByteCount_1(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_1_OFFSET))(this, s);
		}

		::System::Int32 GetByteCount_2(::System::Char* chars, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_2_OFFSET))(this, chars, count);
		}

		::System::Int32 GetBytes(::System::String* s, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET))(this, s, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetBytes_2(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_2_OFFSET))(this, chars, charCount, bytes, byteCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::System::Byte* bytes, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_1_OFFSET))(this, bytes, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARS_1_OFFSET))(this, bytes, byteCount, chars, charCount);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETSTRING_OFFSET))(this, bytes, index, count);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETENCODER_OFFSET))(this);
		}
	};
}
