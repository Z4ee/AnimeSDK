#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/EncoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UTF8Encoding; }

#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x1BC2EC30)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x1BC2EB90)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BC2E950)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC2E630)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2D800)

namespace System::Text
{
	inline static constexpr unsigned int UTF8Encoding_UTF8Encoder_TypeDefinitionIndex = 510;

	class UTF8Encoding_UTF8Encoder : public ::System::Text::EncoderNLS
	{
	public:
		::System::Int32 surrogateChar; // 0x30

		::System::Void _ctor(::System::Text::UTF8Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF8Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_RESET_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_GET_HASSTATE_OFFSET))(this);
		}
	};
}
