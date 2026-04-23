#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/EncoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UTF7Encoding; }

#define SYSTEM_TEXT_UTF7ENCODING_ENCODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x17853120)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x178530F0)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x17852F60)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17852D20)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x178524D0)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_Encoder_TypeDefinitionIndex = 504;

	class UTF7Encoding_Encoder : public ::System::Text::EncoderNLS
	{
	public:
		::System::Int32 bitCount; // 0x30
		::System::Int32 bits; // 0x34

		::System::Void _ctor(::System::Text::UTF7Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF7Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_OFFSET))(this, encoding);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER_RESET_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER_GET_HASSTATE_OFFSET))(this);
		}
	};
}
