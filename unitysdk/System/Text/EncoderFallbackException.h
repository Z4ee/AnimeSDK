#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1620D890)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1620CBA0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1620CEF0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1620D7F0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackException_TypeDefinitionIndex = 481;

	class EncoderFallbackException : public ::System::ArgumentException
	{
	public:
		::System::Char charUnknown; // 0x90
		::System::Char charUnknownLow; // 0x92
		::System::Char charUnknownHigh; // 0x94
		::System::Int32 index; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Char charUnknown, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET))(this, message, charUnknown, index);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Char charUnknownHigh, ::System::Char charUnknownLow, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET))(this, message, charUnknownHigh, charUnknownLow, index);
		}
	};
}
