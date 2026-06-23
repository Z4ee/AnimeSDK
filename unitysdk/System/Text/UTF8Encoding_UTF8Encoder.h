#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/EncoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UTF8Encoding; }

#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_RESET_OFFSET UNITYSDK_OFFSET(0x1C1B7210)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C1B6F70)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1B6C60)
#define SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B6C30)

namespace System::Text
{
	inline static constexpr unsigned int UTF8Encoding_UTF8Encoder_TypeDefinitionIndex = 494;

	class UTF8Encoding_UTF8Encoder : public ::System::Text::EncoderNLS
	{
	public:
		::System::Int32 surrogateChar; // 0x30

		::System::Void _ctor(::System::Text::UTF8Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UTF8Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_OFFSET))(this, encoding);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_UTF8ENCODER_RESET_OFFSET))(this);
		}
	};
}
