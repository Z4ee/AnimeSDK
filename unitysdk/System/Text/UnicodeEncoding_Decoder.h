#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/DecoderNLS.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class UnicodeEncoding; }

#define SYSTEM_TEXT_UNICODEENCODING_DECODER_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x1997CD90)
#define SYSTEM_TEXT_UNICODEENCODING_DECODER_RESET_OFFSET UNITYSDK_OFFSET(0x1997CCF0)
#define SYSTEM_TEXT_UNICODEENCODING_DECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1997CA80)
#define SYSTEM_TEXT_UNICODEENCODING_DECODER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1997C630)
#define SYSTEM_TEXT_UNICODEENCODING_DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1997BDF0)

namespace System::Text
{
	inline static constexpr unsigned int UnicodeEncoding_Decoder_TypeDefinitionIndex = 498;

	class UnicodeEncoding_Decoder : public ::System::Text::DecoderNLS
	{
	public:
		::System::Char lastChar; // 0x30
		::System::Int32 lastByte; // 0x34

		::System::Void _ctor(::System::Text::UnicodeEncoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::UnicodeEncoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_DECODER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_DECODER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_DECODER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_DECODER_RESET_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_DECODER_GET_HASSTATE_OFFSET))(this);
		}
	};
}
