#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5075D0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C507670)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C507710)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C507510)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackException_TypeDefinitionIndex = 467;

	class EncoderFallbackException : public ::System::ArgumentException
	{
	public:
		::System::Char charUnknownHigh; // 0x90
		::System::Int32 index; // 0x94
		::System::Char charUnknownLow; // 0x98
		::System::Char charUnknown; // 0x9A

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
