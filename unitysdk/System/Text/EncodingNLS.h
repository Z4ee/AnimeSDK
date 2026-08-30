#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoder; }

#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1B3C03C0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1B3C04B0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C01F0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1B3C0880)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1B3C0B10)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1B3C05F0)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1B3C0E60)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3C0C90)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1B3C1230)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1B3C0FA0)
#define SYSTEM_TEXT_ENCODINGNLS_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1B3C1510)
#define SYSTEM_TEXT_ENCODINGNLS_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1B3C15D0)
#define SYSTEM_TEXT_ENCODINGNLS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B3C13B0)
#define SYSTEM_TEXT_ENCODINGNLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C01E0)

namespace System::Text
{
	inline static constexpr unsigned int EncodingNLS_TypeDefinitionIndex = 495;

	class EncodingNLS : public ::System::Text::Encoding
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_2(::System::Char* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBytes(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_2(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETSTRING_OFFSET))(this, a1, a2, a3);
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
