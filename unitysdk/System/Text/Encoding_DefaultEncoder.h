#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Encoder.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1C507E40)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1C507E10)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C507EB0)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1C507E70)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1C507CA0)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C507D50)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5079D0)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5079C0)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_DefaultEncoder_TypeDefinitionIndex = 474;

	class Encoding_DefaultEncoder : public ::System::Text::Encoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_hasInitializedEncoding; // 0x28
		::System::Char charLeftOver; // 0x2A

		::System::Void _ctor(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_OFFSET))(this, encoding);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETREALOBJECT_OFFSET))(this, context);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_OFFSET))(this, chars, index, count, flush);
		}

		::System::Int32 GetByteCount_1(::System::Char* chars, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_1_OFFSET))(this, chars, count, flush);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex, flush);
		}

		::System::Int32 GetBytes_1(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_1_OFFSET))(this, chars, charCount, bytes, byteCount, flush);
		}
	};
}
