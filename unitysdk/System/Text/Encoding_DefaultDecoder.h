#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Decoder.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A3B6EA0)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1A3B6ED0)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3B6E70)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1A3B6F40)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1A3B6F80)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1A3B6F00)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1A3B6D60)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A3B6DB0)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3B6B30)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B6B20)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_DefaultDecoder_TypeDefinitionIndex = 475;

	class Encoding_DefaultDecoder : public ::System::Text::Decoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_hasInitializedEncoding; // 0x28

		::System::Void _ctor(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_OFFSET))(this, encoding);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETREALOBJECT_OFFSET))(this, context);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_1_OFFSET))(this, bytes, index, count, flush);
		}

		::System::Int32 GetCharCount_2(::System::Byte* bytes, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_2_OFFSET))(this, bytes, count, flush);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetChars_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_1_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, flush);
		}

		::System::Int32 GetChars_2(::System::Byte* bytes, ::System::Int32 byteCount, ::System::Char* chars, ::System::Int32 charCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_2_OFFSET))(this, bytes, byteCount, chars, charCount, flush);
		}
	};
}
