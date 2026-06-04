#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Decoder.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x185FA0B0)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x185FA0E0)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185FA080)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x185FA150)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x185FA190)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x185FA110)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x185F9F70)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x185F9FC0)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185F9D80)
#define SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x185F9500)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_DefaultDecoder_TypeDefinitionIndex = 488;

	class Encoding_DefaultDecoder : public ::System::Text::Decoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_hasInitializedEncoding; // 0x28

		::System::Void _ctor(::System::Text::Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETREALOBJECT_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount_2(::System::Byte* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARCOUNT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetChars_2(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTDECODER_GETCHARS_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
