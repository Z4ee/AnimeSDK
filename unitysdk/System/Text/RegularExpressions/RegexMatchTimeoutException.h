#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeoutException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1DD32EA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_GET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1DD32EB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1DD32E90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_1_OFFSET UNITYSDK_OFFSET(0x1DD328C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x1DD32A00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DD32CF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD328E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD32A50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DD32B30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DD32C10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD327D0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexMatchTimeoutException_TypeDefinitionIndex = 2743;

	class RegexMatchTimeoutException : public ::System::TimeoutException
	{
	public:
		::System::String* regexInput; // 0x88
		::System::String* regexPattern; // 0x90
		::System::TimeSpan matchTimeout; // 0x98

		::System::Void _ctor(::System::String* regexInput, ::System::String* regexPattern, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_OFFSET))(this, regexInput, regexPattern, matchTimeout);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_3_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, si, context);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_OFFSET))(this);
		}

		::System::Void Init_1(::System::String* input, ::System::String* pattern, ::System::TimeSpan timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_INIT_1_OFFSET))(this, input, pattern, timeout);
		}

		::System::String* get_Pattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_GET_PATTERN_OFFSET))(this);
		}

		::System::String* get_Input()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_GET_INPUT_OFFSET))(this);
		}

		::System::TimeSpan get_MatchTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXMATCHTIMEOUTEXCEPTION_GET_MATCHTIMEOUT_OFFSET))(this);
		}
	};
}
