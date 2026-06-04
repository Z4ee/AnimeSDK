#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeoutException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_1_OFFSET UNITYSDK_OFFSET(0x1AFF3780)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x1AFF3840)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFF3950)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFF37A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFF3870)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF36C0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexMatchTimeoutException_TypeDefinitionIndex = 2511;

	class RegexMatchTimeoutException : public ::System::TimeoutException
	{
	public:
		::System::String* regexInput; // 0x88
		::System::String* regexPattern; // 0x90
		::System::TimeSpan matchTimeout; // 0x98

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::TimeSpan a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_OFFSET))(this);
		}

		::System::Void Init_1(::System::String* a1, ::System::String* a2, ::System::TimeSpan a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
