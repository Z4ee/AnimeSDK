#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3B69E0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B3B5C50)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B3B5FA0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B6940)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackException_TypeDefinitionIndex = 483;

	class EncoderFallbackException : public ::System::ArgumentException
	{
	public:
		::System::Char charUnknownLow; // 0x90
		::System::Char charUnknownHigh; // 0x92
		::System::Char charUnknown; // 0x94
		::System::Int32 index; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Char a2, ::System::Char a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
