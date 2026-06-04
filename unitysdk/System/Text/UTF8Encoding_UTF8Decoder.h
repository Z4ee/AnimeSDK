#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/DecoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UTF8Encoding; }

#define SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x18610A90)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x18610A70)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x186107A0)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186104F0)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x18610090)

namespace System::Text
{
	inline static constexpr unsigned int UTF8Encoding_UTF8Decoder_TypeDefinitionIndex = 508;

	class UTF8Encoding_UTF8Decoder : public ::System::Text::DecoderNLS
	{
	public:
		::System::Int32 bits; // 0x30

		::System::Void _ctor(::System::Text::UTF8Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF8Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER_RESET_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8DECODER_GET_HASSTATE_OFFSET))(this);
		}
	};
}
