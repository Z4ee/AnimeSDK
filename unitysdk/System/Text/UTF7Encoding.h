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

#define SYSTEM_TEXT_UTF7ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC270F0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1BC27560)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1BC275F0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1BC27540)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC273E0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1BC27EA0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1BC280D0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1BC278D0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BC276D0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1BC28360)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1BC28340)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC281E0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1BC289C0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1BC28670)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1BC28440)
#define SYSTEM_TEXT_UTF7ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1BC28C30)
#define SYSTEM_TEXT_UTF7ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1BC28D90)
#define SYSTEM_TEXT_UTF7ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC272B0)
#define SYSTEM_TEXT_UTF7ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC28EF0)
#define SYSTEM_TEXT_UTF7ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC28FB0)
#define SYSTEM_TEXT_UTF7ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1BC28AD0)
#define SYSTEM_TEXT_UTF7ENCODING_MAKETABLES_OFFSET UNITYSDK_OFFSET(0x1BC26C70)
#define SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BC26FB0)
#define SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BC26FA0)
#define SYSTEM_TEXT_UTF7ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1BC26F20)
#define SYSTEM_TEXT_UTF7ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC26BE0)
#define SYSTEM_TEXT_UTF7ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC13740)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_TypeDefinitionIndex = 504;

	class UTF7Encoding : public ::System::Text::Encoding
	{
	public:
		::Il2CppArray<::System::Boolean>* directEncode; // 0x30
		::Il2CppArray<::System::Byte>* base64Bytes; // 0x38
		::Il2CppArray<::System::SByte>* base64Values; // 0x40
		::System::Boolean m_allowOptionals; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void MakeTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_MAKETABLES_OFFSET))(this);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZING_OFFSET))(this, a1);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ONDESERIALIZED_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_2(::System::Char* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBytes(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_2(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_3(::System::Char* a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes_3(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetCharCount_2(::System::Byte* a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars_2(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}
	};
}
