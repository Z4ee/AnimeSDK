#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/DecoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UTF7Encoding; }

#define SYSTEM_TEXT_UTF7ENCODING_DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x19972030)
#define SYSTEM_TEXT_UTF7ENCODING_DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x19971F90)
#define SYSTEM_TEXT_UTF7ENCODING_DECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19971DC0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19971A90)
#define SYSTEM_TEXT_UTF7ENCODING_DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x19971750)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_Decoder_TypeDefinitionIndex = 502;

	class UTF7Encoding_Decoder : public ::System::Text::DecoderNLS
	{
	public:
		::System::Boolean firstByte; // 0x30
		::System::Int32 bitCount; // 0x34
		::System::Int32 bits; // 0x38

		::System::Void _ctor(::System::Text::UTF7Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF7Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODER_RESET_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODER_GET_HASSTATE_OFFSET))(this);
		}
	};
}
