#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Encoder.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1BC14B70)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC14AC0)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1BC14CE0)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BC14C10)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC148E0)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BC14A00)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC14660)
#define SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC134D0)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_DefaultEncoder_TypeDefinitionIndex = 490;

	class Encoding_DefaultEncoder : public ::System::Text::Encoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Char charLeftOver; // 0x28
		::System::Boolean m_hasInitializedEncoding; // 0x2A

		::System::Void _ctor(::System::Text::Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETREALOBJECT_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetByteCount_1(::System::Char* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTECOUNT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetBytes_1(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DEFAULTENCODER_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
