#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/EncoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UTF7Encoding; }

#define SYSTEM_TEXT_UTF7ENCODING_ENCODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x199726B0)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x19972610)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19972490)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19972200)
#define SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x199718B0)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_Encoder_TypeDefinitionIndex = 503;

	class UTF7Encoding_Encoder : public ::System::Text::EncoderNLS
	{
	public:
		::System::Int32 bitCount; // 0x30
		::System::Int32 bits; // 0x34

		::System::Void _ctor(::System::Text::UTF7Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF7Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
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
