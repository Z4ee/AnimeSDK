#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9DF260)
#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C9DF300)
#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DF1A0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallbackException_TypeDefinitionIndex = 456;

	class DecoderFallbackException : public ::System::ArgumentException
	{
	public:
		::Il2CppArray<::System::Byte>* bytesUnknown; // 0x90
		::System::Int32 index; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::String* message, ::Il2CppArray<::System::Byte>* bytesUnknown, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION__CTOR_2_OFFSET))(this, message, bytesUnknown, index);
		}
	};
}
